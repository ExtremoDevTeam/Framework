
/*
	## EXTREMO
	## Nikko Renolds
*/

class RscExtremo_Tablet
{
    idd = 1200;
    onLoad = "[""onLoad"",_this] call extremo_fnc_gui_tabletScreenEH;";
    onUnLoad = "[""onUnLoad"",_this] call extremo_fnc_gui_tabletScreenEH;";
    class controlsBackground
    {
        //-- Border 
        class TabletBorder : RscPicture
        { 
            moving = 1;
            text = "\Extremo_assets\texture\ui\tablet\tablet_ca.paa";
            x = 12 * (safezoneW / 40) + (safezoneX);
            y = 3.5 * (safezoneH / 25) + (safezoneY);
            w = 16 * (safezoneW / 40);
            h = 17 * (safezoneH / 25);
        };

        //-- Background
        class TabletBackground : RscPicture
        {
            idc = -1;
            text = "\Extremo_assets\texture\ui\tablet\tablet_back_ca.paa";
            x = 11.5 * (safezoneW / 40) + (safezoneX);
            y = 3 * (safezoneH / 25) + (safezoneY);
            w = 17 * (safezoneW / 40);
            h = 18 * (safezoneH / 25); 
        }; 
    };
    class controls
    {
        //-- Status bar controls (header)
        class TabletInfoBarGroup: RscControlsGroupNoScrollbar
        {
            idc = 101;
            x = 13.325 * (safezoneW / 40) + (safezoneX);
            y = 7.2 * (safezoneH / 25) + (safezoneY);
            w = 13.355 * (safezoneW / 40);
            h = 0.575 * (safezoneH / 25);
            class controls
            {
                class TabletInfoBarBack: RscText
                {
                    x = 0 * (safezoneW / 40);
                    y = 0.05 * (safezoneH / 25);
                    w = 13.4 * (safezoneW / 40);
                    h = 0.5 * (safezoneH / 25);
                    colorBackground[] = {0,0,0,1};
                };
                class TabletInfoBarTime: RscText
                {
                    idc = 102;
                    text = "88:88"; 
                    x = 12.3 * (safezoneW / 40);
                    y = 0.05 * (safezoneH / 25);
                    w = 1 * (safezoneW / 40);
                    h = 0.5 * (safezoneH / 25);
                    sizeEx = 0.45 * (safezoneH / 25);
                };
                class TabletInfoBarSignal: RscPicture
                {
                    idc = -1;
                    text = "\Extremo_assets\texture\ui\tablet\tabletbaricon_signal_ca.paa";
                    x = 11.9 * (safezoneW / 40);
                    y = 0.1 * (safezoneH / 25);
                    w = 0.365 * (safezoneW / 40);
                    h = 0.4 * (safezoneH / 25);
                };
                class TabletInfoBarBattery: RscPicture
                {
                    idc = -1;
                    text = "\Extremo_assets\texture\ui\tablet\tabletbaricon_battery_ca.paa";
                    x = 11.3 * (safezoneW / 40);
                    y = 0.1 * (safezoneH / 25);
                    w = 0.365 * (safezoneW / 40);
                    h = 0.4 * (safezoneH / 25);
                };
            };
        };
 
        //-- Main screen controls (content)
        class MainGroup: RscControlsGroupNoScrollbar
        { 
            idc = 106;   
            x = 13.3 * (safezoneW / 40) + (safezoneX);
            y = 7.6 * (safezoneH / 25) + (safezoneY);
            w = 13.4 * (safezoneW / 40);
            h = 9.2 * (safezoneH / 25);
            screenIdc[] = {
                107,    //-- LockScreen
                108,    //-- HomeScreen
                 
                109,    //-- BankingScreen
                130,    //-- ContactsScreen 
                131,    //-- Row1Btn3 

                132,    //-- Row2Btn1 
                110,    //-- Row2Btn2
                111,    //-- CraftingScreen 

                133,    //-- Row3Btn1 
                134,    //-- Row3Btn2 
                135,    //-- Row3Btn3 

                136,    //-- Row4Btn1
                137,    //-- Row4Btn2
                112,    //-- SyncScreen

                138,    //-- Row5Btn1
                139,    //-- Row5Btn2
                140,    //-- Row5Btn3

                141,    //-- Row6Btn1
                142,    //-- Row6Btn2
                143     //-- SettingsScreen
            };
            
