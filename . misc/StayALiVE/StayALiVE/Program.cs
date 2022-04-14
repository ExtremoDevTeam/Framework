using System;
using System.Diagnostics;
using System.Windows.Forms;
using StayALiVE.Core;

//-- https://github.com/Ni1kko/StayALiVE

namespace StayALiVE
{
    internal class Program
    {  
        internal static Program Extremo;
        internal static ProgramAssembly Assembly;
        internal static ProgramConfig Config;
        internal static ArmaServer Server;

        [STAThread]
        internal static void Main() => Extremo = new Program();
        private Program()
        {
            Assembly = ProgramAssembly.GetInstance();
            Application.EnableVisualStyles();
            Application.SetCompatibleTextRenderingDefault(false);
            Init();
        }

        internal static void Init()
        {  
            if (Helpers.ApplicationRunning(Process.GetCurrentProcess().ProcessName))
            {
                MessageBox.Show("StayALiVE Already Running","Error");
                Environment.Exit(0);
            }

            if (Helpers.ApplicationRunning("arma3server.exe"))
            {
                var dialogResult = MessageBox.Show("arma3server.exe is running\nWould you like to kill all instances?", "Warning", MessageBoxButtons.YesNoCancel);
                if (dialogResult == DialogResult.Yes) Helpers.ApplicationTerminate("arma3server.exe");
            }

            if (Helpers.ApplicationRunning("arma3server_x64.exe"))
            {
                var dialogResult = MessageBox.Show("arma3server_x64.exe is running\nWould you like to kill all instances?", "Warning", MessageBoxButtons.YesNoCancel);
                if(dialogResult == DialogResult.Yes) Helpers.ApplicationTerminate("arma3server_x64.exe");
            }

            Config = ProgramConfig.GetInstance(Assembly.Path());
            Server = ArmaServer.GetInstance();

            Application.Run(Server.Ui);
        }
    }
}