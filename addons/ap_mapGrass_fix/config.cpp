
class CfgPatches
{
	class ap_mapGrass_fix
	{
		units[]=
		{};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"CAAir",
			"CA_Anims_Char",
			"CAData",
			"CACharacters",
			"CAWeapons",
			"CACharacters_E",
			"CACharacters_E_Head"
		};
	};
};
class CfgSurfaceCharacters
{
	class CRGrassClutter //Chernarus
  	{
			probability[]={0.5,0.05,0.05,0.01};
			names[]={GrassCrookedGreen,GrassCrooked,AutumnFlowers,WeedDead};
  	};

  	class CRTallGrassClutter //Chernarus
  	{
			probability[]={0.1,0.05,0.055,0.05,0.02,0.01};
    			names[]={GrassTall,AutumnFlowers,GrassBunch,GrassCrooked,WeedDead,WeedDeadSmall};
  	};

  	class CRGrassWClutter //Chernarus
  	{
			probability[]={0.4,0.05,0.05,0.03,0.03};
			names[]={GrassCrooked,GrassCrookedGreen,AutumnFlowers,WeedDead,WeedDeadSmall};
  	};

  	class CRTallGrassWClutter //Chernarus
  	{
			probability[]={0.1,0.05,0.05,0.05,0.03,0.02};
			names[]={GrassTall,AutumnFlowers,GrassBunch,GrassCrooked,WeedDead,WeedDeadSmall};
  	};

  	class CRForestMixedClutter //Chernarus
  	{
			probability[]={0.05,0.05,0.05,0.001,0.003};
			names[]={GrassCrookedForest,FernAutumn,FernAutumnTall,MushroomsHorcak,MushroomsPrasivka};
  	};

  	class CRForestFirClutter //Chernarus
  	{
			probability[]={0.1,0.05,0.05,0.05,0.05,0.003,0.005,0.008,0.004};
			names[]={BlueBerry,FernAutumn,FernAutumnTall,SmallPicea,RaspBerry,MushroomsHorcak,MushroomsPrasivka,MushroomsBabka,MushroomsMuchomurka};
  	};

  	class CRHeatherClutter //Chernarus
  	{
			probability[]={0.05,0.15,0.1,0.05};
			names[]={BlueBerry,HeatherBrush,GrassCrooked,WeedSedge};
  	};

