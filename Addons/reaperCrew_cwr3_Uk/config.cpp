class CfgPatches
{
	class reaperCrew_cwr3_uk_gear
	{
		units[]=
		{
			"reaperCrew_U_A_cwr3_smock_dpm_1",
			"reaperCrew_U_A_cwr3_smock_dpm_2",
			"reaperCrew_U_A_cwr3_smock_dpm_3",
			"reaperCrew_U_A_cwr3_smock_dpm_4",
			"reaperCrew_U_A_cwr3_smock_dpm_5",
			"reaperCrew_U_A_cwr3_smock_dpm_6",
			"reaperCrew_A_cwr3_backpack_dpm_1",
			"reaperCrew_A_cwr3_backpack_dpm_2"
		};
		weapons[]=
		{
			"reaperCrew_A_cwr3_smock_dpm_1",
			"reaperCrew_A_cwr3_smock_dpm_2",
			"reaperCrew_A_cwr3_smock_dpm_3",
			"reaperCrew_A_cwr3_smock_dpm_4",
			"reaperCrew_A_cwr3_smock_dpm_5",
			"reaperCrew_A_cwr3_smock_dpm_6",
			"reaperCrew_A_cwr3_m76_dpm_1",
			"reaperCrew_A_cwr3_m76_dpm_2",
			"reaperCrew_A_cwr3_foragecap_dpm_1",
			"reaperCrew_A_cwr3_boonie_dpm_1",
			"reaperCrew_A_cwr3_boonie_dpm_2"
		};
		requiredVersion=0.100000;
		requiredAddons[]=
		{
			"cwr3_soldiers_fia",
			"cwr3_expansion_uk",
			"CUP_Creatures_Military_USMC"
		};
	};
};
class CfgWeapons
{
	class UniformItem;
	class HeadGearItem;
	class ItemCore;
	class cwr3_b_uk_headgear_m76_dpm_net: ItemCore
	{
		class ItemInfo;
	};
	class cwr3_b_uk_headgear_cap_weathered_dpm: ItemCore
	{
		class ItemInfo;
	};
	class cwr3_i_uniform_base;
	class cwr3_i_uniform_dpm_gloves: cwr3_i_uniform_base
	{
		class ItemInfo;
	};
	class reaperCrew_A_cwr3_smock_dpm_1: cwr3_i_uniform_dpm_gloves
	{
		displayName="[reaperCrew] UK Combat Smock (DPM)";
		scope=2;
		scopeArsenal=2;
		picture="rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\logo\reaperCrew_UK_Logo_co.paa";
		hiddenSelectionsTextures[]=
		{
			"rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\uniforms\data\reaperCrew_CWR3_Smock_DPM_1_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformClass="reaperCrew_U_A_cwr3_smock_dpm_1";
			containereaperCrewlass="Supply40";
		};
	};
	class reaperCrew_A_cwr3_smock_dpm_2: cwr3_i_uniform_dpm_gloves
	{
		displayName="[reaperCrew] UK Combat Smock (DPM, Untucked Legs)";
		scope=2;
		scopeArsenal=2;
		picture="rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\logo\reaperCrew_UK_Logo_co.paa";
		hiddenSelectionsTextures[]=
		{
			"rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\uniforms\data\reaperCrew_CWR3_Smock_DPM_2_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformClass="reaperCrew_U_A_cwr3_smock_dpm_2";
			containereaperCrewlass="Supply40";
		};
	};
	class reaperCrew_A_cwr3_smock_dpm_3: cwr3_i_uniform_dpm_gloves
	{
		displayName="[reaperCrew] UK Combat Smock (DPM, Untucked Legs, Rolled)";
		scope=2;
		scopeArsenal=2;
		picture="rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\logo\reaperCrew_UK_Logo_co.paa";
		hiddenSelectionsTextures[]=
		{
			"rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\uniforms\data\reaperCrew_CWR3_Smock_DPM_2_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformClass="reaperCrew_U_A_cwr3_smock_dpm_3";
			containereaperCrewlass="Supply40";
		};
	};
	class cwr3_i_uniform_alpenflage;
	class reaperCrew_A_cwr3_smock_dpm_4: cwr3_i_uniform_alpenflage
	{
		displayName="[reaperCrew] UK Combat Smock (DPM/ Olive)";
		scope=2;
		scopeArsenal=2;
		picture="rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\logo\reaperCrew_UK_Logo_co.paa";
		hiddenSelectionsTextures[]=
		{
			"rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\uniforms\data\reaperCrew_CWR3_Smock_DPM_2_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformClass="reaperCrew_U_A_cwr3_smock_dpm_4";
			containereaperCrewlass="Supply40";
		};
	};
	class reaperCrew_A_cwr3_smock_dpm_5: cwr3_i_uniform_dpm_gloves
	{
		displayName="[reaperCrew] UK Combat Smock (DPM/ Olive, Untucked Legs)";
		scope=2;
		scopeArsenal=2;
		picture="rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\logo\reaperCrew_UK_Logo_co.paa";
		hiddenSelectionsTextures[]=
		{
			"rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\uniforms\data\reaperCrew_CWR3_Smock_DPM_2_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformClass="reaperCrew_U_A_cwr3_smock_dpm_5";
			containereaperCrewlass="Supply40";
		};
	};
	class reaperCrew_A_cwr3_smock_dpm_6: cwr3_i_uniform_alpenflage
	{
		displayName="[reaperCrew] UK Combat Smock (DPM/ Olive, Untucked Legs, Rolled)";
		scope=2;
		scopeArsenal=2;
		picture="rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\logo\reaperCrew_UK_Logo_co.paa";
		hiddenSelectionsTextures[]=
		{
			"rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\uniforms\data\reaperCrew_CWR3_Smock_DPM_2_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformClass="reaperCrew_U_A_cwr3_smock_dpm_6";
			containereaperCrewlass="Supply40";
		};
	};
	class reaperCrew_A_cwr3_m76_dpm_1: cwr3_b_uk_headgear_m76_dpm_net
	{
		displayName="[reaperCrew] UK M76 Light Weight Helmet (Net, DPM)";
		hiddenSelections[]=
		{
			"hs_head1",
			"hs_head2",
			"hs_head3",
			"hs_head4"
		};
		hiddenSelectionsTextures[]=
		{
			"rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\headgear\data\reaperCrew_CWR3_M76_DPM_1_co.paa",
			"",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"\cwr3\expansions\cwr3_expansion_uk\headgear\data\m76_helmet_net.rvmat",
			"",
			""
		};
		model="\cwr3\expansions\cwr3_expansion_uk\headgear\cwr3_m76_helmet.p3d";
		picture="rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\logo\reaperCrew_UK_Logo_co.paa";
		scope=2;
		class ItemInfo: HeadGearItem
		{
			hiddenSelections[]=
			{
				"hs_head1",
				"hs_head2",
				"hs_head3",
				"hs_head4"
			};
			hiddenSelectionsTextures[]=
			{
				"rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\headgear\data\reaperCrew_CWR3_M76_DPM_1_co.paa",
				"",
				""
			};
			hiddenSelectionsMaterials[]=
			{
				"\cwr3\expansions\cwr3_expansion_uk\headgear\data\m76_helmet_net.rvmat",
				"",
				""
			};
			mass=30;
			uniformmodel="\cwr3\expansions\cwr3_expansion_uk\headgear\cwr3_m76_helmet.p3d";
			class HitpointsProtectionInfo
			{
				class Head
				{
					armor=6;
					hitpointName="HitHead";
					passThrough=0.500000;
				};
			};
		};
	};
	class reaperCrew_A_cwr3_m76_dpm_2: cwr3_b_uk_headgear_m76_dpm_net
	{
		displayName="[reaperCrew] UK M76 Light Weight Helmet (Net, DPM)";
		hiddenSelections[]=
		{
			"hs_head1",
			"hs_head2",
			"hs_head3",
			"hs_head4"
		};
		hiddenSelectionsTextures[]=
		{
			"rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\headgear\data\reaperCrew_CWR3_M76_DPM_2_co.paa",
			"",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"\cwr3\expansions\cwr3_expansion_uk\headgear\data\m76_helmet.rvmat",
			"",
			""
		};
		model="\cwr3\expansions\cwr3_expansion_uk\headgear\cwr3_m76_helmet.p3d";
		picture="rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\logo\reaperCrew_UK_Logo_co.paa";
		scope=2;
		class ItemInfo: HeadGearItem
		{
			hiddenSelections[]=
			{
				"hs_head1",
				"hs_head2",
				"hs_head3",
				"hs_head4"
			};
			hiddenSelectionsTextures[]=
			{
				"rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\headgear\data\reaperCrew_CWR3_M76_DPM_2_co.paa",
				"",
				""
			};
			hiddenSelectionsMaterials[]=
			{
				"\cwr3\expansions\cwr3_expansion_uk\headgear\data\m76_helmet.rvmat",
				"",
				""
			};
			mass=30;
			uniformmodel="\cwr3\expansions\cwr3_expansion_uk\headgear\cwr3_m76_helmet.p3d";
			class HitpointsProtectionInfo
			{
				class Head
				{
					armor=6;
					hitpointName="HitHead";
					passThrough=0.500000;
				};
			};
		};
	};
	class reaperCrew_A_cwr3_foragecap_dpm_1: ItemCore
	{
		displayName="[reaperCrew] UK Forage Cap (DPM)";
		hiddenSelections[]=
		{
			"hs_head1",
			"hs_head2"
		};
		hiddenSelectionsTextures[]=
		{
			"rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\headgear\data\reaperCrew_CWR3_ForageCap_DPM_1_co.paa",
			""
		};
		model="\cwr3\humans\cwr3_soldiers_fia\headgear\cwr3_fia_cap.p3d";
		picture="rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\logo\reaperCrew_UK_Logo_co.paa";
		scope=2;
		class ItemInfo: HeadGearItem
		{
			allowedSlots[]=
			{
				"UNIFORM_SLOT",
				"BACKPACK_SLOT",
				"VEST_SLOT",
				"HEADGEAR_SLOT"
			};
			armor=0;
			hiddenSelections[]=
			{
				"hs_head1",
				"hs_head2"
			};
			hiddenSelectionsTextures[]=
			{
				"rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\headgear\data\reaperCrew_CWR3_ForageCap_DPM_1_co.paa",
				""
			};
			mass=6;
			passThrough=1;
			uniformModel="\cwr3\humans\cwr3_soldiers_fia\headgear\cwr3_fia_cap.p3d";
			class HitpointsProtectionInfo
			{
				class Head
				{
					armor=0;
					hitpointName="HitHead";
					passThrough=1;
				};
			};
		};
	};
	class reaperCrew_A_cwr3_boonie_dpm_1: ItemCore
	{
		scope=2;
		displayName="[reaperCrew] UK Boonie w/PRR (DPM)";
		picture="rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\logo\reaperCrew_UK_Logo_co.paa";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\CUP_PRR_Boonie.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\headgear\data\reaperCrew_CWR3_Boonie_DPM_1_co.paa"
		};
		class ItemInfo: HeadGearItem
		{
			mass=10;
			uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\CUP_PRR_Boonie.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			armor=0;
			passThrough=1;
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\headgear\data\reaperCrew_CWR3_Boonie_DPM_1_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=1;
				};
			};
		};
	};
	class H_Booniehat_khk;
	class reaperCrew_A_cwr3_boonie_dpm_2: H_Booniehat_khk
	{
		displayName="[reaperCrew] UK Boonie (DPM)";
		picture="rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\logo\reaperCrew_UK_Logo_co.paa";
		hiddenSelectionsTextures[]=
		{
			"rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\headgear\data\reaperCrew_CWR3_Boonie_DPM_2_co.paa"
		};
	};
	class cwr3_i_vest_base;
	class cwr3_i_vest_58webbing: cwr3_i_vest_base
	{
		class ItemInfo;
	};
	class reaperCrew_A_cwr3_webbing_dpm_1: cwr3_i_vest_58webbing
	{
		displayName="[reaperCrew] 58. Pattern Webbing Harness";
		hiddenSelections[]=
		{
			"hs_vest0",
			"hs_vest1",
			"hs_vest2",
			"hs_vest3",
			"hs_vest4"
		};
		hiddenSelectionsTextures[]=
		{
			"rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\webbing\data\reaperCrew_CWR3_Webbing_DPM_1_co.paa",
			"rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\webbing\data\reaperCrew_CWR3_Webbing_DPM_1_co.paa",
			"rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\webbing\data\reaperCrew_CWR3_Webbing_DPM_1_co.paa",
			"",
			""
		};
		model="\cwr3\humans\cwr3_soldiers_fia\vests\cwr3_vest_fia_58webbing.p3d";
		picture="rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\logo\reaperCrew_UK_Logo_co.paa";
		scope=1;
		scopeCurator=1;
		class ItemInfo: ItemInfo
		{
			armor=10;
			hiddenSelections[]=
			{
				"hs_vest0",
				"hs_vest1",
				"hs_vest2",
				"hs_vest3",
				"hs_vest4"
			};
			hiddenSelectionsTextures[]=
			{
				"rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\webbing\data\reaperCrew_CWR3_Webbing_DPM_1_co.paa",
				"rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\webbing\data\reaperCrew_CWR3_Webbing_DPM_1_co.paa",
				"rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\webbing\data\reaperCrew_CWR3_Webbing_DPM_1_co.paa",
				"",
				""
			};
			mass=55;
			passThrough=0.500000;
			uniformModel="\cwr3\humans\cwr3_soldiers_fia\vests\cwr3_vest_fia_58webbing.p3d";
			class HitpointsProtectionInfo
			{
				class Chest
				{
					armor=2;
					HitpointName="HitChest";
					PassThrough=0.900000;
				};
				class Diaphragm
				{
					armor=2;
					HitpointName="HitDiaphragm";
					PassThrough=0.900000;
				};
				class Abdomen
				{
					armor=4;
					hitpointName="HitAbdomen";
					passThrough=0.500000;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.900000;
				};
			};
		};
	};
};
class CfgVehicles
{
	class B_G_Survivor_F;
	class reaperCrew_U_A_cwr3_smock_dpm_1: B_G_Survivor_F
	{
		displayName="reaperCrew Uk smock";
		scope=1;
		scopeCurator=1;
		uniformClass="reaperCrew_A_cwr3_smock_dpm_1";
		model="\cwr3\expansions\cwr3_expansion_uk\uniforms\cwr3_uk_smock.p3d";
		hiddenSelections[]=
		{
			"hs_camo1",
			"hs_camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\uniforms\data\reaperCrew_CWR3_Smock_DPM_1_co.paa",
			"rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\uniforms\data\reaperCrew_CWR3_Smock_DPM_1_co.paa",
			""
		};
	};
	class reaperCrew_U_A_cwr3_smock_dpm_2: B_G_Survivor_F
	{
		displayName="reaperCrew Uk smock";
		scope=1;
		scopeCurator=1;
		uniformClass="reaperCrew_A_cwr3_smock_dpm_2";
		model="\cwr3\humans\cwr3_soldiers_fia\uniforms\cwr3_fia_smock.p3d";
		hiddenSelections[]=
		{
			"hs_camo1",
			"hs_camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\uniforms\data\reaperCrew_CWR3_Smock_DPM_1_co.paa",
			"rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\uniforms\data\reaperCrew_CWR3_Smock_DPM_1_co.paa",
			""
		};
	};
	class reaperCrew_U_A_cwr3_smock_dpm_3: B_G_Survivor_F
	{
		displayName="[reaperCrew] Uk smock";
		scope=1;
		scopeCurator=1;
		uniformClass="reaperCrew_A_cwr3_smock_dpm_3";
		model="\cwr3\humans\cwr3_soldiers_fia\uniforms\cwr3_fia_smock_rolled.p3d";
		hiddenSelections[]=
		{
			"hs_camo1",
			"hs_camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\uniforms\data\reaperCrew_CWR3_Smock_DPM_1_co.paa",
			"rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\uniforms\data\reaperCrew_CWR3_Smock_DPM_1_co.paa",
			""
		};
	};
	class reaperCrew_U_A_cwr3_smock_dpm_4: B_G_Survivor_F
	{
		displayName="[reaperCrew] Uk smock";
		scope=1;
		scopeCurator=1;
		uniformClass="reaperCrew_A_cwr3_smock_dpm_4";
		model="\cwr3\expansions\cwr3_expansion_uk\uniforms\cwr3_uk_smock.p3d";
		hiddenSelections[]=
		{
			"hs_camo1",
			"hs_camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\uniforms\data\reaperCrew_CWR3_Smock_DPM_1_co.paa",
			"rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\uniforms\data\reaperCrew_CWR3_Smock_DPM_2_co.paa",
			""
		};
	};
	class reaperCrew_U_A_cwr3_smock_dpm_5: B_G_Survivor_F
	{
		displayName="[reaperCrew] Uk smock";
		scope=1;
		scopeCurator=1;
		uniformClass="reaperCrew_A_cwr3_smock_dpm_5";
		model="\cwr3\humans\cwr3_soldiers_fia\uniforms\cwr3_fia_smock.p3d";
		hiddenSelections[]=
		{
			"hs_camo1",
			"hs_camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\uniforms\data\reaperCrew_CWR3_Smock_DPM_1_co.paa",
			"rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\uniforms\data\reaperCrew_CWR3_Smock_DPM_2_co.paa",
			""
		};
	};
	class reaperCrew_U_A_cwr3_smock_dpm_6: B_G_Survivor_F
	{
		displayName="[reaperCrew] Uk smock";
		scope=1;
		scopeCurator=1;
		uniformClass="reaperCrew_A_cwr3_smock_dpm_6";
		model="\cwr3\humans\cwr3_soldiers_fia\uniforms\cwr3_fia_smock_rolled.p3d";
		hiddenSelections[]=
		{
			"hs_camo1",
			"hs_camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\uniforms\data\reaperCrew_CWR3_Smock_DPM_1_co.paa",
			"rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\uniforms\data\reaperCrew_CWR3_Smock_DPM_2_co.paa",
			""
		};
	};
	class cwr3_b_uk_backpack_base;
	class reaperCrew_A_cwr3_backpack_dpm_1: cwr3_b_uk_backpack_base
	{
		displayName="[reaperCrew] UK 58. Pattern Backpack (DPM)";
		picture="rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\logo\reaperCrew_UK_Logo_co.paa";
		hiddenSelectionsTextures[]=
		{
			"rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\backpacks\data\reaperCrew_CWR3_Backpack_1_co.paa"
		};
		scope=2;
		scopeCurator=2;
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class reaperCrew_A_cwr3_backpack_dpm_2: cwr3_b_uk_backpack_base
	{
		displayName="[reaperCrew] UK 58. Pattern Backpack (DPM, Medic)";
		picture="rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\logo\reaperCrew_UK_Logo_co.paa";
		hiddenSelectionsTextures[]=
		{
			"rc_assets_pack_cwr3\addons\reaperCrew_cwr3_Uk\backpacks\data\reaperCrew_CWR3_Backpack_2_co.paa"
		};
		scope=2;
		scopeCurator=2;
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
};