            class controls
            {
                //-- Lock Screen
                class ScreenGroupLock: RscControlsGroupNoScrollbar
                {
                    idc = 107;
                    onScreenShow = "[""onScreenShow"",_this] call extremo_fnc_gui_tabletScreenLock;";
                    onScreenHide = "[""onScreenHide"",_this] call extremo_fnc_gui_tabletScreenLock;";
                    x = 0.1 * (safezoneW / 40);
                    y = 0.1 * (safezoneH / 25);
                    w = 13.2 * (safezoneW / 40);
                    h = 8.6 * (safezoneH / 25);
                    class controls
                    {
                        class LockScreenTime: RscText
                        {
                            idc = 113;
                            text = "88:88:88";
                            x = 8.1 * (safezoneW / 40);
                            y = 5.15 * (safezoneH / 25);
                            w = 5 * (safezoneW / 40);
                            h = 1.9 * (safezoneH / 25);
                            colorBackground[] = {0,0,0,0.5};
                            sizeEx = 1.8 * (safezoneH / 25);
                        };
                        class LockScreenDate: RscText
                        {
                            idc = 114;
                            text = "88 Wednesday September 8888";
                            x = 8.1 * (safezoneW / 40);
                            y = 7.15 * (safezoneH / 25);
                            w = 5 * (safezoneW / 40);
                            h = 0.5 * (safezoneH / 25);
                            colorBackground[] = {0,0,0,0.8};
                        };
                        class LockScreenVersion: RscText
                        {
                            idc = -1;
                            text = "Extremo XM8 tablet - Version 2.5201";
                            x = 8.1 * (safezoneW / 40);
                            y = 8.15 * (safezoneH / 25);
                            w = 5 * (safezoneW / 40);
                            h = 0.4 * (safezoneH / 25);
                            colorText[] = {1,1,1,0.5};
                            colorBackground[] = {0,0,0,0.2};
                            sizeEx = 0.4 * (safezoneH / 25);
                        };
                        class LockScreenLabelUnlock: RscStructuredText
                        {
                            idc = -1;
                            text = "<t>Hold <t color='#d79622'>[SPACE]</t> to unlock</t>";
                            x = 8.1 * (safezoneW / 40);
                            y = 4.25 * (safezoneH / 25);
                            w = 5 * (safezoneW / 40);
                            h = 0.6 * (safezoneH / 25);
                            colorBackground[] = {0,0,0,0.8};
                        };
                        class LockScreenUnlockBar: RscText
                        {
                            idc = 115;
                            x = 8.1 * (safezoneW / 40);
                            y = 4.85 * (safezoneH / 25);
                            w = 0; 
                            h = 0.04 * (safezoneH / 25);
                            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
                        };
                        class LockScreenInfoTitle: RscText
                        {
                            idc = 116;
                            text = "Latest Information"; 
                            x = 0.2 * (safezoneW / 40);
                            y = 0.25 * (safezoneH / 25);
                            w = 5.5 * (safezoneW / 40);
                            h = 0.6 * (safezoneH / 25);
                            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
                        };
                        class LockScreenInfo: RscStructuredText
                        {
                            idc = 117;
                            x = 0.2 * (safezoneW / 40);
                            y = 0.95 * (safezoneH / 25);
                            w = 5.5 * (safezoneW / 40);
                            h = 6.75 * (safezoneH / 25);
                            colorBackground[] = {0,0,0,0.5};
                        };
                    };
                };

                //-- HomeScreen
                class ScreenGroupApps: RscControlsGroupNoHScrollbar
                {
                    idc = 108;
                    x = 0.0 * (safezoneW / 40); 
                    y = 0.1 * (safezoneH / 25); 
                    w = 13.2 * (safezoneW / 40);
                    h = 8.6 * (safezoneH / 25);
                    class controls
                    {
                        class AppSectionGeneralTitle: RscText
                        {
                            idc = -1;
                            text = "Extremo Applications";
                            x = 0.1 * (safezoneW / 40);
                            y = 0.2 * (safezoneH / 25);
                            w = 12.9 * (safezoneW / 40);
                            h = 0.7 * (safezoneH / 25);
                            colorBackground[] = {0,0,0,0.8};
                            sizeEx = 0.6 * (safezoneH / 25);
                        };

                        //-- (ROW1 | BTN1) offset 1.0 x 0.1
                        class BankingApp : RscApplication
                        {
                            idc = -1;
                            x = 0.1 * (safezoneW / 40);
                            y = 1.0 * (safezoneH / 25); 
                            class Controls : Controls
                            {
                                class Back : Back
                                {
                                    idc = -1;
                                };
                                class IconBack : IconBack
                                {
                                    idc = -1;
                                };
                                class Title : Title
                                {
                                    idc = -1;
                                    text = "Banking";
                                };
                                class Icon : Icon
                                {
                                    idc = -1;
                                    text = "\Extremo_assets\texture\ui\tablet\Apps\tabletapps_banking_ca.paa";
                                    onButtonClick = "[""ScreenGroupsBanking""] call extremo_fnc_gui_tabletScreenSwitch;";
                                }; 
                            };
                        };
                        //-- (ROW1 | BTN2) offset 1.0 x 4.43
                        class ContactsApp : RscApplication
                        {
                            idc = -1;
                            x = 4.43 * (safezoneW / 40);
                            y = 1.0 * (safezoneH / 25); 
                            class Controls : Controls
                            {
                                class Back : Back
                                {
                                    idc = -1;
                                };
                                class IconBack : IconBack
                                {
                                    idc = -1;
                                };
                                class Title : Title
                                {
                                    idc = -1;
                                    text = "Contacts";
                                };
                                class Icon : Icon
                                {
                                    idc = -1;
                                    text = "\Extremo_assets\texture\ui\tablet\Apps\tabletapps_contacts_ca.paa";
                                    onButtonClick = "[""ScreenGroupsContacts""] call extremo_fnc_gui_tabletScreenSwitch;";
                                }; 
                            }; 
                        };
                        //--  (ROW1 | BTN3) offset 1.0 x 8.76
                        class Row1Btn3App : RscApplication
                        {
                            idc = -1;
                            x = 8.76 * (safezoneW / 40);
                            y = 1.0 * (safezoneH / 25); 
                            class Controls : Controls
                            {
                                class Back : Back
                                {
                                    idc = -1;
                                };
                                class IconBack : IconBack
                                {
                                    idc = -1;
                                };
                                class Title : Title
                                {
                                    idc = -1;
                                    text = "Row1Btn3App";
                                };
                                class Icon : Icon
                                {
                                    idc = -1;
                                    text = "\Extremo_assets\texture\ui\tablet\Apps\tabletapps_info_ca.paa";
                                    onButtonClick = "[""ScreenGroupsRow1Btn3""] call extremo_fnc_gui_tabletScreenSwitch;";
                                }; 
                            }; 
                        };

