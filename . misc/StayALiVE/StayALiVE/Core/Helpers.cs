using System;
using System.Diagnostics;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;

namespace StayALiVE.Core
{
    internal class Helpers
    {
        internal static bool ApplicationRunning(string processName) => Process.GetProcessesByName(processName).Length > 1;
        internal static bool ApplicationRunning(int processID)
        {
            try { Process.GetProcessById(processID); }
            catch (InvalidOperationException) { return false; }
            catch (ArgumentException) { return false; }
            return true;
        }
        internal static void ApplicationTerminate(string taskname)
        {
            string processName = taskname;
            string fixstring = taskname.Replace(".exe", "");

            if (taskname.Contains(".exe"))
            {
                foreach (Process process in Process.GetProcessesByName(fixstring))
                {
                    process.Kill();
                }
            }
            else if (!taskname.Contains(".exe"))
            {
                foreach (Process process in Process.GetProcessesByName(processName))
                {
                    process.Kill();
                }
            }
        }
        internal static void ApplicationTerminate(int processID) => Process.GetProcessById(processID).Kill();
        internal static void CopyFilesRecursively(string sourcePath, string targetPath)
        {
            foreach (string dirPath in Directory.GetDirectories(sourcePath, "*", SearchOption.AllDirectories)) Directory.CreateDirectory(dirPath.Replace(sourcePath, targetPath));
            foreach (string newPath in Directory.GetFiles(sourcePath, "*.*", SearchOption.AllDirectories)) File.Copy(newPath, newPath.Replace(sourcePath, targetPath), true);
        }
        internal static bool IsTextFile(string source) => (source.EndsWith(".sqf") || source.EndsWith(".ext") || source.EndsWith(".hpp") || source.EndsWith(".cpp") || source.EndsWith(".h") || source.EndsWith(".inc"));
        internal static string RemoveComments(string source) => Regex.Replace(source, @"/\*(.*?)\*/|//(.*?)\r?\n|""((\\[^\n]|[^""\n])*)""|@(""[^""]*"")+", me => (me.Value.StartsWith("/*") || me.Value.StartsWith("//")) ? me.Value.StartsWith("//") ? Environment.NewLine : "" : me.Value, RegexOptions.Singleline);
        internal static string OneLine(string source) => RemoveComments(source).Replace("\n", " ").Replace("\r", "");
        internal static void PackPBO(string target)
        {  
            //New instance of PBO packer
            var pboPacker = new PBO.PboFile();

            //Create Backup
            if (File.Exists($"{target}.pbo")) File.Move($"{target}.pbo", $"{target}_" + DateTime.Now.ToString("MM-dd-yyyy_hh-mm-ss-tt") + ".pbo");

            //Build PBO
            foreach (string originalPath in Directory.GetFiles(target, "*", SearchOption.AllDirectories))
            {
                //Fix output name (remove spaces from file path)
                string newPath = originalPath.Replace(target, "");
                
                //Fix output name (remove start slash from file path)
                string fileName = newPath.StartsWith(@"\") ? newPath.Substring(1) : newPath;
                
                //Convert SQM (we do this due to `PboFile`s horrible behaviour)
                if (originalPath.EndsWith(".sqm"))
                {
                    //TO BE ADDED
                }

                //Read file contents
                string fileContents = File.ReadAllText(originalPath);

                //One line and remove comments from each packed text file (sqf,hpp,cpp,ext... plus more)
                //if (IsTextFile(originalPath)) fileContents = (!fileContents.Contains("#define") && !fileContents.Contains("#include")) ? OneLine(fileContents) : RemoveComments(fileContents);

                //Add file to stream
                pboPacker.AddEntry(fileName, Encoding.UTF8.GetBytes(fileContents));
            }

            //Save PBO
            pboPacker.Save($"{target}.pbo");

            //Dispose PBO file stream
            pboPacker.Dispose();

            //Purge directory if created
            if (File.Exists($"{target}.pbo")) Directory.Delete(target, true);
        }
    }
}