  	class CRStubbleClutter //Chernarus
  	{
			probability[]={0.5,0.01,0.01,0.005};
			names[]={StubbleClutter,AutumnFlowers,WeedDeadSmall,WeedDead};
  	};
	///////////////////////////////////////////////////
	class UTSparseGrassClutter //utes
	{
		names[] = {"UTGrassDryBunch"};
		probability[] = {0.07};
	};
	class UTGrassClutter //utes
	{
		probability[] = {0.5,0.02,0.03};
		names[] = {"UTGrassDryBunch","UTGrassDryLongBunch","UTAutumnFlowers"};
	};
	class UTHeatherClutter //utes
	{
		probability[] = {0.05,0.055,0.07,0.03};
		names[] = {"UTBlueBerry","UTHeatherBrush","UTGrassDryBunch","UTWeedSedge"};
	};
	class UTWeedsClutter //utes
	{
		probability[] = {0.3,0.055,0.05,0.03,0.02};
		names[] = {"UTAutumnFlowers","UTGrassDryLongBunch","UTWeedTall","UTWeedDead","UTWeedDeadSmall"};
	};
	class UTPineForestClutter //utes
	{
		probability[] = {0.05,0.05,0.05,0.05,0.001};
		names[] = {"UTBlueBerry","UTFernAutumn","UTFernAutumnTall","UTGrassDryBunch","UTMushroomsPrasivka"};
	};
	///////////////////////////////////////////////////
	class hotze_roughgrassClutter //everon+hatzercot
	{
		probability[] = {0.15,0.05,0.05,0.03,0.05};
		names[] = {"hotze_GrassCrooked","hotze_DryGrassBunch","hotze_GrassDryLong","hotze_WeedTall","hotze_GrassBunch"};
	};
	class hotze_waldClutter //everon+hatzercot
	{
		probability[] = {0.05,0.05,0.1,0.025,0.05};
		names[] = {"hotze_GrassCrookedForest","hotze_FernAutumn","hotze_FernAutumnTall","hotze_MushroomsHorcak","hotze_SmallPicea"};
	};
	class hotze_grassClutter //everon+hatzercot
	{
		probability[] = {0.4,0.1,0.1,0.05,0.025};
		names[] = {"hotze_GrassAutumn","hotze_GrassCrookedGreen","hotze_AutumnFlowers","hotze_WeedDead","hotze_WeedDeadSmall"};
	};
	class hotze_wuesteClutter //everon+hatzercot
	{
		probability[] = {0.05,0.01};
		names[] = {"hotze_GrassDead","hotze_GrassDry"};
	};
	class hotze_grasfelsClutter //everon+hatzercot
	{
		probability[] = {0.08,0.04};
		names[] = {"hotze_GrassDead","hotze_GrassDry"};
	};
	class hotze_steingrasClutter //everon+hatzercot
	{
		probability[] = {0.06,0.07};
		names[] = {"hotze_GrassTall","hotze_GrassDry"};
	};
	///////////////////////////////////////////////////
	class siErbaClutter //spritzisland
	{
		probability[] = {0.5,0.05,0.05,0.01};
		names[] = {"si_GrassCrookedGreen","si_GrassCrooked","si_AutumnFlowers","si_WeedDead"};
	};
	class siTallGrassClutter //spritzisland
	{
		probability[] = {0.2,0.1,0.15,0.07,0.02,0.01};
		names[] = {"si_GrassTall","si_AutumnFlowers","si_GrassBunch","si_GrassCrooked","si_WeedDead","si_WeedDeadSmall"};
	};
	class siGrassWClutter //spritzisland
	{
		probability[] = {0.5,0.057,0.05,0.05,0.03};
		names[] = {"si_GrassCrooked","si_GrassCrookedGreen","si_AutumnFlowers","si_WeedDead","si_WeedDeadSmall"};
	};
	class siTallGrassWClutter //spritzisland
	{
		probability[] = {0.15,0.15,0.1,0.1,0.1};
		names[] = {"si_GrassTall","si_GrassBunch","si_GrassCrookedGreen","si_GrassCrooked","si_StubbleClutter"};
	};
	class siForestMixedClutter //spritzisland
	{
		probability[] = {0.1,0.05,0.1,0.001,0.003};
		names[] = {"si_GrassCrookedForest","si_FernAutumn","si_FernAutumnTall","si_MushroomsHorcak","si_MushroomsPrasivka"};
	};
	class siForestFirClutter //spritzisland
	{
		probability[] = {0.2,0.05,0.05,0.055,0.05,0.003,0.005,0.008,0.004};
		names[] = {"si_BlueBerry","si_FernAutumn","si_FernAutumnTall","si_SmallPicea","si_RaspBerry","si_MushroomsHorcak","si_MushroomsPrasivka","si_MushroomsBabka","si_MushroomsMuchomurka"};
	};
	class siHeatherClutter //spritzisland
	{
		probability[] = {0.055,0.2,0.3,0.05};
		names[] = {"si_BlueBerry","si_HeatherBrush","si_GrassCrooked","si_WeedSedge"};
	};
	class siStubbleClutter //spritzisland
	{
		probability[] = {0.2,0.01,0.01,0.005};
		names[] = {"si_StubbleClutter","si_AutumnFlowers","si_WeedDeadSmall","si_WeedDead"};
	};
	///////////////////////////////////////////////////
	class wl_grassClutter //schwemlits
	{
		probability[] = {0.5,0.05,0.05};
		names[] = {"wl_GrassCrookedGreen","wl_GrassCrooked","wl_AutumnFlowers"};
	};
	class wl_grassdryClutter //schwemlits
	{
		probability[] = {0.5};
		names[] = {"wl_GrassDryLong_EP1"};
	};
	class wl_forestClutter //schwemlits
	{
		probability[] = {0.5};
		names[] = {"wl_GrassDryLong_EP1"};
	};
	class wl_fieldClutter //schwemlits
	{
		probability[] = {0.5};
		names[] = {"wl_stubble"};
	};
	///////////////////////////////////////////////////
	class Sara_A2_grassClutter //sahrani
	{
		probability[] = {0.2,0.05,0.15,0.001,0.002,0.001,0.05,0.01,0.001,0.001,0.06,0.03,0.01};
		names[] = {"Sara_A2_GrassAutumnLong","Sara_A2_GrassAutumnBrownS","Sara_A2_GrassCrookedForest","Sara_A2_GrassTall","Sara_A2_SmallLeafPlant","Sara_A2_Weed3Small","Sara_A2_BlueBerry","Sara_A2_WeedSedge","Sara_A2_Weed3","Sara_A2_MushroomsHorcak","Sara_A2_Plants_Yellow_EP1","Sara_A2_Plants_Violet_EP1","Sara_A2_Plants_White_EP1"};
	};
	class Sara_A2_grass2Clutter //sahrani
	{
		probability[] = {0.2,0.05,0.055,0.05,0.002,0.001,0.05,0.01,0.06,0.03,0.01};
		names[] = {"Sara_A2_GrassAutumnLong","Sara_A2_GrassAutumnBrownS","Sara_A2_GrassCrookedForest","Sara_A2_GrassTall","Sara_A2_SmallLeafPlant","Sara_A2_Weed3Small","Sara_A2_BlueBerry","Sara_A2_WeedSedge","Sara_A2_Plants_Yellow_EP1","Sara_A2_Plants_Violet_EP1","Sara_A2_Plants_White_EP1"};
	};
	class Sara_A2_forrestClutter //sahrani
	{
		probability[] = {0.2,0.04,0.055,0.15,0.001,0.001,0.001,0.001,0.05,0.03,0.02,0.01};
		names[] = {"Sara_A2_GrassAutumnLong","Sara_A2_GrassAutumnBrownS","Sara_A2_GrassCrookedForest","Sara_A2_GrassTall","Sara_A2_SmallLeafPlant","Sara_A2_Weed3","Sara_A2_SmallPicea","Sara_A2_Fern","Sara_A2_GrassBunch","Sara_A2_c_stubble","Sara_A2_Plants_Violet_EP1","Sara_A2_Plants_White_EP1"};
	};
	class Sara_A2_forrest2Clutter //sahrani
	{
		probability[] = {0.001,0.002,0.001,0.001,0.005,0.005,0.001,0.001,0.001,0.055,0.3,0.2};
		names[] = {"Sara_A2_MushroomsHorcak","Sara_A2_Ferntall","Sara_A2_Fern","Sara_A2_SmallPicea","Sara_A2_Weed3","Sara_A2_Weed3small","Sara_A2_BlueBerry","Sara_A2_RaspBerry","Sara_A2_TreeSmallForest","Sara_A2_GrassBunch","Sara_A2_GrassCrookedForest","Sara_A2_GrassTall"};
	};
	class Sara_A2_grassdirtClutter //sahrani
	{
		probability[] = {0.001,0.006,0.006,0.02,0.05,0.03,0.01};
		names[] = {"Sara_A2_MushroomsHorcak","Sara_A2_Weed3","Sara_A2_Weed3small","Sara_A2_GrassBunch","Sara_A2_GrassCrookedForest","Sara_A2_WeedDeadSmall","Sara_A2_GrassAutumnBrownS"};
	};
	class Sara_A2_dirtgrass2Clutter //sahrani
	{
		probability[] = {0.2,0.05,0.3,0.001,0.002,0.001,0.05,0.01,0.001};
		names[] = {"Sara_A2_GrassAutumnLong","Sara_A2_GrassAutumnBrownS","Sara_A2_GrassCrookedForest","Sara_A2_GrassTall","Sara_A2_SmallLeafPlant","Sara_A2_Weed3Small","Sara_A2_BlueBerry","Sara_A2_WeedSedge","Sara_A2_Weed3"};
	};
	class Sara_A2_sandgrassClutter //sahrani
	{
		probability[] = {0.002,0.001,0.003,0.005,0.01,0.03};
		names[] = {"Sara_A2_GrassDesert_EP1","Sara_A2_GrassDesertSoft_EP1","Sara_A2_StoneDesert_EP1","Sara_A2_StoneDesert2_EP1","Sara_A2_Clutter_grass_desert","Sara_A2_Clutter_grass_desert2"};
	};
	///////////////////////////////////////////////////
	class caribou_grassclutter //caribou
	{
		probability[] = {0.15,0.15,0.01,0.01};
		names[] = {"Caribou_GrassTall","Caribou_AutumnFlowers","Caribou_TK_Stones_group","Caribou_TK_Stones_mount"};
	};
	class caribou_grassclutter2 //caribou
	{
		probability[] = {0.4,0.08,0.01,0.03};
		names[] = {"Caribou_GrassCrookedGreen","Caribou_AutumnFlowers","Caribou_WeedDead","Caribou_SmallPicea"};
	};
	class caribou_grassclutter3 //caribou
	{
		probability[] = {0.01,0.1,0.02,0.02,0.03,0.02,0.01,0.03};
		names[] = {"Caribou_FernAutumn","Caribou_smGrassCrooked","Caribou_AutumnFlowers","Caribou_WeedTall","Caribou_TK_Stones_group","Caribou_TK_Stones_single","Caribou_TK_Stones_mount","Caribou_TK_Stones_round"};
	};
	class caribou_forestclutter //caribou
	{
		probability[] = {0.3,0.05,0.001,0.003,0.01,0.1,0.05};
		names[] = {"Caribou_BlueBerry","Caribou_FernAutumn","Caribou_MushroomsHorcak","Caribou_MushroomsPrasivka","Caribou_SmallPicea","Caribou_GrassCrookedGreen","Caribou_AutumnFlowers"};
	};
	class caribou_forestclutter2 //caribou
	{
		probability[] = {0.2,0.05,0.055,0.001,0.003,0.01,0.1,0.05};
		names[] = {"Caribou_BlueBerry","Caribou_FernAutumn","Caribou_GrassCrooked","Caribou_MushroomsHorcak","Caribou_MushroomsPrasivka","Caribou_SmallPicea","Caribou_RaspBerry","Caribou_AutumnFlowers"};
	};
	class caribou_forestclutter3 //caribou
	{
		probability[] = {0.3,0.01,0.015,0.08,0.001,0.003,0.08,0.04,0.01};
		names[] = {"Caribou_BlueBerry","Caribou_FernAutumnTall","Caribou_FernAutumn","Caribou_GrassCrooked","Caribou_MushroomsHorcak","Caribou_MushroomsPrasivka","Caribou_SmallPicea","Caribou_RaspBerry","Caribou_AutumnFlowers"};
	};
	///////////////////////////////////////////////////
	class THNurmi //thirsk
	{
		probability[] = {0.5, 0.05, 0.06, 0.01, 0.05};
		names[] = {"GrassCrookedGreen", "GrassCrooked", "AutumnFlowers", "WeedDead", "SmallPicea"};
	};	
	class THPnurmi //thirsk
	{
		probability[] = {0.005, 0.05, 0.05, 0.2, 0.05};
		names[] = {"AutumnFlowers", "GrassCrooked", "GrassBunch", "GrassCrookedGreen", "RaspBerry"};
	};	
	class THPnurmi2 //thirsk
	{
		probability[] = {0.5, 0.05, 0.05, 0.01};
		names[] = {"GrassCrookedGreen", "GrassCrooked", "AutumnFlowers", "WeedDead"};
	};
	class THMetsa //thirsk
	{
		probability[] = {0.3, 0.05, 0.055, 0.001, 0.003, 0.01, 0.1, 0.05};
		names[] = {"BlueBerry", "FernAutumn", "GrassCrooked", "MushroomsHorcak", "MushroomsPrasivka", "SmallPicea", "RaspBerry", "AutumnFlowers"};
	};	
	class THMetsa2 //thirsk
	{
		probability[] = {0.2, 0.15, 0.01, 0.2, 0.005, 0.008, 0.004};
		names[] = {"BlueBerry", "FernAutumn", "SmallPicea", "GrassCrooked", "MushroomsPrasivka", "MushroomsBabka", "MushroomsMuchomurka"};
	};	
	class THKanerva //thirsk
	{
		probability[] = {0.055, 0.3, 0.15, 0.05};
		names[] = {"BlueBerry", "HeatherBrush", "GrassCrooked", "WeedSedge"};
	};	
	class THSekalainen //thirsk
	{
		probability[] = {0.5, 0.01, 0.01, 0.005, 0.1};
		names[] = {"StubbleClutter", "AutumnFlowers", "WeedDeadSmall", "WeedDead", "SmallPicea"};
	};
	///////////////////////////////////////////////////
	class ibr_PgrassClutter //panthera
	{
		probability[]={0.05,0.4,0.05,0.07};
		names[]=
		{
			"ibr_PantheraGrassBunch",
			"ibr_PantheraGrassDlouha",
			"ibr_PantheraGrassWeed",
			"ibr_PantheraGrassFlowers"
		};
	};
	class ibr_PwoodClutter //panthera
	{
		probability[]={0.1,0.1,0.029999999,0.07,0.05};
		names[]=
		{
			"ibr_PantheraWoodGrass",
			"ibr_PantheraWoodFern",
			"ibr_goban",
			"ibr_musnica",
			"ibr_smreka"
		};
	};
	class ibr_PstonesClutter //panthera
	{
		probability[]={0.05};
		names[]=
		{
			"ibr_PantheraStoneRocks"
		};
	};
	class ibr_PsandClutter //panthera
	{
		probability[]={0.050000001};
		names[]=
		{
			"ibr_PantheraStoneRocks"
		};
	};
	class ibr_ProckClutter //panthera
	{
		probability[]={0.0099999998};
		names[]=
		{
			"ibr_PantheraStoneRocks"
		};
	};
	///////////////////////////////////////////////////
	class napf_wald1Clutter //napf
	{
		probability[] = {0.05,0.05,0.1,0.1,0.003,0.008,0.004,0.05,0.07};
		names[] = {"momo_GrassCrookedForest","momo_FernAutumn","momo_FernAutumnTall","momo_RaspBerry","momo_MushroomsHorcak","momo_MushroomsBabka","momo_MushroomsMuchomurka","momo_GrassDryLong","momo_SmallPicea"};
	};
	class napf_gras1Clutter //napf
	{
		probability[] = {0.2,0.05,0.1,0.03,0.05};
		names[] = {"momo_GrassCrooked","momo_DryGrassBunch","momo_GrassDryLong","momo_WeedTall","momo_GrassBunch"};
	};
	class napf_steingrasClutter //napf
	{
		probability[] = {0.03,0.02,0.01};
		names[] = {"momo_GrassCrooked","momo_DryGrassBunch","momo_GrassDryLong"};
	};
	///////////////////////////////////////////////////
	class gsep_dirtclutter //zernovo
	{
		probability[] = {0.05,0.05};
		names[] = {"gsep_stonesmallrounded","gsep_Grasscrooked"};
	};
	class gsep_hayfieldclutter //zernovo
	{
		probability[] = {0.25};
		names[] = {"gsep_stubble"};
	};
	class gsep_tallgrassclutter //zernovo
	{
		probability[] = {0.05,0.05,0.4,0.055,0.3};
		names[] = {"gsep_grassdrylong","gsep_grassdrylongbunch","gsep_grasstall","gsep_AutumnFlowers","gsep_GrassCrooked"};
	};
	class gsep_shortgrassclutter //zernovo
	{
		probability[] = {0.05,0.7,0.01,0.01};
		names[] = {"gsep_GrassCrookedGreen","gsep_GrassCrooked","gsep_AutumnFlowers","gsep_WeedDead"};
	};
	class gsep_barerockclutter //zernovo
	{
		probability[] = {0.2};
		names[] = {"gsep_stonesmallrounded"};
	};
	class gsep_forestclutter //zernovo
	{
		probability[] = {0.1,0.05,0.1,0.001,0.003};
		names[] = {"gsep_grassforest","gsep_fern","gsep_ferntall","gsep_mushroom1","gsep_mushroom2"};
	};
	///////////////////////////////////////////////////
	class FDF_POTallGrassClutter //podogorsk
	{
		probability[] = {0.02,0.01,0.02,0.055,0.35,0.2,0.04};
		names[] = {"GrassTall","AutumnFlowers","FDF_DryGrassBunch","FDF_GrassCrooked","FDF_GrassCrookedForest","FDF_Caluna","FDF_Leaf_1"};
	};
	class FDF_POLeafClutter //podogorsk
	{
		probability[] = {0.4,0.025,0.025};
		names[] = {"FDF_Leaf_1","FDF_FernAutumnTall","FDF_GrassAutumnBrown"};
	};
	class FDF_POFirClutter //podogorsk
	{
		probability[] = {0.15,0.05,0.025,0.15,0.05,0.005,0.005,0.005,0.005,0.005};
		names[] = {"FDF_BlueBerry","FernAutumn","FDF_FernAutumnTall","FDF_GrassAutumnBrown","SmallPicea","RaspBerry","MushroomsHorcak","MushroomsPrasivka","MushroomsBabka","MushroomsMuchomurka"};
	};
	class FDF_POSwampClutter //podogorsk
	{
		probability[] = {0.125,0.125,0.005,0.09,0.005,0.125,0.125};
		names[] = {"BlueBerry","FDF_StubbleClutter","SmallPicea","RaspBerry","GrassTall","FDF_GrassDryLong","FDF_GrassAutumnBrown"};
	};
	class FDF_POWheatClutter //podogorsk
	{
		probability[] = {0.3,0.05};
		names[] = {"FDF_Wheat","WeedDeadSmall"};
	};
	///////////////////////////////////////////////////
	class ibr_grassClutter //isladuala
	{
		probability[] = {0.5,0.5,0.05};
		names[] = {"ibr_dgrass1","ibr_dgrass2","ibr_dgrass3"};
	};
	class ibr_woodClutter //isladuala
	{
		probability[] = {0.1,0.3,0.1};
		names[] = {"ibr_gdlong","ibr_dwood1","ibr_dweed"};
	};
	class ibr_rockClutter //isladuala
	{
		probability[] = {0.01};
		names[] = {"ibr_drock"};
	};
	class ibr_stonesClutter //isladuala
	{
		probability[] = {0.05};
		names[] = {"ibr_drock"};
	};
	class ibr_sandClutter //isladuala
	{
		probability[] = {0.003};
		names[] = {"ibr_drock"};
	};
	///////////////////////////////////////////////////
	class Fra_wald_char //franken
	{
		probability[] = {0.09,0.054,0.05,0.05,0.05};
		names[] = {"picea","fern","treesmall","bunch","ferntall"};
	};
	class Fra_wiesetest_char //franken
	{
		probability[] = {0.005,0.8,0.03,0.01};
		names[] = {"grasstall","grassautumn","grassautumnt","grassautumnbrown"};
	};
	class Fra_acker_char //franken
	{
		probability[] = {0.35};
		names[] = {"getreide"};
	};
	class Fra_waldsand_char //franken
	{
		probability[] = {0.05,0.05,0.052};
		names[] = {"neuwald1","neuwald2","neuwald3"};
	};
	///////////////////////////////////////////////////
	class ibr_lingrassClutter //lingor
	{
		probability[] = {0.25,0.15,0.05,0.05};
		names[] = {"ibr_lgrass1","ibr_lgrass2","ibr_lgrass3","ibr_lstones"};
	};
	class ibr_linwoodClutter //lingor
	{
		probability[] = {0.05,0.15,0.05};
		names[] = {"ibr_lgrass1","ibr_lwood1","lin_GrassTall"};
	};
	class ibr_linrockClutter //lingor
	{
		probability[] = {0.04,0.05};
		names[] = {"ibr_lrock","ibr_lstones"};
	};
	class ibr_linstonesClutter //lingor
	{
		probability[] = {0.02};
		names[] = {"ibr_lstones"};
	};
	class ibr_linsandClutter //lingor
	{
		probability[] = {0.15};
		names[] = {"ibr_lstones"};
	};
	///////////////////////////////////////////////////
	class actGrassClutter //kilima
	{
		probability[]={0.5,0.05,0.05,0.0099999998};
		names[]=
		{
			"act_GrassCrookedGreen",
			"act_GrassCrooked",
			"act_AutumnFlowers",
			"act_WeedDead"
		};
	};
	class actTallGrassClutter //kilima
	{
		probability[]={0.2,0.1,0.30000001,0.07,0.02,0.0099999998};
		names[]=
		{
			"act_GrassTall",
			"act_AutumnFlowers",
			"act_GrassBunch",
			"act_GrassCrooked",
			"act_WeedDead",
			"act_WeedDeadSmall"
		};
	};
	class actGrassWClutter //kilima
	{
		probability[]={0.5,0.057,0.05,0.050000001,0.029999999};
		names[]=
		{
			"act_GrassCrooked",
			"act_GrassCrookedGreen",
			"act_AutumnFlowers",
			"act_WeedDead",
			"act_WeedDeadSmall"
		};
	};
	class actTallGrassWClutter //kilima
	{
		probability[]={0.15,0.15,0.1,0.1,0.029999999,0.02};
		names[]=
		{
			"act_GrassTall",
			"act_AutumnFlowers",
			"act_GrassBunch",
			"act_GrassCrooked",
			"act_WeedDead",
			"act_WeedDeadSmall"
		};
	};
	class actForestMixedClutter //kilima
	{
		probability[]={0.1,0.05,0.1,0.001,0.003};
		names[]=
		{
			"act_GrassCrookedForest",
			"act_FernAutumn",
			"act_FernAutumnTall",
			"act_MushroomsHorcak",
			"act_MushroomsPrasivka"
		};
	};
	class actForestFirClutter //kilima
	{
		probability[]={0.2,0.05,0.05,0.055000001,0.050000001,0.003,0.0049999999,0.0080000004,0.0040000002};
		names[]=
		{
			"act_BlueBerry",
			"act_FernAutumn",
			"act_FernAutumnTall",
			"act_SmallPicea",
			"act_RaspBerry",
			"act_MushroomsHorcak",
			"act_MushroomsPrasivka",
			"act_MushroomsBabka",
			"act_MushroomsMuchomurka"
		};
	};
	///////////////////////////////////////////////////
	class siFallujahErbaClutter //fallujah
	{
		probability[] = {0.05,0.05,0.05,0.05};
		names[] = {"si_StubbleClutter","si_GrassCrooked","si_WeedDeadSmall","si_WeedDead"};
	};
	class siFallujahTallGrassWClutter //fallujah
	{
		probability[] = {0.05,0.05,0.05,0.05,0.1};
		names[] = {"si_GrassTall","si_GrassBunch","si_GrassCrookedGreen","si_GrassCrooked","si_StubbleClutter"};
	};
	///////////////////////////////////////////////////
	
};