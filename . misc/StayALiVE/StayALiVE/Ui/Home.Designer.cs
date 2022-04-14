namespace StayALiVE
{
    partial class Home
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Home));
            this.StartSwitch = new MetroFramework.Controls.MetroToggle();
            this.RepackAll_Tile = new MetroFramework.Controls.MetroTile();
            this.SidePanel = new System.Windows.Forms.Panel();
            this.Wiki_Tile = new MetroFramework.Controls.MetroTile();
            this.Download_Tile = new MetroFramework.Controls.MetroTile();
            this.Update_Tile = new MetroFramework.Controls.MetroTile();
            this.pidLabel = new System.Windows.Forms.Label();
            this.pidValueBox = new System.Windows.Forms.Label();
            this.MissionFiles_ComboBox = new MetroFramework.Controls.MetroComboBox();
            this.World = new System.Windows.Forms.Label();
            this.RPT_Tile = new MetroFramework.Controls.MetroTile();
            this.SidePanel.SuspendLayout();
            this.SuspendLayout();
            // 
            // StartSwitch
            // 
            this.StartSwitch.Appearance = System.Windows.Forms.Appearance.Button;
            this.StartSwitch.AutoSize = true;
            this.StartSwitch.BackColor = System.Drawing.SystemColors.ControlLight;
            this.StartSwitch.BackgroundImageLayout = System.Windows.Forms.ImageLayout.None;
            this.StartSwitch.CheckAlign = System.Drawing.ContentAlignment.MiddleCenter;
            this.StartSwitch.CustomBackground = true;
            this.StartSwitch.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.StartSwitch.Location = new System.Drawing.Point(131, 129);
            this.StartSwitch.Name = "StartSwitch";
            this.StartSwitch.Size = new System.Drawing.Size(80, 23);
            this.StartSwitch.Style = MetroFramework.MetroColorStyle.Silver;
            this.StartSwitch.TabIndex = 0;
            this.StartSwitch.Text = "Off";
            this.StartSwitch.Theme = MetroFramework.MetroThemeStyle.Dark;
            this.StartSwitch.UseStyleColors = true;
            this.StartSwitch.UseVisualStyleBackColor = false;
            this.StartSwitch.CheckedChanged += new System.EventHandler(this.StartSwitch_CheckedChanged);
            // 
            // RepackAll_Tile
            // 
            this.RepackAll_Tile.Location = new System.Drawing.Point(3, 129);
            this.RepackAll_Tile.Name = "RepackAll_Tile";
            this.RepackAll_Tile.Size = new System.Drawing.Size(123, 36);
            this.RepackAll_Tile.TabIndex = 1;
            this.RepackAll_Tile.Text = "Repack Everything";
            this.RepackAll_Tile.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            this.RepackAll_Tile.Click += new System.EventHandler(this.RepackAll_Tile_Click);
            // 
            // SidePanel
            // 
            this.SidePanel.BackColor = System.Drawing.Color.Black;
            this.SidePanel.Controls.Add(this.Wiki_Tile);
            this.SidePanel.Controls.Add(this.Download_Tile);
            this.SidePanel.Controls.Add(this.Update_Tile);
            this.SidePanel.Controls.Add(this.RepackAll_Tile);
            this.SidePanel.Location = new System.Drawing.Point(-3, -4);
            this.SidePanel.Name = "SidePanel";
            this.SidePanel.Size = new System.Drawing.Size(126, 164);
            this.SidePanel.TabIndex = 2;
            // 
            // Wiki_Tile
            // 
            this.Wiki_Tile.ForeColor = System.Drawing.Color.White;
            this.Wiki_Tile.Location = new System.Drawing.Point(3, 3);
            this.Wiki_Tile.Name = "Wiki_Tile";
            this.Wiki_Tile.Size = new System.Drawing.Size(125, 36);
            this.Wiki_Tile.TabIndex = 4;
            this.Wiki_Tile.Text = "Open Wiki";
            this.Wiki_Tile.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            this.Wiki_Tile.Click += new System.EventHandler(this.Wiki_Tile_Click);
            // 
            // Download_Tile
            // 
            this.Download_Tile.ForeColor = System.Drawing.Color.White;
            this.Download_Tile.Location = new System.Drawing.Point(3, 45);
            this.Download_Tile.Name = "Download_Tile";
            this.Download_Tile.Size = new System.Drawing.Size(123, 36);
            this.Download_Tile.TabIndex = 3;
            this.Download_Tile.Text = "Download ArmA";
            this.Download_Tile.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            this.Download_Tile.Click += new System.EventHandler(this.Download_Tile_Click);
            // 
            // Update_Tile
            // 
            this.Update_Tile.Location = new System.Drawing.Point(3, 87);
            this.Update_Tile.Name = "Update_Tile";
            this.Update_Tile.Size = new System.Drawing.Size(125, 36);
            this.Update_Tile.TabIndex = 2;
            this.Update_Tile.Text = "Update ArmA";
            this.Update_Tile.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            this.Update_Tile.Click += new System.EventHandler(this.Update_Tile_Click);
            // 
            // pidLabel
            // 
            this.pidLabel.AutoSize = true;
            this.pidLabel.Location = new System.Drawing.Point(132, 41);
            this.pidLabel.Name = "pidLabel";
            this.pidLabel.Size = new System.Drawing.Size(59, 13);
            this.pidLabel.TabIndex = 3;
            this.pidLabel.Text = "ProcessID:";
            // 
            // pidValueBox
            // 
            this.pidValueBox.AutoSize = true;
            this.pidValueBox.Location = new System.Drawing.Point(188, 41);
            this.pidValueBox.Name = "pidValueBox";
            this.pidValueBox.Size = new System.Drawing.Size(16, 13);
            this.pidValueBox.TabIndex = 4;
            this.pidValueBox.Text = "-1";
            // 
            // MissionFiles_ComboBox
            // 
            this.MissionFiles_ComboBox.FormattingEnabled = true;
            this.MissionFiles_ComboBox.ItemHeight = 23;
            this.MissionFiles_ComboBox.Location = new System.Drawing.Point(131, 87);
            this.MissionFiles_ComboBox.Name = "MissionFiles_ComboBox";
            this.MissionFiles_ComboBox.Size = new System.Drawing.Size(80, 29);
            this.MissionFiles_ComboBox.TabIndex = 5;
            this.MissionFiles_ComboBox.SelectedIndexChanged += new System.EventHandler(this.MissionFiles_ComboBox_SelectedIndexChanged);
            // 
            // World
            // 
            this.World.AutoSize = true;
            this.World.Location = new System.Drawing.Point(132, 64);
            this.World.Name = "World";
            this.World.Size = new System.Drawing.Size(79, 13);
            this.World.TabIndex = 6;
            this.World.Text = "Current Mission";
            // 
            // RPT_Tile
            // 
            this.RPT_Tile.ForeColor = System.Drawing.Color.White;
            this.RPT_Tile.Location = new System.Drawing.Point(124, -1);
            this.RPT_Tile.Name = "RPT_Tile";
            this.RPT_Tile.Size = new System.Drawing.Size(94, 36);
            this.RPT_Tile.Style = MetroFramework.MetroColorStyle.Silver;
            this.RPT_Tile.TabIndex = 7;
            this.RPT_Tile.Text = "RPT Log";
            this.RPT_Tile.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            this.RPT_Tile.Theme = MetroFramework.MetroThemeStyle.Dark;
            this.RPT_Tile.Click += new System.EventHandler(this.RPT_Tile_Click);
            // 
            // Home
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.ControlLight;
            this.ClientSize = new System.Drawing.Size(217, 160);
            this.Controls.Add(this.RPT_Tile);
            this.Controls.Add(this.World);
            this.Controls.Add(this.MissionFiles_ComboBox);
            this.Controls.Add(this.pidValueBox);
            this.Controls.Add(this.SidePanel);
            this.Controls.Add(this.StartSwitch);
            this.Controls.Add(this.pidLabel);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedToolWindow;
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.MaximumSize = new System.Drawing.Size(500, 199);
            this.MinimumSize = new System.Drawing.Size(230, 199);
            this.Name = "Home";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Extremo: Offline";
            this.SidePanel.ResumeLayout(false);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        internal MetroFramework.Controls.MetroToggle StartSwitch;
        internal MetroFramework.Controls.MetroTile RepackAll_Tile;
        internal System.Windows.Forms.Panel SidePanel;
        internal MetroFramework.Controls.MetroTile Wiki_Tile;
        internal MetroFramework.Controls.MetroTile Download_Tile;
        internal MetroFramework.Controls.MetroTile Update_Tile;
        internal System.Windows.Forms.Label pidLabel;
        internal System.Windows.Forms.Label pidValueBox;
        internal MetroFramework.Controls.MetroComboBox MissionFiles_ComboBox;
        internal System.Windows.Forms.Label World;
        internal MetroFramework.Controls.MetroTile RPT_Tile;
    }
}