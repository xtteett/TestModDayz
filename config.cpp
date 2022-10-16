class CfgPatches
{
	class TestMod
	{
		units[]={
			"Metal_Mask_Base"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Pants",
			"DZ_Characters_Tops",
			"DZ_Characters_Headgear",
			"DZ_Data",
			"DZ_Scripts"
		};
	};
};
class CfgMods
{
	class TestMod
	{
		dir="TestMod";
		picture=""; 
		action="";
		hideName=1;
		hidePicture=1;
		name="TestMod";
		credits=""; 
		author="";
		authorID="0";  
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"TestMod/scripts/3_game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"TestMod/scripts/4_world"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"TestMod/scripts/5_mission"
				};
			};
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Clothing_Base;
	class Clothing: Clothing_Base
	{
	};
	class Metal_Mask_Base: Clothing
	{
		scope=2;
		displayName="Metal Mask";
		descriptionShort="Metal Mask Test";
		model="TestMod\data\Metal_Mask\Metal_Mask_base_g.p3d";
		inventorySlot[]=
		{
			"Mask"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Mask"
		};
		weight=1500;
		itemSize[]={2,2};
		varWetMax=0.249;
		heatIsolation=0.1;
		visibilityModifier=0.85000002;
		noMask=1;
		noNVStrap=1;
		headSelectionsToHide[]=
		{
			"Clipping_Metal_Mask"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"TestMod\data\Metal_Mask\Metal_Mask_base_co.paa",
			"TestMod\data\Metal_Mask\Metal_Mask_base_co.paa",
			"TestMod\data\Metal_Mask\Metal_Mask_base_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1.00,
							
							{
								"TestMod\data\Metal_Mask\Metal_Mask_base.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"TestMod\data\Metal_Mask\Metal_Mask_base.rvmat"
							}
						},
						
						{
							0.50,
							
							{
								"TestMod\data\Metal_Mask\Metal_Mask_base_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"TestMod\data\Metal_Mask\Metal_Mask_base_damage.rvmat"
							}
						},
						
						{
							0.00,
							
							{
								"TestMod\data\Metal_Mask\Metal_Mask_base_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.75;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.75;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.75;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.75;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.75;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="TestMod\data\Metal_Mask\Metal_Mask_base_m.p3d";
			female="TestMod\data\Metal_Mask\Metal_Mask_base_f.p3d";
		};
		class Protection
		{
			biological=0.25;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="DarkMotoHelmet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="DarkMotoHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
		soundVoiceType="none";
		soundVoicePriority=10;
	};
};