                        //--  (ROW2 | BTN1) offset 2.1 x 0.1
                        class Row2Btn1App : RscApplication
                        {
                            idc = -1;
                            x = 0.1 * (safezoneW / 40);
                            y = 2.1 * (safezoneH / 25);  
                            class Controls : Controls
                            {
                                class Back : Back
                                {
                                    idc = -1;
                                };
                                class IconBack : IconBack
                                {
                                    idc = -1;
                                };
                                class Title : Title
                                {
                                    idc = -1;
                                    text = "Row2Btn1App";
                                };
                                class Icon : Icon
                                {
                                    idc = -1;
                                    text = "\Extremo_assets\texture\ui\tablet\Apps\tabletapps_info_ca.paa";
                                    onButtonClick = "[""ScreenGroupsRow2Btn1""] call extremo_fnc_gui_tabletScreenSwitch;";
                                }; 
                            };
                        };
                        //--  (ROW2 | BTN2) offset 2.1 x 4.43
                        class Row2Btn2App : RscApplication
                        {
                            idc = -1;
                            x = 4.43 * (safezoneW / 40);
                            y = 2.1 * (safezoneH / 25); 
                            class Controls : Controls
                            {
                                class Back : Back
                                {
                                    idc = -1;
                                };
                                class IconBack : IconBack
                                {
                                    idc = -1;
                                };
                                class Title : Title
                                {
                                    idc = -1;
                                    text = "Row2Btn2";
                                };
                                class Icon : Icon
                                {
                                    idc = -1;
                                    text = "\Extremo_assets\texture\ui\tablet\Apps\tabletapps_info_ca.paa";
                                    onButtonClick = "[""ScreenGroupsRow2Btn2""] call extremo_fnc_gui_tabletScreenSwitch;";
                                };
                            };
                        };
                        //--  (ROW2 | BTN3) offset 2.1 x 8.76
                        class CraftingApp : RscApplication
                        {
                            idc = -1;
                            x = 8.76 * (safezoneW / 40);
                            y = 2.1 * (safezoneH / 25); 
                            class Controls : Controls
                            {
                                class Back : Back
                                {
                                    idc = -1;
                                };
                                class IconBack : IconBack
                                {
                                    idc = -1;
                                };
                                class Title : Title
                                {
                                    idc = -1;
                                    text = "Crafting";
                                };
                                class Icon : Icon
                                {
                                    idc = -1;
                                    text = "\Extremo_assets\texture\ui\tablet\Apps\tabletapps_info_ca.paa";
                                    onButtonClick = "[""ScreenGroupsCrafting""] call extremo_fnc_gui_tabletScreenSwitch;";
                                };
                            };
                        };
   
                        //--  (ROW3 | BTN1) offset 3.2 x 0.1
                        class Row3Btn1App : RscApplication
                        {
                            idc = -1;
                            x = 0.1 * (safezoneW / 40);
                            y = 3.2 * (safezoneH / 25); 
                            class Controls : Controls
                            {
                                class Back : Back
                                {
                                    idc = -1;
                                };
                                class IconBack : IconBack
                                {
                                    idc = -1;
                                };
                                class Title : Title
                                {
                                    idc = -1;
                                    text = "Row3Btn1App";
                                };
                                class Icon : Icon
                                {
                                    idc = -1;
                                    text = "\Extremo_assets\texture\ui\tablet\Apps\tabletapps_info_ca.paa";
                                    onButtonClick = "[""ScreenGroupsRow3Btn1""] call extremo_fnc_gui_tabletScreenSwitch;";
                                }; 
                            }; 
                        };
                        //--  (ROW3 | BTN2) offset 3.2 x 4.43
                        class Row3Btn2App : RscApplication
                        {
                            idc = -1;
                            x = 4.43 * (safezoneW / 40);
                            y = 3.2 * (safezoneH / 25); 
                            class Controls : Controls
                            {
                                class Back : Back
                                {
                                    idc = -1;
                                };
                                class IconBack : IconBack
                                {
                                    idc = -1;
                                };
                                class Title : Title
                                {
                                    idc = -1;
                                    text = "Row3Btn2";
                                };
                                class Icon : Icon
                                {
                                    idc = -1;
                                    text = "\Extremo_assets\texture\ui\tablet\Apps\tabletapps_info_ca.paa";
                                    onButtonClick = "[""ScreenGroupsRow3Btn2""] call extremo_fnc_gui_tabletScreenSwitch;";
                                }; 
                            };
                        };
                        //--  (ROW3 | BTN3) offset 3.2 x 8.76
                        class SyncApp : RscApplication
                        {
                            idc = -1;
                            x = 8.76 * (safezoneW / 40);
                            y = 3.2 * (safezoneH / 25); 
                            class Controls : Controls
                            {
                                class Back : Back
                                {
                                    idc = -1;
                                };
                                class IconBack : IconBack
                                {
                                    idc = -1;
                                };
                                class Title : Title
                                {
                                    idc = -1;
                                    text = "Sync";
                                };
                                class Icon : Icon
                                {
                                    idc = -1;
                                    text = "\Extremo_assets\texture\ui\tablet\Apps\tabletapps_sync_ca.paa";
                                    onButtonClick = "[""ScreenGroupsSync""] call extremo_fnc_gui_tabletScreenSwitch;";
                                };
                            };
                        };

