using System.IO;

namespace StayALiVE.Core
{
    internal class TempFolder
    {
        internal string SelectedWorld { get; private set; } = string.Empty;
        internal string MainDirectory { get; private set; } = string.Empty;
        internal bool IsPacked { get; private set; } = false;
        internal bool CopiedToTemp { get; private set; } = false;
        internal bool CopiedFromTemp { get; private set; } = false;
        internal string RootDirectory => Path.Combine(MainDirectory, "Missions", SelectedWorld);
        internal string BinDirectory => Path.Combine(RootDirectory, "Bin");
        internal string BinMissionDirectory => Path.Combine(BinDirectory, $"Extremo_Mission.{SelectedWorld}");
        internal string BinServerDirectory => Path.Combine(BinDirectory, "Extremo_Server");

        internal TempFolder(string directory, string selectedWorld)
        {
            MainDirectory = directory;
            SelectedWorld = selectedWorld;
        }

        internal string GetConfigFilePath() => Path.Combine(RootDirectory, Program.Config.Settings.CfgDedicatedServer());
        internal string GetSQMFilePath() => Path.Combine(RootDirectory, "mission.sqm");

        internal bool CopyToTemp()
        { 
            IsPacked = false;
            CopiedFromTemp = false;

            //Create workspace bin
            if (!Directory.Exists(BinDirectory)) Directory.CreateDirectory(BinDirectory);

            //Purge old temp framwork folder
            if (Directory.Exists(BinMissionDirectory)) Directory.Delete(BinMissionDirectory, true);
            if(Directory.Exists(BinServerDirectory)) Directory.Delete(BinServerDirectory, true);

            //Copy framwork
            Helpers.CopyFilesRecursively(Path.Combine(MainDirectory, $"Extremo_Mission.World"), BinMissionDirectory);
            Helpers.CopyFilesRecursively(Path.Combine(MainDirectory, "Extremo_Server"), BinServerDirectory);

            //Copy SQM into temp framework folder
            File.Copy(GetSQMFilePath(), Path.Combine(BinMissionDirectory, "mission.sqm"));

            CopiedToTemp = File.Exists(Path.Combine(BinMissionDirectory, "description.ext")) && File.Exists(Path.Combine(BinMissionDirectory, "mission.sqm"));
            return CopiedToTemp;
        }
        internal bool PackAndPrepare()
        {
            if (!CopiedToTemp || IsPacked) return false;
            Helpers.PackPBO(BinMissionDirectory);
            Helpers.PackPBO(BinServerDirectory);

            IsPacked = File.Exists($"{BinMissionDirectory}.pbo") && File.Exists($"{BinMissionDirectory}.pbo");
            return IsPacked;
        }
        internal bool CopyFromTemp()
        {
            if (!CopiedToTemp || !IsPacked) return false;

            //Copy mission.pbo from temp folder to server direcrtory
            string newMission = Path.Combine(Program.Config.Settings.ServerDirectory, $"mpmissions\\Extremo_Mission.{SelectedWorld}.pbo.pending");
            if (File.Exists(newMission)) File.Delete(newMission);
            File.Copy(BinMissionDirectory + ".pbo", newMission);

            //Copy server.pbo from temp folder to server direcrtory
            string newServer = Path.Combine(Program.Config.Settings.ServerDirectory, "@ExtremoServer\\addons\\Extremo_Server.pbo.pending");
            if (File.Exists(newServer)) File.Delete(newServer);
            File.Copy(BinServerDirectory + ".pbo", newServer);

            //Copy server.cfg from temp folder to server direcrtory
            string newConfig = Path.Combine(Program.Config.Settings.CfgsPath(), Program.Config.Settings.CfgDedicatedServer() + ".pending");
            if (File.Exists(newConfig)) File.Delete(newConfig);
            File.Copy(GetConfigFilePath(), newConfig);

            CopiedFromTemp = File.Exists(newMission) && File.Exists(newServer) && File.Exists(newConfig);
            return CopiedFromTemp;
        }
    }
}
