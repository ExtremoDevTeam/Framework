/*
	## EXTREMO Survival
	## Nikko & Happyfeet
	## https://community.bistudio.com/wiki/Arma_3:_Characters_And_Gear_Encoding_Guide
	## https://community.bistudio.com/wiki/CfgVehicles_Config_Reference
*/

class Extremo_Animal_Goat_Abstract: Extremo_Animal_Abstract
{
	scope=1;
	displayName="Goat";
	model="\A3\animals_f_beta\Goat\Goat_F.p3d";
	hasGeometry=1;
	moves="CfgMovesGoat_F";
	hiddenSelections[]=
	{
		"camo"
	};
	agentTasks[]=
	{
		"Extremo_Animal_Goat"
	};
	class Wounds
	{
		tex[]={};
		mat[]=
		{
			"a3\animals_f_beta\Goat\data\goat.rvmat",
			"a3\animals_f_beta\Goat\data\W1_goat.rvmat",
			"a3\animals_f_beta\Goat\data\W2_goat.rvmat"
		};
	};
	class Extremo
	{
		variations[]=
		{
			"Extremo_Animal_Goat_Black",
			"Extremo_Animal_Goat_Dirty",
			"Extremo_Animal_Goat_White",
			"Extremo_Animal_Goat_Old",
			"Extremo_Animal_Goat_Spotted"
		};
		fleeMove="Goat_Run";
		idleMove="Goat_Idle_Stop";
		idleSounds[]=
		{
			
			{
				"a3\animals_f_beta\Sheep\Data\sound\sheep1.wss",
				100,
				4
			},
			
			{
				"a3\animals_f_beta\Sheep\Data\sound\sheep2.wss",
				100,
				4
			},
			
			{
				"a3\animals_f_beta\Sheep\Data\sound\sheep3.wss",
				100,
				4
			},
			
			{
				"a3\animals_f_beta\Sheep\Data\sound\sheep4.wss",
				100,
				4
			},
			
			{
				"a3\animals_f_beta\Sheep\Data\sound\sheep5.wss",
				100,
				4
			}
		};
		dangerSounds[]=
		{
			
			{
				"a3\animals_f_beta\Sheep\Data\sound\sheep1.wss",
				100,
				4
			},
			
			{
				"a3\animals_f_beta\Sheep\Data\sound\sheep2.wss",
				100,
				4
			},
			
			{
				"a3\animals_f_beta\Sheep\Data\sound\sheep3.wss",
				100,
				4
			},
			
			{
				"a3\animals_f_beta\Sheep\Data\sound\sheep4.wss",
				100,
				4
			},
			
			{
				"a3\animals_f_beta\Sheep\Data\sound\sheep5.wss",
				100,
				4
			}
		};
		deathSounds[]=
		{
			
			{
				"a3\animals_f_beta\Sheep\Data\sound\sheep1.wss",
				100,
				4
			},
			
			{
				"a3\animals_f_beta\Sheep\Data\sound\sheep2.wss",
				100,
				4
			},
			
			{
				"a3\animals_f_beta\Sheep\Data\sound\sheep3.wss",
				100,
				4
			},
			
			{
				"a3\animals_f_beta\Sheep\Data\sound\sheep4.wss",
				100,
				4
			},
			
			{
				"a3\animals_f_beta\Sheep\Data\sound\sheep5.wss",
				100,
				4
			}
		};
		gutItems[]=
		{
			
			{
				3,
				"Extremo_Item_GoatSteak_Raw"
			}
		};
		bestPlaces="hills * (1 - trees) * (1 - forest)";
	};
};
class Extremo_Animal_Goat_Black: Extremo_Animal_Goat_Abstract
{
	scope=2;
	displayName="Goat (Black)";
	hiddenSelectionsTextures[]=
	{
		"a3\animals_f_beta\Goat\Data\black_goat_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"a3\animals_f_beta\goat\data\goat_black.rvmat"
	};
};
class Extremo_Animal_Goat_Dirty: Extremo_Animal_Goat_Abstract
{
	scope=2;
	displayName="Goat (Dirty)";
	hiddenSelectionsTextures[]=
	{
		"a3\animals_f_beta\Goat\Data\dirt_goat_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"a3\animals_f_beta\goat\data\goat_dirt.rvmat"
	};
};
class Extremo_Animal_Goat_White: Extremo_Animal_Goat_Abstract
{
	scope=2;
	displayName="Goat (White)";
	hiddenSelectionsTextures[]=
	{
		"a3\animals_f_beta\Goat\Data\goat_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"a3\animals_f_beta\goat\data\goat_white.rvmat"
	};
};
class Extremo_Animal_Goat_Old: Extremo_Animal_Goat_Abstract
{
	scope=2;
	displayName="Goat (Old)";
	hiddenSelectionsTextures[]=
	{
		"a3\animals_f_beta\Goat\Data\old_goat_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"a3\animals_f_beta\goat\data\goat_old.rvmat"
	};
};
class Extremo_Animal_Goat_Spotted: Extremo_Animal_Goat_Abstract
{
	scope=2;
	displayName="Goat (Spotted)";
	hiddenSelectionsTextures[]=
	{
		"a3\animals_f_beta\Goat\Data\white_goat_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"a3\animals_f_beta\goat\data\goat_white.rvmat"
	};
};
class Extremo_Animal_Hen_Abstract: Extremo_Animal_Abstract
{
	scope=1;
	displayName="Hen";
	model="\A3\animals_f_beta\chicken\Hen_F.p3d";
	hasGeometry=1;
	moves="CfgMovesHen_F";
	hiddenSelections[]=
	{
		"camo"
	};
	agentTasks[]=
	{
		"Extremo_Animal_Hen"
	};
	class Wounds
	{
		tex[]={};
		mat[]=
		{
			"a3\animals_f_beta\Chicken\data\cock_white.rvmat",
			"a3\animals_f_beta\Chicken\data\W1_cock.rvmat",
			"a3\animals_f_beta\Chicken\data\W2_cock.rvmat"
		};
	};
	class Extremo
	{
		variations[]=
		{
			"Extremo_Animal_Hen_White"
		};
		fleeMove="Hen_Run";
		idleMove="Hen_Idle_Stop";
		idleSounds[]=
		{
			
			{
				"a3\sounds_f\environment\animals\hen1.wss",
				100,
				4
			},
			
			{
				"a3\sounds_f\environment\animals\hen2.wss",
				100,
				4
			},
			
			{
				"a3\sounds_f\environment\animals\hen3.wss",
				100,
				4
			}
		};
		dangerSounds[]=
		{
			
			{
				"a3\sounds_f\environment\animals\hen1.wss",
				100,
				4
			},
			
			{
				"a3\sounds_f\environment\animals\hen2.wss",
				100,
				4
			},
			
			{
				"a3\sounds_f\environment\animals\hen3.wss",
				100,
				4
			}
		};
		deathSounds[]=
		{
			
			{
				"a3\sounds_f\environment\animals\hen1.wss",
				100,
				4
			},
			
			{
				"a3\sounds_f\environment\animals\hen2.wss",
				100,
				4
			},
			
			{
				"a3\sounds_f\environment\animals\hen3.wss",
				100,
				4
			}
		};
		gutItems[]=
		{
			
			{
				2,
				"Extremo_Item_ChickenFilet_Raw"
			}
		};
		bestPlaces="houses * (1 - sea)";
	};
};
class Extremo_Animal_Hen_White: Extremo_Animal_Hen_Abstract
{
	scope=2;
	displayName="Hen (White)";
	hiddenSelectionsTextures[]=
	{
		"a3\animals_f_beta\Chicken\data\hen_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"a3\animals_f_beta\Chicken\data\hen.rvmat"
	};
};
class Extremo_Animal_Rooster_Abstract: Extremo_Animal_Abstract
{
	scope=1;
	displayName="Rooster";
	model="\A3\animals_f_beta\chicken\Cock_F.p3d";
	hasGeometry=1;
	moves="CfgMovesCock_F";
	hiddenSelections[]=
	{
		"camo"
	};
	agentTasks[]=
	{
		"Extremo_Animal_Rooster"
	};
	class Wounds
	{
		tex[]={};
		mat[]=
		{
			"a3\animals_f_beta\Chicken\data\hen.rvmat",
			"a3\animals_f_beta\Chicken\data\W1_hen.rvmat",
			"a3\animals_f_beta\Chicken\data\W2_hen.rvmat"
		};
	};
	class Extremo
	{
		variations[]=
		{
			"Extremo_Animal_Rooster_Gold",
			"Extremo_Animal_Rooster_Brown",
			"Extremo_Animal_Rooster_White"
		};
		fleeMove="Cock_Run";
		idleMove="Cock_Idle_Stop";
		idleSounds[]=
		{
			
			{
				"a3\sounds_f\environment\animals\hen1.wss",
				100,
				4
			},
			
			{
				"a3\sounds_f\environment\animals\hen2.wss",
				100,
				4
			},
			
			{
				"a3\sounds_f\environment\animals\hen3.wss",
				100,
				4
			}
		};
		dangerSounds[]=
		{
			
			{
				"a3\sounds_f\environment\animals\hen1.wss",
				100,
				4
			},
			
			{
				"a3\sounds_f\environment\animals\hen2.wss",
				100,
				4
			},
			
			{
				"a3\sounds_f\environment\animals\hen3.wss",
				100,
				4
			}
		};
		deathSounds[]=
		{
			
			{
				"a3\sounds_f\environment\animals\hen1.wss",
				100,
				4
			},
			
			{
				"a3\sounds_f\environment\animals\hen2.wss",
				100,
				4
			},
			
			{
				"a3\sounds_f\environment\animals\hen3.wss",
				100,
				4
			}
		};
		gutItems[]=
		{
			
			{
				2,
				"Extremo_Item_RoosterFilet_Raw"
			}
		};
		bestPlaces="houses * (1 - sea)";
	};
};
class Extremo_Animal_Rooster_Brown: Extremo_Animal_Rooster_Abstract
{
	scope=2;
	displayName="Rooster (Brown)";
	hiddenSelectionsTextures[]=
	{
		"a3\animals_f_beta\Chicken\data\brown_rooster_CO.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"a3\animals_f_beta\Chicken\data\cock_brown.rvmat"
	};
};
class Extremo_Animal_Rooster_White: Extremo_Animal_Rooster_Abstract
{
	scope=2;
	displayName="Rooster (White)";
	hiddenSelectionsTextures[]=
	{
		"a3\animals_f_beta\Chicken\data\white_rooster_CO.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"a3\animals_f_beta\Chicken\data\cock_white.rvmat"
	};
};
class Extremo_Animal_Rooster_Gold: Extremo_Animal_Rooster_Abstract
{
	scope=2;
	displayName="Rooster (Gold)";
	hiddenSelectionsTextures[]=
	{
		"a3\animals_f_beta\Chicken\data\kohout_co.paa"
	};
	hiddenSelectionMaterials[]=
	{
		"a3\animals_f_beta\Chicken\data\cock_brown.rvmat"
	};
};
class Extremo_Animal_Sheep_Abstract: Extremo_Animal_Abstract
{
	scope=1;
	displayName="Sheep";
	model="\A3\animals_f_beta\Sheep\Sheep_F.p3d";
	hasGeometry=1;
	moves="CfgMovesSheep_F";
	hiddenSelections[]=
	{
		"camo"
	};
	agentTasks[]=
	{
		"Extremo_Animal_Sheep"
	};
	class Wounds
	{
		tex[]={};
		mat[]=
		{
			"A3\animals_f_beta\sheep\data\sheep.rvmat",
			"A3\animals_f_beta\sheep\data\W1_sheep.rvmat",
			"A3\animals_f_beta\sheep\data\W2_sheep.rvmat"
		};
	};
	class Extremo
	{
		variations[]=
		{
			"Extremo_Animal_Sheep_Beige",
			"Extremo_Animal_Sheep_White",
			"Extremo_Animal_Sheep_Brown",
			"Extremo_Animal_Sheep_Spotted",
			"Extremo_Animal_Sheep_Tricolor"
		};
		fleeMove="Sheep_Run";
		idleMove="Sheep_Idle_Stop";
		idleSounds[]=
		{
			
			{
				"a3\animals_f_beta\Sheep\Data\sound\sheep1.wss",
				100,
				4
			},
			
			{
				"a3\animals_f_beta\Sheep\Data\sound\sheep2.wss",
				100,
				4
			},
			
			{
				"a3\animals_f_beta\Sheep\Data\sound\sheep3.wss",
				100,
				4
			},
			
			{
				"a3\animals_f_beta\Sheep\Data\sound\sheep4.wss",
				100,
				4
			},
			
			{
				"a3\animals_f_beta\Sheep\Data\sound\sheep5.wss",
				100,
				4
			}
		};
		dangerSounds[]=
		{
			
			{
				"a3\animals_f_beta\Sheep\Data\sound\sheep1.wss",
				100,
				4
			},
			
			{
				"a3\animals_f_beta\Sheep\Data\sound\sheep2.wss",
				100,
				4
			},
			
			{
				"a3\animals_f_beta\Sheep\Data\sound\sheep3.wss",
				100,
				4
			},
			
			{
				"a3\animals_f_beta\Sheep\Data\sound\sheep4.wss",
				100,
				4
			},
			
			{
				"a3\animals_f_beta\Sheep\Data\sound\sheep5.wss",
				100,
				4
			}
		};
		deathSounds[]=
		{
			
			{
				"a3\animals_f_beta\Sheep\Data\sound\sheep1.wss",
				100,
				4
			},
			
			{
				"a3\animals_f_beta\Sheep\Data\sound\sheep2.wss",
				100,
				4
			},
			
			{
				"a3\animals_f_beta\Sheep\Data\sound\sheep3.wss",
				100,
				4
			},
			
			{
				"a3\animals_f_beta\Sheep\Data\sound\sheep4.wss",
				100,
				4
			},
			
			{
				"a3\animals_f_beta\Sheep\Data\sound\sheep5.wss",
				100,
				4
			}
		};
		gutItems[]=
		{
			
			{
				3,
				"Extremo_Item_SheepSteak_Raw"
			}
		};
		bestPlaces="meadow * (1 - hills) * (1 - sea) * (1 - trees) * (1 - forest) * (1 - houses)";
	};
};
class Extremo_Animal_Sheep_Beige: Extremo_Animal_Sheep_Abstract
{
	scope=2;
	displayName="Sheep (Beige)";
	hiddenSelectionsTextures[]=
	{
		"a3\animals_f_beta\Sheep\Data\sheep_co.paa"
	};
};
class Extremo_Animal_Sheep_White: Extremo_Animal_Sheep_Abstract
{
	scope=2;
	displayName="Sheep (White)";
	hiddenSelectionsTextures[]=
	{
		"a3\animals_f_beta\Sheep\Data\white_sheep_co.paa"
	};
};
class Extremo_Animal_Sheep_Brown: Extremo_Animal_Sheep_Abstract
{
	scope=2;
	displayName="Sheep (Brown)";
	hiddenSelectionsTextures[]=
	{
		"a3\animals_f_beta\Sheep\Data\brown_sheep_co.paa"
	};
};
class Extremo_Animal_Sheep_Spotted: Extremo_Animal_Sheep_Abstract
{
	scope=2;
	displayName="Sheep (Spotted)";
	hiddenSelectionsTextures[]=
	{
		"a3\animals_f_beta\Sheep\Data\blackwhite_sheep_co.paa"
	};
};
class Extremo_Animal_Sheep_Tricolor: Extremo_Animal_Sheep_Abstract
{
	scope=2;
	displayName="Sheep (Tricolor)";
	hiddenSelectionsTextures[]=
	{
		"a3\animals_f_beta\Sheep\Data\tricolor_sheep_co.paa"
	};
};