                        //--  (ROW4 | BTN1) offset 4.3 x 0.1
                        class Row4Btn1App : RscApplication
                        {
                            idc = -1;
                            x = 0.1 * (safezoneW / 40);
                            y = 4.3 * (safezoneH / 25); 
                            class Controls : Controls
                            {
                                class Back : Back
                                {
                                    idc = -1;
                                };
                                class IconBack : IconBack
                                {
                                    idc = -1;
                                };
                                class Title : Title
                                {
                                    idc = -1;
                                    text = "Row4Btn1App";
                                };
                                class Icon : Icon
                                {
                                    idc = -1;
                                    text = "\Extremo_assets\texture\ui\tablet\Apps\tabletapps_info_ca.paa";
                                    onButtonClick = "[""ScreenGroupsRow4Btn1""] call extremo_fnc_gui_tabletScreenSwitch;";
                                }; 
                            }; 
                        };
                        //--  (ROW4 | BTN2) offset 4.3 x 4.43
                        class Row4Btn2App : RscApplication
                        {
                            idc = -1;
                            x = 4.43 * (safezoneW / 40);
                            y = 4.3 * (safezoneH / 25); 
                            class Controls : Controls
                            {
                                class Back : Back
                                {
                                    idc = -1;
                                };
                                class IconBack : IconBack
                                {
                                    idc = -1;
                                };
                                class Title : Title
                                {
                                    idc = -1;
                                    text = "Row4Btn2App";
                                };
                                class Icon : Icon
                                {
                                    idc = -1;
                                    text = "\Extremo_assets\texture\ui\tablet\Apps\tabletapps_info_ca.paa";
                                    onButtonClick = "[""ScreenGroupsRow4Btn2""] call extremo_fnc_gui_tabletScreenSwitch;";
                                }; 
                            }; 
                        };
                        //--  (ROW4 | BTN3) offset 4.3 x 8.76
                        class Row4Btn3 : RscApplication
                        {
                            idc = -1;
                            x = 8.76 * (safezoneW / 40);
                            y = 4.3 * (safezoneH / 25); 
                            class Controls : Controls
                            {
                                class Back : Back
                                {
                                    idc = -1;
                                };
                                class IconBack : IconBack
                                {
                                    idc = -1;
                                };
                                class Title : Title
                                {
                                    idc = -1;
                                    text = "Row43Btn3App";
                                };
                                class Icon : Icon
                                {
                                    idc = -1;
                                    text = "\Extremo_assets\texture\ui\tablet\Apps\tabletapps_info_ca.paa";
                                    onButtonClick = "[""ScreenGroupsRow4Btn3""] call extremo_fnc_gui_tabletScreenSwitch;";
                                }; 
                            }; 
                        };


                        //--  (ROW5 | BTN1) offset 5.4 x 0.1
                        class Row5Btn1App : RscApplication
                        {
                            idc = -1;
                            x = 0.1 * (safezoneW / 40);
                            y = 5.4 * (safezoneH / 25); 
                            class Controls : Controls
                            {
                                class Back : Back
                                {
                                    idc = -1;
                                };
                                class IconBack : IconBack
                                {
                                    idc = -1;
                                };
                                class Title : Title
                                {
                                    idc = -1;
                                    text = "Row5Btn1App";
                                };
                                class Icon : Icon
                                {
                                    idc = -1;
                                    text = "\Extremo_assets\texture\ui\tablet\Apps\tabletapps_info_ca.paa";
                                    onButtonClick = "[""ScreenGroupsRow5Btn1""] call extremo_fnc_gui_tabletScreenSwitch;";
                                }; 
                            }; 
                        };
                        //--  (ROW5 | BTN2) offset 5.4 x 4.43
                        class Row5Btn2App : RscApplication
                        {
                            idc = -1;
                            x = 4.43 * (safezoneW / 40);
                            y = 5.4 * (safezoneH / 25); 
                            class Controls : Controls
                            {
                                class Back : Back
                                {
                                    idc = -1;
                                };
                                class IconBack : IconBack
                                {
                                    idc = -1;
                                };
                                class Title : Title
                                {
                                    idc = -1;
                                    text = "Row5Btn2App";
                                };
                                class Icon : Icon
                                {
                                    idc = -1;
                                    text = "\Extremo_assets\texture\ui\tablet\Apps\tabletapps_info_ca.paa";
                                    onButtonClick = "[""ScreenGroupsRow5Btn2""] call extremo_fnc_gui_tabletScreenSwitch;";
                                }; 
                            }; 
                        };
                        //--  (ROW5 | BTN3) offset 5.4 x 8.76
                        class Row5Btn3App : RscApplication
                        {
                            idc = -1;
                            x = 8.76 * (safezoneW / 40);
                            y = 5.4 * (safezoneH / 25); 
                            class Controls : Controls
                            {
                                class Back : Back
                                {
                                    idc = -1;
                                };
                                class IconBack : IconBack
                                {
                                    idc = -1;
                                };
                                class Title : Title
                                {
                                    idc = -1;
                                    text = "Row5Btn3App";
                                };
                                class Icon : Icon
                                {
                                    idc = -1;
                                    text = "\Extremo_assets\texture\ui\tablet\Apps\tabletapps_info_ca.paa";
                                    onButtonClick = "[""ScreenGroupsRow5Btn3""] call extremo_fnc_gui_tabletScreenSwitch;";
                                }; 
                            }; 
                        };

