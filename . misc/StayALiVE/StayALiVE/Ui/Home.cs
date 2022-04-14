using System;
using System.Data;
using System.IO;
using System.Linq;
using System.Windows.Forms;

namespace StayALiVE
{
    internal partial class Home : Form
    {
        internal static Home GetInstance() { return new Home(); }
        
        internal Home()
        {
            InitializeComponent();
            Program.Config.Settings.MissionFiles.ForEach(missionFile => MissionFiles_ComboBox.Items.Add(missionFile));
            if (MissionFiles_ComboBox.Items.Count > 0) 
                MissionFiles_ComboBox.SelectedIndex = Program.Config.Settings.MissionFile; 
            else
                MissionFiles_ComboBox.Enabled = false;
        }
         
        private void Wiki_Tile_Click(object sender, EventArgs e) => System.Diagnostics.Process.Start("https://community.bistudio.com/wiki/Category:Arma_3");
        private void Download_Tile_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Feature Coming Soon!");
        }
        private void Update_Tile_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Feature Coming Soon!");
        }
        private void RepackAll_Tile_Click(object sender, EventArgs e)
        {
            if(Core.Helpers.ApplicationRunning("arma3server_x64.exe") || Core.Helpers.ApplicationRunning("arma3server.exe"))
            { 
                MessageBox.Show("Stop arma3server before continuing", "Error");
                return;
            }

            var Temp = new Core.TempFolder(Program.Config.Settings.FrameworkDirectory,
                MissionFiles_ComboBox.Items[Program.Config.Settings.MissionFile].ToString()
            );

            if (Temp.CopyToTemp())
            {
                if (Temp.PackAndPrepare())
                {
                    if (Temp.CopyFromTemp())
                    {
                        MessageBox.Show("Repack complete!");
                    }
                }
            }
        }
        private void RPT_Tile_Click(object sender, EventArgs e)
        {
            var RPTDirectoryPath = Program.Config.Settings.ProfilesPath();
            var RPTDirectoryInfo = new DirectoryInfo(RPTDirectoryPath); 
            var RPTFile = RPTDirectoryInfo.GetFiles("*.rpt").OrderByDescending(f => f.LastWriteTime).First(); 
            System.Diagnostics.Process.Start(RPTFile.FullName);
        }
        private void MissionFiles_ComboBox_SelectedIndexChanged(object sender, EventArgs e)
        {
            Program.Config.Settings.MissionFile = MissionFiles_ComboBox.SelectedIndex;
            Program.Config.Save(Program.Config.Settings);
        }
        private void StartSwitch_CheckedChanged(object sender, System.EventArgs e) => Program.Server.SwitchOnlineState(sender, e);
    }
}
