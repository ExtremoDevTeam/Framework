using Newtonsoft.Json;
using System;
using System.Collections.Generic;
using System.IO;

//-- https://github.com/Ni1kko/StayALiVE

namespace StayALiVE.Core
{
    internal class ProgramConfig
    {
        internal static ProgramConfig GetInstance(string path) { return new ProgramConfig(path); }
        internal ArmaServer.Settings Settings = null;
        private string ConfigFile { get; set; }

        private bool Exists() => File.Exists(ConfigFile);

        private void Delete() => File.Delete(ConfigFile);
        
        private void Create() => Save(ArmaServer.DefaultSetings);

        internal void Save(ArmaServer.Settings settings) => File.WriteAllText(ConfigFile, JsonConvert.SerializeObject(settings, Formatting.Indented));

        internal ArmaServer.Settings Load() => JsonConvert.DeserializeObject<ArmaServer.Settings>(File.ReadAllText(ConfigFile));

        internal ProgramConfig(string path)
        {
            ConfigFile = Path.Combine(path, "StayALiVE.json");

            if (!Exists())
            {
                Create();
                Environment.Exit(0);
            }

            Settings = Load();
        }

    }
}