                        //--  (ROW6 | BTN1) offset 6.5 x 0.1
                        class Row6Btn1App : RscApplication
                        {
                            idc = -1;
                            x = 0.1 * (safezoneW / 40);
                            y = 6.5 * (safezoneH / 25); 
                            class Controls : Controls
                            {
                                class Back : Back
                                {
                                    idc = -1;
                                };
                                class IconBack : IconBack
                                {
                                    idc = -1;
                                };
                                class Title : Title
                                {
                                    idc = -1;
                                    text = "Row6Btn1App";
                                };
                                class Icon : Icon
                                {
                                    idc = -1;
                                    text = "\Extremo_assets\texture\ui\tablet\Apps\tabletapps_info_ca.paa";
                                    onButtonClick = "[""ScreenGroupsRow6Btn1""] call extremo_fnc_gui_tabletScreenSwitch;";
                                }; 
                            }; 
                        };
                        //--  (ROW6 | BTN2) offset 6.5 x 4.43
                        class Row6Btn2App : RscApplication
                        {
                            idc = -1;
                            x = 4.43 * (safezoneW / 40);
                            y = 6.5 * (safezoneH / 25); 
                            class Controls : Controls
                            {
                                class Back : Back
                                {
                                    idc = -1;
                                };
                                class IconBack : IconBack
                                {
                                    idc = -1;
                                };
                                class Title : Title
                                {
                                    idc = -1;
                                    text = "Row6Btn2App";
                                };
                                class Icon : Icon
                                {
                                    idc = -1;
                                    text = "\Extremo_assets\texture\ui\tablet\Apps\tabletapps_info_ca.paa";
                                    onButtonClick = "[""ScreenGroupsRow6Btn2""] call extremo_fnc_gui_tabletScreenSwitch;";
                                }; 
                            }; 
                        };
                        //--  (ROW6 | BTN3) offset 6.5 x 8.76
                        class SettingsApp : RscApplication
                        {
                            idc = -1;
                            x = 8.76 * (safezoneW / 40);
                            y = 6.5 * (safezoneH / 25); 
                            class Controls : Controls
                            {
                                class Back : Back
                                {
                                    idc = -1;
                                };
                                class IconBack : IconBack
                                {
                                    idc = -1;
                                };
                                class Title : Title
                                {
                                    idc = -1;
                                    text = "Settings";
                                };
                                class Icon : Icon
                                {
                                    idc = -1;
                                    text = "\Extremo_assets\texture\ui\tablet\Apps\tabletapps_info_ca.paa";
                                    onButtonClick = "[""ScreenGroupsSettings""] call extremo_fnc_gui_tabletScreenSwitch;";
                                }; 
                            }; 
                        };

                    };
                };

