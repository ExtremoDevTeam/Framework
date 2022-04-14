using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Threading.Tasks;
using System.Windows.Forms;

//-- https://github.com/Ni1kko/StayALiVE

namespace StayALiVE.Core
{
    internal class ArmaServer
    {
        internal static ArmaServer GetInstance() { return new ArmaServer(); }
        internal Home Ui { get; set; }
        private int ProcID { get; set; } = -1;
        private bool Toggle { get; set; } = false;
        private string CMDLine { get; set; } = string.Empty;
        private bool IsRunning { get => Helpers.ApplicationRunning(ProcID); }

        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="config"></param>
        internal ArmaServer()
        {
            CMDLine = Program.Config.Settings.ToString();
            Ui = Home.GetInstance(); 
        } 

        /// <summary>
        /// Server (Kill-start) Toggle
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        internal void SwitchOnlineState(object sender, EventArgs e)
        {
            if (Ui.StartSwitch.Checked)
            {
                Toggle = false;
                Ui.MissionFiles_ComboBox.Enabled = false;
                Ui.SidePanel.Enabled = false;
                Run();
            }
            else
            { 
                Ui.MissionFiles_ComboBox.Enabled = true;
                Ui.SidePanel.Enabled = true;
                Toggle = true;
                Die();
            }
            Ui.pidValueBox.Text = ProcID.ToString();
            Ui.Text = Toggle ? "Extremo: Offline" : "Extremo: Online";
        }

        /// <summary>
        /// Start Server
        /// </summary>
        private void Run()
        {
            if (Toggle || IsRunning) return;

            void Exited(object sender, EventArgs e) => Run();
            var procname = Program.Config.Settings.Enable64Bit ? "arma3server_x64.exe" : "arma3server.exe";

            string selectedWorld = Ui.MissionFiles_ComboBox.Items[Program.Config.Settings.MissionFile].ToString();
            string missionsPath = Path.Combine(Program.Config.Settings.FrameworkDirectory, $"Missions");
             
            string cfgfile = Path.Combine(Program.Config.Settings.CfgsPath(), Program.Config.Settings.CfgDedicatedServer());
            string newCfgfile = $"{cfgfile}.pending";
            if (File.Exists(newCfgfile))
            {
                File.Delete(cfgfile);
                File.Move(newCfgfile, cfgfile);
                MessageBox.Show($"{Program.Config.Settings.CfgDedicatedServer()} has been updated!", "Succses");
            }

            string missionfile = Path.Combine(Program.Config.Settings.ServerDirectory, "mpmissions", $"Extremo_Mission.{selectedWorld}.pbo");
            string newMissionfile = $"{missionfile}.pending";
            if (File.Exists(newMissionfile))
            {
                File.Delete(missionfile);
                File.Move(newMissionfile, missionfile);
                MessageBox.Show($"Extremo_Mission.{selectedWorld}.pbo has been updated!", "Succses");
            }

            
            string serverMod = Path.Combine(Program.Config.Settings.ServerDirectory, "@ExtremoServer\\addons", $"Extremo_Server.pbo");
            string newServerMod = $"{serverMod}.pending";
            if (File.Exists(newServerMod))
            {
                File.Delete(serverMod);
                File.Move(newServerMod, serverMod);
                MessageBox.Show($"Extremo_Server.pbo has been updated!", "Succses");
            }

            var serverProcess = new Process { StartInfo = new ProcessStartInfo { FileName = Program.Config.Settings.ServerDirectory.Equals(string.Empty) ? procname : Path.Combine(Program.Config.Settings.ServerDirectory, procname), Arguments = CMDLine }, EnableRaisingEvents = true };
            serverProcess.Exited += Exited;
            serverProcess.Start();
            ProcID = serverProcess.Id;
            Ui.pidValueBox.Text = ProcID.ToString();
            Ui.Text = ProcID == -1 ? "Extremo: Offline" : "Extremo: Online";
        }

        /// <summary>
        /// Kill Server
        /// </summary>
        private void Die()
        {
            if (!Toggle || !IsRunning) return;
            Task.Delay(1000);
            Helpers.ApplicationTerminate(ProcID);
            ProcID = -1;
        }

        internal static readonly string Defaultpath = "D:\\SteamLibrary\\steamapps\\common\\Arma3Server";
        
        internal static Settings DefaultSetings = new()
        {
            Port = 2302,
            ProfileName = "Admin",
            ServerDirectory = Defaultpath,
            FrameworkDirectory = "D:\\GitHub\\Repos\\Ni1kko\\A3Extremo",
            MissionFile = 2,
            MissionFiles = new() { "Altis", "VR", "OttawaCounty" },
            ServerMods = new() { },
            ClientMods = new() { },
            EnableHyperThreading = false,
            EnableLargePage = false,
            EnableExperimentalAlg = true,
            EnableAutoInit = true,
            Enable64Bit = true
        };


        /// <summary>
        /// 
        /// </summary>
        internal class Settings
        {
            private static List<string> LoadedServerMods { get; set; } = new() { };
            private static List<string> LoadedClientMods { get; set; } = new() { };
            public int Port { get; set; }
            public string ProfileName { get; set; }
            public string ServerDirectory { get; set; }
            public string FrameworkDirectory { get; set; }
            public int MissionFile { get; set; }
            public List<string> MissionFiles { get; set; }
            public List<string> ServerMods { get; set; }
            public List<string> ClientMods { get; set; }
            public bool EnableHyperThreading { get; set; }
            public bool EnableLargePage { get; set; }
            public bool EnableExperimentalAlg { get; set; }
            public bool EnableAutoInit { get; set; }
            public bool Enable64Bit { get; set; }
             
            public string CfgsPath() => Path.Combine(ServerDirectory, "@ExtremoServer", "server_configs");
            public string ProfilesPath() => Path.Combine(CfgsPath(), "serverData");
            public string CfgPerformance() => "A3_Performance.cfg";
            public string CfgDedicatedServer() => "A3_DedicatedServer.cfg";

            public override string ToString()
            {  
                //Server mods
                string svrmods = "";
                foreach (string mod in ServerMods)
                {
                    if (LoadedServerMods.Contains(mod)) continue;
                    LoadedServerMods.Add(mod);
                    svrmods += $"{mod};";
                }
                if (svrmods.EndsWith(";")) svrmods = svrmods.TrimEnd(';');

                //Client mods
                string clientmods = "";
                foreach (string mod in ClientMods)
                {
                    if (LoadedClientMods.Contains(mod)) continue;
                    LoadedClientMods.Add(mod);
                    clientmods += $"{mod};";
                }
                if (clientmods.EndsWith(";")) clientmods = clientmods.TrimEnd(';');

                //Build commandline
                 string output =                      $"-port={Port} " +
                                                      $"-profiles={ProfilesPath()} " +
                                                      $"-name={ProfileName} " +
                                                      $"-cfg={Path.Combine(CfgsPath(), CfgPerformance())} " +
                                                      $"-config={Path.Combine(CfgsPath(), CfgDedicatedServer())} ";
                if (svrmods.Length > 0)     output += $"-servermod=@ExtremoServer;{svrmods} ";
                else                        output += $"-servermod=@ExtremoServer ";
                if (clientmods.Length > 0)  output += $"-mod={clientmods} ";
                if (EnableHyperThreading)   output += $"-enableHT ";
                if (EnableLargePage)        output += $"-hugepages ";
                if (EnableExperimentalAlg)  output += $"-bandwidthAlg=2 ";
                if (EnableAutoInit)         output += $"-autoinit";
                return output;
            }
        }

    }
}
