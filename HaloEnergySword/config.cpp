class CfgPatches
{
	class HaloEnergySword
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgMods
{
	class HaloEnergySword
	{
		dir="HaloEnergySword";
		hideName=1;
		hidePicture=1;
		name="HaloEnergySword";
		author="HighHybrid";
		version=1;
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
					"HaloEnergySword/Scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"HaloEnergySword/Scripts/4_World"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"HaloEnergySword/Scripts/5_Mission"
				};
			};
		};
	};
};