                //-- HomeScreen Apps
                class ScreenGroupsBanking : RscControlsGroupNoScrollbar
                {
                    idc = 109;
                    onScreenShow = "[""onScreenShow"",_this] call extremo_fnc_gui_tabletScreenGroupBanking;";
                    onScreenHide = "[""onScreenHide"",_this] call extremo_fnc_gui_tabletScreenGroupBanking;";
                    x = 0 * (safezoneW / 40);
                    y = 0.2 * (safezoneH / 25);
                    w = 13.2 * (safezoneW / 40);
                    h = 8.6 * (safezoneH / 25);
                    class controls
                    {
                        class Title : RscText
                        {
                            idc = -1;
                            text = "Banking";
                            x = 0.2 * (safezoneW / 40);
                            y = 0.2 * (safezoneH / 25);
                            w = 12.8 * (safezoneW / 40);
                            h = 0.7 * (safezoneH / 25);
                            colorBackground[] = {0,0,0,0.75};
                            sizeEx = 0.6 * (safezoneH / 25);
                        }; 
                        class BG_Options : RscText
                        {
                            x = 0.2 * (safezoneW / 40);
                            y = 1.0 * (safezoneH / 25);
                            w = 12.8 * (safezoneW / 40);
                            h = 2 * (safezoneH / 25);
                            colorBackground[] = {0,0,0,0.75};
                        }; 
                        class Account_Title : RscText
                        {
                            x = 0.3 * (safezoneW / 40);
                            y = (1 + (1/3)) * (safezoneH / 25);
                            w = 3 * (safezoneW / 40);
                            h = 0.5 * (safezoneH / 25);
                            text = "Select Account:";
                        }; 
                        class Account_Combo : Rsccombo
                        {
                            idc = 118;
                            x = 2.75 * (safezoneW / 40);
                            y = (1 + (1/3)) * (safezoneH / 25);
                            w = 3.25 * (safezoneW / 40);
                            h = 0.5 * (safezoneH / 25);
                            onLBSelChanged = "[""onAccountChanged"",_this] call extremo_fnc_gui_tabletScreenGroupBanking;";
                        }; 
                        class Target_Title : RscText
                        {
                            x = 0.3 * (safezoneW / 40);
                            y = (2.5 - (1/3)) * (safezoneH / 25);
                            w = 3 * (safezoneW / 40);
                            h = 0.5 * (safezoneH / 25);
                            text = "Select Target:";
                        };
                        class Target_Combo : Rsccombo
                        {
                            idc = 119;
                            x = 2.75 * (safezoneW / 40);
                            y = (2.5 - (1/3)) * (safezoneH / 25);
                            w = 3.25 * (safezoneW / 40);
                            h = 0.5 * (safezoneH / 25);
                            onLBSelChanged = "[""onTargetChanged"",_this] call extremo_fnc_gui_tabletScreenGroupBanking;";
                        }; 
                        class Amount_Title : RscText
                        {
                            x = 6.1 * (safezoneW / 40);
                            y = (1 + (1/3)) * (safezoneH / 25);
                            w = 3 * (safezoneW / 40);
                            h = 0.5 * (safezoneH / 25);
                            text = "Select Amount:";
                        }; 
                        class EditAmount: RscEdit
                        {
                            idc = 120;
                            style = 0x02 + 0x200; 
                            x = 8 * (safezoneW / 40);
                            y = (1 + (1/3)) * (safezoneH / 25);
                            w = 4.9 * (safezoneW / 40);
                            h = 0.5 * (safezoneH / 25);
                            onKeyUp = "[""onAmountChar"",_this] call extremo_fnc_gui_tabletScreenGroupBanking;";
                        };
                        class AmountSlider: RscXSlider
                        {
                            idc = 121;
                            x = 6.1 * (safezoneW / 40);
                            y = (2.5 - (1/3)) * (safezoneH / 25);
                            w = 6.8 * (safezoneW / 40);
                            h = 0.6 * (safezoneH / 25);
                            onSliderPosChanged = "[""onSliderAmount"",_this] call extremo_fnc_gui_tabletScreenGroupBanking;";
                        }; 
                        class Confirm : RscButton
                        {
                            idc = 122;
                            x = 10 * (safezoneW / 40);
                            y = 3.1 * (safezoneH / 25);
                            w = 3 * (safezoneW / 40);
                            h = 0.5 * (safezoneH / 25);
                            text = "Transfer";
                            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
                            onMouseButtonClick = "[""onConfirm"",_this] call extremo_fnc_gui_tabletScreenGroupBanking;";
                        }; 
                        class BG_Balance : RscText
                        {
                            x = 0.2 * (safezoneW / 40);
                            y = 3.1 * (safezoneH / 25);
                            w = 6 * (safezoneW / 40);
                            h = 0.5 * (safezoneH / 25);
                            colorBackground[] = {0,0,0,0.75};
                        }; 
                        class Title_Balance : RscText
                        {
                            idc = 123;
                            x = 0.3 * (safezoneW / 40);
                            y = 3.1 * (safezoneH / 25);
                            w = 6 * (safezoneW / 40);
                            h = 0.5 * (safezoneH / 25);
                            text = "Current balance: £ 0,-";
                        };
                    };
                };

                class ScreenGroupsContacts : RscControlsGroupNoScrollbar
                {
                    idc = 130;
                    onScreenShow = "[""onScreenShow"",_this] call extremo_fnc_gui_tabletScreenGroupContacts;";
                    onScreenHide = "[""onScreenHide"",_this] call extremo_fnc_gui_tabletScreenGroupContacts;";
                    x = 0 * (safezoneW / 40);
                    y = 0.2 * (safezoneH / 25);
                    w = 13.2 * (safezoneW / 40);
                    h = 8.6 * (safezoneH / 25);
                    class controls
                    {

                    };
                }; 

                class ScreenGroupsRow1Btn3 : RscControlsGroupNoScrollbar
                {
                    idc = 131; 
                    x = 0 * (safezoneW / 40);
                    y = 0.2 * (safezoneH / 25);
                    w = 13.2 * (safezoneW / 40);
                    h = 8.6 * (safezoneH / 25);
                    class controls
                    {

                    };
                };

                class ScreenGroupsRow2Btn1 : RscControlsGroupNoScrollbar
                {
                    idc = 132; 
                    x = 0 * (safezoneW / 40);
                    y = 0.2 * (safezoneH / 25);
                    w = 13.2 * (safezoneW / 40);
                    h = 8.6 * (safezoneH / 25);
                    class controls
                    {

                    };
                };
  
                class ScreenGroupsRow2Btn2 : RscControlsGroupNoScrollbar
                {
                    idc = 110;
                    x = 0 * (safezoneW / 40);
                    y = 0.2 * (safezoneH / 25);
                    w = 13.2 * (safezoneW / 40);
                    h = 8.6 * (safezoneH / 25);
                    class controls
                    {

                    };
                };
                  
