class CfgPatches
{
	class HaloEnergySword_Config
	{
		units[]=
		{
			"Energy_Sword"
		};
		files[] = { "EnergySwordScript.c" };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
		ammo[]=
		{
			"MeleeEnergySword"
		};
	};
};
class CfgAmmo
{
	class MeleeKnife;
	class MeleeEnergySword: MeleeKnife
	{
		hitAnimation = 1;
		affectSkeleton=0.1;
		class DamageApplied
		{
			type="Melee";
			bleedThreshold=1;
			class Health
			{
				damage = 80;
			};
			class Shock
			{
				damage = 30;
			};
		};
		soundHitBody1[] = { "HaloEnergySword\data\sounds\CharacterHit\sword_hit_char1",0.56234133,1,60 };
		soundHitBody2[] = { "HaloEnergySword\data\sounds\CharacterHit\sword_hit_char2",0.56234133,1,60 };
		soundHitBody3[] = { "HaloEnergySword\data\sounds\CharacterHit\sword_hit_char3",0.56234133,1,60 };
		soundHitBody4[] = { "HaloEnergySword\data\sounds\CharacterHit\sword_hit_char4",0.56234133,1,60 };
		soundHitBody5[] = { "HaloEnergySword\data\sounds\CharacterHit\sword_hit_char5",0.56234133,1,60 };
		soundHitBody6[] = { "HaloEnergySword\data\sounds\CharacterHit\sword_hit_char6",0.56234133,1,60 };
	};
	class MeleeEnergySword_Heavy : MeleeKnife
	{
		affectSkeleton = 0.1;
		class DamageApplied
		{
			type = "Melee";
			bleedThreshold = 1;
			class Health
			{
				damage = 140;
			};
			class Shock
			{
				damage = 40;
			};
		};
		soundHitBody1[] = { "HaloEnergySword\data\sounds\CharacterHit\sword_hit_char1",0.56234133,1,60 };
		soundHitBody2[] = { "HaloEnergySword\data\sounds\CharacterHit\sword_hit_char2",0.56234133,1,60 };
		soundHitBody3[] = { "HaloEnergySword\data\sounds\CharacterHit\sword_hit_char3",0.56234133,1,60 };
		soundHitBody4[] = { "HaloEnergySword\data\sounds\CharacterHit\sword_hit_char4",0.56234133,1,60 };
		soundHitBody5[] = { "HaloEnergySword\data\sounds\CharacterHit\sword_hit_char5",0.56234133,1,60 };
		soundHitBody6[] = { "HaloEnergySword\data\sounds\CharacterHit\sword_hit_char6",0.56234133,1,60 };
	};
};
class CfgVehicles
{
	class CombatKnife;
	class Energy_Sword: CombatKnife
	{
		scope=2;
		displayName = "Energy Sword";
		descriptionShort = "A Energy Sword from a fallen Spartan";
		model="HaloEnergySword\data\EnergySword.p3d";
		animClass="Knife";
		repairableWithKits[]={4};
		repairCosts[]={10};
		rotationFlags=17;
		canSkinBodies=1;
		openItemSpillRange[]={10,20};
		RestrainUnlockType=1;
		weight=500;
		itemSize[]={5,2};
		lootCategory="Tools";
		itemInfo[]=
		{
			"Knife"
		};
		inventorySlot[]=
		{
			"Knife"
		};
		lootTag[]=
		{
			"Military_east",
			"Military_west"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\melee\blade\data\combat_knife_destruct.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\melee\blade\data\combat_knife_destruct.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\melee\blade\data\combat_knife_destruct.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\melee\blade\data\combat_knife_destruct.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\melee\blade\data\combat_knife_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeEnergySword";
				range=1.2;
			};
			class Heavy
			{
				ammo="MeleeEnergySword_Heavy";
				range=1.2;
			};
			class Sprint
			{
				ammo="MeleeEnergySword_Heavy";
				range=3.3;
			};
		};
		soundImpactType = "metal";
		class AnimEvents
		{
			class SoundWeapon
			{
				class drop
				{
					soundSet = "EnergySword_Drop_soundset";
					id = 898;
				};
			};
		};
	};
};
class CfGSoundShaders
{
	class EnergySword_Pickup_Shader
	{
		samples[] = { {"HaloEnergySword\data\sounds\EquipLoop\energy_sword_loop1",0.125},{"HaloEnergySword\data\sounds\EquipLoop\energy_sword_loop2",0.125},{"HaloEnergySword\data\sounds\EquipLoop\energy_sword_loop3",0.125},{"HaloEnergySword\data\sounds\EquipLoop\energy_sword_loop4",0.125},{"HaloEnergySword\data\sounds\EquipLoop\energy_sword_loop5",0.125},{"HaloEnergySword\data\sounds\EquipLoop\energy_sword_loop4",0.125},{"HaloEnergySword\data\sounds\EquipLoop\energy_sword_loop6",0.125} };
		volume = 2;
		range = 60;
	};
	class EnergySword_Drop_shader
	{
		samples[] = { {"HaloEnergySword\data\sounds\DeEquip\sword_drop1",0.125},{"HaloEnergySword\data\sounds\DeEquip\sword_drop2",0.125},{"HaloEnergySword\data\sounds\DeEquip\sword_drop3",0.125},{"HaloEnergySword\data\sounds\DeEquip\sword_drop4",0.125} };
		volume = 2;
		range = 60;
	};
};

class CfgSoundSets
{
	class baseCharacter_SoundSet;
	class EnergySword_Equip_soundset
	{
		soundShaders[] = { "EnergySword_Pickup_Shader" };
		sound3DProcessingType = "character3DProcessingType";
		volumeCurve = "characterAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};
	class EnergySword_Drop_soundset: baseCharacter_SoundSet
	{
		soundShaders[] = { "EnergySword_Drop_shader" };
		frequencyRandomizer = 0.5;
		volumeRandomizer = 1;
		startDelay = 0.2;
	};
};