                class ScreenGroupsCrafting : RscControlsGroupNoScrollbar
                {
                    idc = 111;
                    onScreenShow = "[""onScreenShow"",_this] call extremo_fnc_gui_tabletScreenGroupCrafting;";
                    onScreenHide = "[""onScreenHide"",_this] call extremo_fnc_gui_tabletScreenGroupCrafting;";
                    x = 0 * (safezoneW / 40);
                    y = 0.2 * (safezoneH / 25);
                    w = 13.2 * (safezoneW / 40);
                    h = 8.6 * (safezoneH / 25);
                    class controls
                    {
                        class Title : RscText
                        {
                            idc = -1;
                            text = "Crafting";
                            x = 0.2 * (safezoneW / 40);
                            y = 0.2 * (safezoneH / 25);
                            w = 6.3 * (safezoneW / 40);
                            h = 0.7 * (safezoneH / 25);
                            colorBackground[] = {0,0,0,0.75};
                            sizeEx = 0.6 * (safezoneH / 25);
                        };
                        class CraftingCategory : RscCombo
                        {
                            idc = 124;
                            x = 0.2 * (safezoneW / 40);
                            y = 1.1 * (safezoneH / 25);
                            w = 6.3 * (safezoneW / 40);
                            h = 0.7 * (safezoneH / 25);
                            onLBSelChanged = "[""changeCategory"",_this] call extremo_fnc_gui_tabletScreenGroupCrafting;";
                        };
                        class CraftingBox : RscListbox
                        {
                            idc = 125;
                            x = 0.2 * (safezoneW / 40);
                            y = 2 * (safezoneH / 25);
                            w = 6.3 * (safezoneW / 40);
                            h = 6.6 * (safezoneH / 25);
                            colorBackground[] = {0,0,0,0.5};
                            onLBSelChanged = "[""changeItem"",_this] call extremo_fnc_gui_tabletScreenGroupCrafting;";
                        };
                        class CraftingDescTitle : RscText
                        {
                            idc = -1;
                            text = "Description";
                            x = 6.7 * (safezoneW / 40);
                            y = 0.2 * (safezoneH / 25);
                            w = 6.3 * (safezoneW / 40);
                            h = 0.7 * (safezoneH / 25);
                            colorBackground[] = {0,0,0,0.75};
                            sizeEx = 0.6 * (safezoneH / 25);
                        };
                        class CraftingDesc : RscStructuredText
                        {
                            idc = 126;
                            x = 6.7 * (safezoneW / 40);
                            y = 1.1 * (safezoneH / 25);
                            w = 6.3 * (safezoneW / 40);
                            h = 7.5 * (safezoneH / 25);
                            colorBackground[] = {0,0,0,0.9};
                        };
                    };
                };   

                class ScreenGroupsRow3Btn1 : RscControlsGroupNoScrollbar
                {
                    idc = 133; 
                    x = 0 * (safezoneW / 40);
                    y = 0.2 * (safezoneH / 25);
                    w = 13.2 * (safezoneW / 40);
                    h = 8.6 * (safezoneH / 25);
                    class controls
                    {

                    };
                };

                class ScreenGroupsRow3Btn2 : RscControlsGroupNoScrollbar
                {
                    idc = 134;
                    x = 0 * (safezoneW / 40);
                    y = 0.2 * (safezoneH / 25);
                    w = 13.2 * (safezoneW / 40);
                    h = 8.6 * (safezoneH / 25);
                    class controls
                    {

                    };
                }; 

                class ScreenGroupsRow3Btn3 : RscControlsGroupNoScrollbar
                {
                    idc = 135; 
                    x = 0 * (safezoneW / 40);
                    y = 0.2 * (safezoneH / 25);
                    w = 13.2 * (safezoneW / 40);
                    h = 8.6 * (safezoneH / 25);
                    class controls
                    {

                    };
                }; 

                class ScreenGroupsRow4Btn1 : RscControlsGroupNoScrollbar
                {
                    idc = 136; 
                    x = 0 * (safezoneW / 40);
                    y = 0.2 * (safezoneH / 25);
                    w = 13.2 * (safezoneW / 40);
                    h = 8.6 * (safezoneH / 25);
                    class controls
                    {

                    };
                }; 

                class ScreenGroupsRow4Btn2 : RscControlsGroupNoScrollbar
                {
                    idc = 137; 
                    x = 0 * (safezoneW / 40);
                    y = 0.2 * (safezoneH / 25);
                    w = 13.2 * (safezoneW / 40);
                    h = 8.6 * (safezoneH / 25);
                    class controls
                    {

                    };
                }; 
 
                class ScreenGroupsSync : RscControlsGroupNoScrollbar
                {
                    idc = 112;
                    onScreenShow = "[""onScreenShow"",_this] call extremo_fnc_gui_tabletScreenGroupSync;";
                    onScreenHide = "[""onScreenHide"",_this] call extremo_fnc_gui_tabletScreenGroupSync;";
                    x = 0 * (safezoneW / 40);
                    y = 0.2 *  (safezoneH / 25);
                    w = 13.2 * (safezoneW / 40);
                    h = 8.6 *  (safezoneH / 25);
                    class controls
                    {
                        class LatestSync : RscText
                        {
                            idc = 127;
                            text = "Latest Sync: %1 minutes ago";
                            x = 4.1 * (safezoneW / 40);
                            y = 3.1 *  (safezoneH / 25);
                            w = 5 * (safezoneW / 40);
                            h = 1 *  (safezoneH / 25);
                            colorBackground[] = {0,0,0,0.95};
                            sizeEx = 0.6 *  (safezoneH / 25);
                        };
                        class ButtonSync : RscButtonGreen
                        {
                            idc = 128;
                            text = "SYNC"; 
                            x = 4.1 * (safezoneW / 40);
                            y = 4.4 *  (safezoneH / 25);
                            w = 5 * (safezoneW / 40);
                            h = 1 *  (safezoneH / 25);
                            onButtonClick = "[""onSyncNow"",_this] call extremo_fnc_gui_tabletScreenGroupSync;";
                            sizeEx = 0.6 *  (safezoneH / 25);
                        };
                    };
                }; 

                class ScreenGroupsRow5Btn1 : RscControlsGroupNoScrollbar
                {
                    idc = 138; 
                    x = 0 * (safezoneW / 40);
                    y = 0.2 * (safezoneH / 25);
                    w = 13.2 * (safezoneW / 40);
                    h = 8.6 * (safezoneH / 25);
                    class controls
                    {

                    };
                }; 

                class ScreenGroupsRow5Btn2 : RscControlsGroupNoScrollbar
                {
                    idc = 139; 
                    x = 0 * (safezoneW / 40);
                    y = 0.2 * (safezoneH / 25);
                    w = 13.2 * (safezoneW / 40);
                    h = 8.6 * (safezoneH / 25);
                    class controls
                    {

                    };
                }; 
                
                class ScreenGroupsRow5Btn3 : RscControlsGroupNoScrollbar
                {
                    idc = 140; 
                    x = 0 * (safezoneW / 40);
                    y = 0.2 * (safezoneH / 25);
                    w = 13.2 * (safezoneW / 40);
                    h = 8.6 * (safezoneH / 25);
                    class controls
                    {

                    };
                }; 

                class ScreenGroupsRow6Btn1 : RscControlsGroupNoScrollbar
                {
                    idc = 141; 
                    x = 0 * (safezoneW / 40);
                    y = 0.2 * (safezoneH / 25);
                    w = 13.2 * (safezoneW / 40);
                    h = 8.6 * (safezoneH / 25);
                    class controls
                    {

                    };
                }; 

                class ScreenGroupsRow6Btn2 : RscControlsGroupNoScrollbar
                {
                    idc = 142; 
                    x = 0 * (safezoneW / 40);
                    y = 0.2 * (safezoneH / 25);
                    w = 13.2 * (safezoneW / 40);
                    h = 8.6 * (safezoneH / 25);
                    class controls
                    {

                    };
                }; 
 
                class ScreenGroupsSettings : RscControlsGroupNoScrollbar
                {
                    idc = 143;
                    onScreenShow = "[""onScreenShow"",_this] call extremo_fnc_gui_tabletScreenGroupSettings;";
                    onScreenHide = "[""onScreenHide"",_this] call extremo_fnc_gui_tabletScreenGroupSettings;";
                    x = 0 * (safezoneW / 40);
                    y = 0.2 * (safezoneH / 25);
                    w = 13.2 * (safezoneW / 40);
                    h = 8.6 * (safezoneH / 25);
                    class controls
                    {

                    };
                };  
                
            };
        };

        //-- Tablet control buttons (footer)
        class TabletButtonHome: RscActivePicture
        {
            idc = 103;
            text = "\Extremo_assets\texture\ui\tablet\tabletbutton_home_ca.paa";
            x = 18.85 * (safezoneW / 40) + (safezoneX);
            y = 17.0995 * (safezoneH / 25) + (safezoneY);//somehow it fucked up (Marshall is looking into it when he has a min)
            w = 0.5 * (safezoneW / 40);
            h = 0.6 * (safezoneH / 25);
            soundClick[] = {"\a3\Ui_f\data\Sound\ReadOut\readoutClick",0.891251,1};
            onButtonClick = "[""HomeButton"",_this] call extremo_fnc_gui_tabletScreenEH;";
            tooltip = "Main Menu";
        };
        class TabletButtonLock: RscActivePicture
        {
            idc = 104;
            text = "\Extremo_assets\texture\ui\tablet\tabletbutton_locked_ca.paa";
            x = 20.05 * (safezoneW / 40) + (safezoneX);
            y = 17.15 * (safezoneH / 25) + (safezoneY);//somehow it fucked up (Marshall is looking into it when he has a min)
            w = 0.4 * (safezoneW / 40);
            h = 0.5 * (safezoneH / 25);
            soundClick[] = {"\a3\Ui_f\data\Sound\ReadOut\readoutClick",0.891251,1};
            onButtonClick = "[""LockButton"",_this] call extremo_fnc_gui_tabletScreenEH;";
            tooltip = "Toggle Lock";
        };
        class TabletButtonMute: RscActivePicture
        {
            idc = 105;
            text = "\Extremo_assets\texture\ui\tablet\tabletbutton_sound_ca.paa";
            x = 21.15 * (safezoneW / 40) + (safezoneX);
            y = 17.12 * (safezoneH / 25) + (safezoneY);//somehow it fucked up 
            w = 0.4 * (safezoneW / 40);
            h = 0.5 * (safezoneH / 25);
            soundClick[] = {"\a3\Ui_f\data\Sound\ReadOut\readoutClick",0.891251,1};
            onButtonClick = "[""MuteButton"",_this] call extremo_fnc_gui_tabletScreenEH;";
            tooltip = "Toggle Sound";
        };
    };
};