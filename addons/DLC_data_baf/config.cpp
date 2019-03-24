class CfgPatches
{
	class CA_BAF
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.5599999;
		requiredAddons[]=
		{
			"CAMisc3",
			"CA_E"
		};
	};
};
class CfgGroups
{
	class West
	{
		class BIS_BAF_MTP
		{
			name="BAF";
			class Infantry
			{
				name="Infantry (MTP)";
				class BAF_Section_MTP
				{
					name="Section";
					faction="BIS_BAF";
					rarityGroup=0.5;
					class Unit0
					{
						side=1;
						vehicle="BAF_Soldier_SL_MTP";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=1;
						vehicle="BAF_Soldier_TL_MTP";
						rank="SERGEANT";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="BAF_Soldier_GL_MTP";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=1;
						vehicle="BAF_Soldier_AR_MTP";
						rank="CORPORAL";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=1;
						vehicle="BAF_Soldier_Marksman_MTP";
						rank="CORPORAL";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=1;
						vehicle="BAF_Soldier_GL_MTP";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=1;
						vehicle="BAF_Soldier_AR_MTP";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit7
					{
						side=1;
						vehicle="BAF_Soldier_AAR_MTP";
						rank="PRIVATE";
						position[]={15,0,0};
					};
				};
				class BAF_Fireteam_MTP
				{
					name="Fireteam";
					faction="BIS_BAF";
					rarityGroup=0.80000001;
					class Unit0
					{
						side=1;
						vehicle="BAF_Soldier_TL_MTP";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=1;
						vehicle="BAF_Soldier_GL_MTP";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="BAF_Soldier_AR_MTP";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=1;
						vehicle="BAF_Soldier_Marksman_MTP";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class BAF_Support_MTP
				{
					name="Fireteam (support)";
					faction="BIS_BAF";
					rarityGroup=0.2;
					class Unit0
					{
						side=1;
						vehicle="BAF_Soldier_TL_MTP";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=1;
						vehicle="BAF_Soldier_FAC_MTP";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="BAF_Soldier_Medic_MTP";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=1;
						vehicle="BAF_Soldier_EN_MTP";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class BAF_MG_MTP
				{
					name="Fireteam (MG)";
					faction="BIS_BAF";
					rarityGroup=0.2;
					class Unit0
					{
						side=1;
						vehicle="BAF_Soldier_TL_MTP";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=1;
						vehicle="BAF_Soldier_GL_MTP";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="BAF_Soldier_MG_MTP";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=1;
						vehicle="BAF_Soldier_AMG_MTP";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class BAF_AT_MTP
				{
					name="Fireteam (AT)";
					faction="BIS_BAF";
					rarityGroup=0.1;
					class Unit0
					{
						side=1;
						vehicle="BAF_Soldier_TL_MTP";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=1;
						vehicle="BAF_Soldier_GL_MTP";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="BAF_Soldier_AT_MTP";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=1;
						vehicle="BAF_Soldier_AAT_MTP";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class BAF_HAT_MTP
				{
					name="Tankbusters";
					faction="BIS_BAF";
					rarityGroup=0.050000001;
					class Unit0
					{
						side=1;
						vehicle="BAF_Soldier_AT_MTP";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=1;
						vehicle="BAF_Soldier_HAT_MTP";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="BAF_Soldier_AHAT_MTP";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=1;
						vehicle="BAF_Soldier_AAT_MTP";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class BAF_Snipers_MTP
				{
					name="Sniper Team";
					faction="BIS_BAF";
					rarityGroup=0.050000001;
					class Unit0
					{
						side=1;
						vehicle="BAF_Soldier_Sniper_MTP";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=1;
						vehicle="BAF_Soldier_SniperH_MTP";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="BAF_Soldier_spotter_MTP";
						rank="PRIVATE";
						position[]={5,0,0};
					};
				};
				class BAF_SnipersN_MTP
				{
					name="Sniper Team (night)";
					faction="BIS_BAF";
					rarityGroup=0.050000001;
					class Unit0
					{
						side=1;
						vehicle="BAF_Soldier_SniperN_MTP";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=1;
						vehicle="BAF_Soldier_SniperN_MTP";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="BAF_Soldier_spotterN_MTP";
						rank="PRIVATE";
						position[]={5,0,0};
					};
				};
			};
			class Infantry_DDPM
			{
				name="Infantry (desert)";
				class BAF_Section_DDPM
				{
					name="Section";
					faction="BIS_BAF";
					rarityGroup=0.5;
					class Unit0
					{
						side=1;
						vehicle="BAF_Soldier_SL_DDPM";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=1;
						vehicle="BAF_Soldier_TL_DDPM";
						rank="SERGEANT";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="BAF_Soldier_GL_DDPM";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=1;
						vehicle="BAF_Soldier_AR_DDPM";
						rank="CORPORAL";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=1;
						vehicle="BAF_Soldier_Marksman_DDPM";
						rank="CORPORAL";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=1;
						vehicle="BAF_Soldier_GL_DDPM";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=1;
						vehicle="BAF_Soldier_AR_DDPM";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit7
					{
						side=1;
						vehicle="BAF_Soldier_AAR_DDPM";
						rank="PRIVATE";
						position[]={15,0,0};
					};
				};
				class BAF_Fireteam_DDPM
				{
					name="Fireteam";
					faction="BIS_BAF";
					rarityGroup=0.80000001;
					class Unit0
					{
						side=1;
						vehicle="BAF_Soldier_TL_DDPM";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=1;
						vehicle="BAF_Soldier_GL_DDPM";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="BAF_Soldier_AR_DDPM";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=1;
						vehicle="BAF_Soldier_Marksman_DDPM";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class BAF_Support_DDPM
				{
					name="Fireteam (support)";
					faction="BIS_BAF";
					rarityGroup=0.2;
					class Unit0
					{
						side=1;
						vehicle="BAF_Soldier_TL_DDPM";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=1;
						vehicle="BAF_Soldier_FAC_DDPM";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="BAF_Soldier_Medic_DDPM";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=1;
						vehicle="BAF_Soldier_EN_DDPM";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class BAF_MG_DDPM
				{
					name="Fireteam (MG)";
					faction="BIS_BAF";
					rarityGroup=0.2;
					class Unit0
					{
						side=1;
						vehicle="BAF_Soldier_TL_DDPM";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=1;
						vehicle="BAF_Soldier_GL_DDPM";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="BAF_Soldier_MG_DDPM";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=1;
						vehicle="BAF_Soldier_AMG_DDPM";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class BAF_AT_DDPM
				{
					name="Fireteam (AT)";
					faction="BIS_BAF";
					rarityGroup=0.1;
					class Unit0
					{
						side=1;
						vehicle="BAF_Soldier_TL_DDPM";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=1;
						vehicle="BAF_Soldier_GL_DDPM";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="BAF_Soldier_AT_DDPM";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=1;
						vehicle="BAF_Soldier_AAT_DDPM";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class BAF_HAT_DDPM
				{
					name="Tankbusters";
					faction="BIS_BAF";
					rarityGroup=0.050000001;
					class Unit0
					{
						side=1;
						vehicle="BAF_Soldier_AT_DDPM";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=1;
						vehicle="BAF_Soldier_HAT_DDPM";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="BAF_Soldier_AHAT_DDPM";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=1;
						vehicle="BAF_Soldier_AAT_DDPM";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
			};
			class Infantry_W
			{
				name="Infantry (woodland)";
				class BAF_Section_W
				{
					name="Section";
					faction="BIS_BAF";
					rarityGroup=0.5;
					class Unit0
					{
						side=1;
						vehicle="BAF_Soldier_SL_W";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=1;
						vehicle="BAF_Soldier_TL_W";
						rank="SERGEANT";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="BAF_Soldier_GL_W";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=1;
						vehicle="BAF_Soldier_AR_W";
						rank="CORPORAL";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=1;
						vehicle="BAF_Soldier_Marksman_W";
						rank="CORPORAL";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=1;
						vehicle="BAF_Soldier_GL_W";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=1;
						vehicle="BAF_Soldier_AR_W";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit7
					{
						side=1;
						vehicle="BAF_Soldier_AAR_W";
						rank="PRIVATE";
						position[]={15,0,0};
					};
				};
				class BAF_Fireteam_W
				{
					name="Fireteam";
					faction="BIS_BAF";
					rarityGroup=0.80000001;
					class Unit0
					{
						side=1;
						vehicle="BAF_Soldier_TL_W";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=1;
						vehicle="BAF_Soldier_GL_W";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="BAF_Soldier_AR_W";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=1;
						vehicle="BAF_Soldier_Marksman_W";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class BAF_Support_W
				{
					name="Fireteam (support)";
					faction="BIS_BAF";
					rarityGroup=0.2;
					class Unit0
					{
						side=1;
						vehicle="BAF_Soldier_TL_W";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=1;
						vehicle="BAF_Soldier_FAC_W";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="BAF_Soldier_Medic_W";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=1;
						vehicle="BAF_Soldier_EN_W";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class BAF_MG_W
				{
					name="Fireteam (MG)";
					faction="BIS_BAF";
					rarityGroup=0.2;
					class Unit0
					{
						side=1;
						vehicle="BAF_Soldier_TL_W";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=1;
						vehicle="BAF_Soldier_GL_W";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="BAF_Soldier_MG_W";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=1;
						vehicle="BAF_Soldier_AMG_W";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class BAF_AT_W
				{
					name="Fireteam (AT)";
					faction="BIS_BAF";
					rarityGroup=0.1;
					class Unit0
					{
						side=1;
						vehicle="BAF_Soldier_TL_W";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=1;
						vehicle="BAF_Soldier_GL_W";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="BAF_Soldier_AT_W";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=1;
						vehicle="BAF_Soldier_AAT_W";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class BAF_HAT_W
				{
					name="Tankbusters";
					faction="BIS_BAF";
					rarityGroup=0.050000001;
					class Unit0
					{
						side=1;
						vehicle="BAF_Soldier_AT_W";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=1;
						vehicle="BAF_Soldier_HAT_W";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="BAF_Soldier_AHAT_W";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=1;
						vehicle="BAF_Soldier_AAT_W";
						rank="PRIVATE";
						position[]={7,0,0};
					};
				};
				class BAF_Snipers_W
				{
					name="Sniper Team";
					faction="BIS_BAF";
					rarityGroup=0.050000001;
					class Unit0
					{
						side=1;
						vehicle="BAF_Soldier_Sniper_W";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=1;
						vehicle="BAF_Soldier_SniperH_W";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="BAF_Soldier_spotter_W";
						rank="PRIVATE";
						position[]={5,0,0};
					};
				};
				class BAF_SnipersN_W
				{
					name="Sniper Team (night)";
					faction="BIS_BAF";
					rarityGroup=0.050000001;
					class Unit0
					{
						side=1;
						vehicle="BAF_Soldier_SniperN_W";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=1;
						vehicle="BAF_Soldier_SniperN_W";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="BAF_Soldier_spotterN_W";
						rank="PRIVATE";
						position[]={5,0,0};
					};
				};
			};
			class Motorized_MTP
			{
				name="Motorized Infantry";
				class BAF_MPatrol_MTP
				{
					name="Motorized Patrol (desert)";
					faction="BIS_BAF";
					rarityGroup=0.5;
					class Unit0
					{
						side=1;
						vehicle="BAF_Soldier_SL_MTP";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=1;
						vehicle="BAF_Soldier_TL_MTP";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="BAF_Soldier_GL_MTP";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=1;
						vehicle="BAF_Soldier_GL_MTP";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=1;
						vehicle="BAF_Soldier_AR_MTP";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=1;
						vehicle="BAF_Soldier_AR_MTP";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=1;
						vehicle="BAF_Soldier_Marksman_MTP";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit7
					{
						side=1;
						vehicle="BAF_Offroad_D";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
				};
				class BAF_MTeam_MTP
				{
					name="Jackal Team (desert)";
					faction="BIS_BAF";
					rarityGroup=0.30000001;
					class Unit0
					{
						side=1;
						vehicle="BAF_Soldier_TL_MTP";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=1;
						vehicle="BAF_Soldier_GL_MTP";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="BAF_Jackal2_L2A1_D";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
				};
				class BAF_MSection_MTP
				{
					name="Jackal Section (desert)";
					faction="BIS_BAF";
					rarityGroup=0.1;
					class Unit0
					{
						side=1;
						vehicle="BAF_Soldier_SL_MTP";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=1;
						vehicle="BAF_Soldier_GL_MTP";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="BAF_Jackal2_L2A1_D";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit3
					{
						side=1;
						vehicle="BAF_Soldier_TL_MTP";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=1;
						vehicle="BAF_Soldier_GL_MTP";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=1;
						vehicle="BAF_Jackal2_L2A1_D";
						rank="PRIVATE";
						position[]={-5,-10,0};
					};
				};
				class BAF_MPatrol_W
				{
					name="Motorized Patrol (woodland)";
					faction="BIS_BAF";
					rarityGroup=0.5;
					class Unit0
					{
						side=1;
						vehicle="BAF_Soldier_SL_W";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=1;
						vehicle="BAF_Soldier_TL_W";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="BAF_Soldier_GL_W";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=1;
						vehicle="BAF_Soldier_GL_W";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=1;
						vehicle="BAF_Soldier_AR_W";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=1;
						vehicle="BAF_Soldier_AR_W";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=1;
						vehicle="BAF_Soldier_Marksman_W";
						rank="PRIVATE";
						position[]={13,0,0};
					};
					class Unit7
					{
						side=1;
						vehicle="BAF_Offroad_W";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
				};
				class BAF_MTeam_W
				{
					name="Jackal Team (woodland)";
					faction="BIS_BAF";
					rarityGroup=0.30000001;
					class Unit0
					{
						side=1;
						vehicle="BAF_Soldier_TL_W";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=1;
						vehicle="BAF_Soldier_GL_W";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="BAF_Jackal2_L2A1_W";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
				};
				class BAF_MSection_W
				{
					name="Jackal Section (woodland)";
					faction="BIS_BAF";
					rarityGroup=0.1;
					class Unit0
					{
						side=1;
						vehicle="BAF_Soldier_SL_W";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=1;
						vehicle="BAF_Soldier_GL_W";
						rank="PRIVATE";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="BAF_Jackal2_L2A1_W";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit3
					{
						side=1;
						vehicle="BAF_Soldier_TL_W";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit4
					{
						side=1;
						vehicle="BAF_Soldier_GL_W";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit5
					{
						side=1;
						vehicle="BAF_Jackal2_L2A1_W";
						rank="PRIVATE";
						position[]={-5,-10,0};
					};
				};
			};
			class Mechanized
			{
				name="Mechanized Infantry";
				class BAF_MechSec_MTP
				{
					name="Mech. Inf. Section (desert)";
					faction="BIS_BAF";
					rarityGroup=0.30000001;
					class Unit0
					{
						side=1;
						vehicle="BAF_Soldier_SL_MTP";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=1;
						vehicle="BAF_Soldier_TL_MTP";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="BAF_Soldier_GL_MTP";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=1;
						vehicle="BAF_Soldier_GL_MTP";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=1;
						vehicle="BAF_Soldier_AR_MTP";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=1;
						vehicle="BAF_Soldier_Marksman_MTP";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=1;
						vehicle="BAF_FV510_D";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
				};
				class BAF_MechAT_MTP
				{
					name="Mech. AT Section (desert)";
					faction="BIS_BAF";
					rarityGroup=0.30000001;
					class Unit0
					{
						side=1;
						vehicle="BAF_Soldier_AT_MTP";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=1;
						vehicle="BAF_Soldier_AT_MTP";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="BAF_Soldier_HAT_MTP";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=1;
						vehicle="BAF_Soldier_AAT_MTP";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=1;
						vehicle="BAF_Soldier_AAT_MTP";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=1;
						vehicle="BAF_Soldier_AHAT_MTP";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=1;
						vehicle="BAF_FV510_D";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
				};
				class BAF_MechSec_W
				{
					name="Mech. Inf. Section (woodland)";
					faction="BIS_BAF";
					rarityGroup=0.30000001;
					class Unit0
					{
						side=1;
						vehicle="BAF_Soldier_SL_W";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=1;
						vehicle="BAF_Soldier_TL_W";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="BAF_Soldier_GL_W";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=1;
						vehicle="BAF_Soldier_GL_W";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=1;
						vehicle="BAF_Soldier_AR_W";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=1;
						vehicle="BAF_Soldier_Marksman_W";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=1;
						vehicle="BAF_FV510_W";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
				};
				class BAF_MechAT_W
				{
					name="Mech. AT Section (woodland)";
					faction="BIS_BAF";
					rarityGroup=0.30000001;
					class Unit0
					{
						side=1;
						vehicle="BAF_Soldier_AT_W";
						rank="CORPORAL";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=1;
						vehicle="BAF_Soldier_AT_W";
						rank="CORPORAL";
						position[]={3,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="BAF_Soldier_HAT_W";
						rank="CORPORAL";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=1;
						vehicle="BAF_Soldier_AAT_W";
						rank="PRIVATE";
						position[]={7,0,0};
					};
					class Unit4
					{
						side=1;
						vehicle="BAF_Soldier_AAT_W";
						rank="PRIVATE";
						position[]={9,0,0};
					};
					class Unit5
					{
						side=1;
						vehicle="BAF_Soldier_AHAT_W";
						rank="PRIVATE";
						position[]={11,0,0};
					};
					class Unit6
					{
						side=1;
						vehicle="BAF_FV510_W";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
				};
			};
			class Armored
			{
				name="Armour";
				class BAF_WPlatoon_MTP
				{
					name="Warrior Platoon (desert)";
					faction="BIS_BAF";
					rarityGroup=0.050000001;
					class Unit0
					{
						side=1;
						vehicle="BAF_FV510_D";
						rank="SERGEANT";
						position[]={0,8,0};
					};
					class Unit1
					{
						side=1;
						vehicle="BAF_FV510_D";
						rank="CORPORAL";
						position[]={8,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="BAF_FV510_D";
						rank="CORPORAL";
						position[]={-8,0,0};
					};
					class Unit3
					{
						side=1;
						vehicle="BAF_FV510_D";
						rank="CORPORAL";
						position[]={0,-8,0};
					};
				};
				class BAF_WPlatoon_W
				{
					name="Warrior Platoon (woodland)";
					faction="BIS_BAF";
					rarityGroup=0.050000001;
					class Unit0
					{
						side=1;
						vehicle="BAF_FV510_W";
						rank="SERGEANT";
						position[]={0,8,0};
					};
					class Unit1
					{
						side=1;
						vehicle="BAF_FV510_W";
						rank="CORPORAL";
						position[]={8,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="BAF_FV510_W";
						rank="CORPORAL";
						position[]={-8,0,0};
					};
					class Unit3
					{
						side=1;
						vehicle="BAF_FV510_W";
						rank="CORPORAL";
						position[]={0,-8,0};
					};
				};
			};
		};
	};
};
class CfgArmory
{
	class Unlockables
	{
		class BAF
		{
			classes[]=
			{
				"BAF_L109A1_HE",
				"BAF_L85A2_RIS_SUSAT",
				"BAF_soldier_MTP",
				"BAF_Asoldier_MTP",
				"BAF_soldier_Medic_MTP",
				"BAF_pilot_MTP",
				"BAF_crewman_MTP",
				"BAF_ATV_D",
				"BAF_soldier_DDPM",
				"BAF_Asoldier_DDPM",
				"BAF_soldier_Medic_DDPM",
				"BAF_pilot_DDPM",
				"BAF_crewman_DDPM",
				"BAF_L85A2_UGL_SUSAT",
				"BAF_soldier_GL_MTP",
				"BAF_soldier_GL_DDPM",
				"BAF_Soldier_spotterN_MTP",
				"BAF_L86A2_ACOG",
				"BAF_soldier_Marksman_MTP",
				"BAF_Offroad_D",
				"BAF_soldier_Marksman_DDPM",
				"CIV_Contractor1_BAF",
				"BAF_Soldier_scout_MTP",
				"BAF_Soldier_scout_DDPM",
				"BAF_L85A2_RIS_ACOG",
				"BAF_L85A2_RIS_Holo",
				"BAF_soldier_L_MTP",
				"BAF_soldier_EN_MTP",
				"BAF_L85A2_UGL_ACOG",
				"BAF_soldier_L_DDPM",
				"BAF_soldier_EN_DDPM",
				"BAF_L85A2_UGL_Holo",
				"BAF_L85A2_RIS_CWS",
				"BAF_Soldier_N_MTP",
				"BAF_Soldier_N_DDPM",
				"BAF_Soldier_AMG_DDPM",
				"BAF_soldier_spotter_MTP",
				"BAF_Soldier_FAC_MTP",
				"BAF_soldier_spotter_DDPM",
				"BAF_Soldier_FAC_DDPM",
				"BAF_soldier_TL_MTP",
				"BAF_soldier_TL_DDPM",
				"CIV_Contractor2_BAF",
				"BAF_L2A1_ACOG_tripod",
				"BAF_L2A1_ACOG_minitripod",
				"BAF_L2A1_Tripod_D",
				"BAF_L2A1_Minitripod_W",
				"BAF_L2A1_Tripod_W",
				"BAF_L2A1_Minitripod_D",
				"BAF_Merlin_HC3_D",
				"BAF_GPMG_Minitripod_D",
				"BAF_GMG_ACOG_minitripod",
				"BAF_GPMG_Minitripod_W",
				"BAF_GMG_Tripod_D",
				"BAF_GMG_Tripod_W",
				"BAF_soldier_AA_MTP",
				"BAF_soldier_AA_DDPM",
				"BAF_LRR_scoped",
				"BAF_soldier_Sniper_MTP",
				"BAF_soldier_AHAA_MTP",
				"BAF_soldier_Sniper_DDPM",
				"BAF_soldier_AHAA_DDPM",
				"BAF_L110A1_Aim",
				"BAF_soldier_AR_MTP",
				"BAF_soldier_AR_DDPM",
				"BAF_L7A2_GPMG",
				"BAF_soldier_MG_MTP",
				"BAF_soldier_MG_DDPM",
				"BAF_soldier_AAR_MTP",
				"BAF_soldier_AMG_MTP",
				"BAF_soldier_AAR_DDPM",
				"BAF_soldier_SL_MTP",
				"BAF_Soldier_N_W",
				"BAF_soldier_SL_DDPM",
				"BAF_Soldier_AAA_DDPM",
				"BAF_NLAW_Launcher",
				"BAF_soldier_AT_MTP",
				"BAF_soldier_HAT_MTP",
				"BAF_soldier_AT_DDPM",
				"BAF_soldier_HAT_DDPM",
				"BAF_soldier_AAT_MTP",
				"BAF_soldier_AHAT_MTP",
				"BAF_soldier_AAT_DDPM",
				"BAF_soldier_AHAT_DDPM",
				"BAF_Soldier_AAA_MTP",
				"BAF_AS50_scoped",
				"BAF_soldier_SniperH_MTP",
				"BAF_Soldier_Officer_DDPM",
				"BAF_AS50_TWS",
				"BAF_soldier_Officer_MTP",
				"BAF_soldier_SniperN_MTP",
				"BAF_soldier_w",
				"BAF_Asoldier_w",
				"BAF_soldier_Medic_w",
				"BAF_pilot_w",
				"BAF_crewman_w",
				"BAF_ATV_w",
				"BAF_Jackal2_L2A1_D",
				"BAF_soldier_GL_w",
				"BAF_soldier_Marksman_w",
				"BAF_Offroad_w",
				"BAF_soldier_L_w",
				"BAF_soldier_EN_w",
				"BAF_Soldier_N_MTP",
				"BAF_soldier_spotter_w",
				"BAF_Soldier_FAC_w",
				"BAF_Soldier_spotterN_W",
				"BAF_soldier_TL_MTP",
				"BAF_L2A1_ACOG_tripod_w",
				"BAF_L2A1_ACOG_minitripod_w",
				"BAF_Jackal2_GMG_D",
				"BAF_GPMG_Minitripod_D",
				"BAF_GMG_ACOG_minitripod",
				"BAF_soldier_AA_w",
				"SUV_PMC_BAF",
				"BAF_LRR_scoped_W",
				"BAF_soldier_Sniper_w",
				"BAF_soldier_AHAA_w",
				"BAF_soldier_AR_w",
				"BAF_Soldier_scout_W",
				"BAF_soldier_MG_w",
				"BAF_soldier_AAR_w",
				"BAF_soldier_AMG_w",
				"BAF_soldier_SL_w",
				"BAF_Soldier_TL_W",
				"BAF_soldier_AT_w",
				"BAF_soldier_HAT_w",
				"BAF_soldier_AAT_w",
				"BAF_soldier_AHAT_w",
				"BAF_Soldier_AAA_W",
				"BAF_soldier_SniperH_w",
				"BAF_soldier_Officer_w",
				"BAF_soldier_SniperN_w",
				"BAF_Jackal2_L2A1_w",
				"BAF_Jackal2_GMG_w",
				"AW159_Lynx_BAF",
				"BAF_Apache_AH1_D",
				"BAF_FV510_D",
				"CH_47F_BAF",
				"BAF_FV510_W",
				"BAF_ied_v1",
				"BAF_ied_v2",
				"BAF_ied_v3",
				"BAF_ied_v4"
			};
			points[]={0,0,0,0,0,0,0,0,25,25,25,25,25,50,50,75,75,100,100,100,125,125,125,125,125,150,150,150,150,175,175,200,200,200,225,225,250,250,275,275,300,350,350,400,400,400,400,400,400,500,600,600,600,600,600,700,750,1000,1000,1000,1100,1100,1200,1200,1250,1300,1300,1350,1400,1400,1450,1450,1500,1600,1600,1700,1700,1700,1700,1750,1750,1750,1750,1800,1800,1900,1900,1900,2000,2000,2000,2000,2000,2000,2000,2000,2000,2000,2000,2050,2100,2100,2150,2150,2200,2250,2250,2300,2300,2400,2400,2500,2600,2600,2700,3000,3000,3000,3000,3200,3300,3300,3400,3400,3500,3700,3700,3750,3750,3900,3900,4000,4000,4000,4500,5000,5000,5000,6000,7000,10000,10000,10000,10000};
		};
	};
};
class CfgAddons
{
	class PreloadBanks
	{
	};
	class PreloadAddons
	{
		class CA_BAF
		{
			list[]=
			{
				"CAAir_BAF",
				"CAAir_BAF_CH_47F",
				"CA_Dubbing_Baf",
				"CACharacters_BAF",
				"CACharacters_W_BAF",
				"CALanguage_Baf",
				"CALanguageMissions_baf",
				"CA_Missions_BAF",
				"CA_Sounds_Baf",
				"CATracked_BAF",
				"CATracked_W_BAF",
				"CAWeapons_BAF",
				"CAWheeled_D_BAF",
				"CAWheeled_W_BAF",
				"CA_Missions_BAF_Templates_SecOps",
				"CA_BAF",
				"Shapur_BAF",
				"CACharacters_BAF_Head"
			};
		};
	};
};
class CfgVehicleClasses
{
	class ArmouredD
	{
		displayName="$STR_BAF_CFGVEHICLECLASSES_ARMOUREDD0";
	};
	class ArmouredW
	{
		displayName="$STR_BAF_CFGVEHICLECLASSES_ARMOUREDW0";
	};
	class CarD
	{
		displayName="$STR_BAF_CFGVEHICLECLASSES_CARD0";
	};
	class CarW
	{
		displayName="$STR_BAF_CFGVEHICLECLASSES_CARW0";
	};
	class MenDDPM
	{
		displayName="$STR_BAF_CFGVEHICLECLASSES_MENDDPM0";
	};
	class Menw
	{
		displayName="$STR_BAF_CFGVEHICLECLASSES_MENW0";
	};
	class StaticW
	{
		displayName="$STR_BAF_CFGVEHICLECLASSES_STATICW0";
	};
};
class CfgFactionClasses
{
	class BIS_BAF
	{
		displayName="$STR_BAF";
		priority=9;
		side=1;
	};
	class PMC_BAF
	{
		displayName="$STR_PMC";
		priority=9;
		side=2;
	};
};
class CfgWorlds
{
	class GenericNames
	{
		access=0;
		class BritishMen
		{
			class FirstNames
			{
				jack="Jack";
				jack1="Jack";
				jack2="Jack";
				jack3="Jack";
				thomas="Thomas";
				thomas1="Thomas";
				thomas2="Thomas";
				thomas3="Thomas";
				joshua="Joshua";
				oliver="Oliver";
				harry="Harry";
				james="James";
				james1="James";
				james2="James";
				william="William";
				william1="William";
				william2="William";
				samuel="Samuel";
				daniel="Daniel";
				daniel1="Daniel";
				charlie="Charlie";
				benjamin="Benjamin";
				joseph="Joseph";
				callum="Callum";
				george="George";
				george1="George";
				jake="Jake";
				luke="Luke";
				luke1="Luke";
				matthew="Matthew";
				matthew1="Matthew";
				ethan="Ethan";
				lewis="Lewis";
				jacob="Jacob";
				dylan="Dylan";
				alexander="Alexander";
				ryan="Ryan";
				tyler="Tyler";
				harvey="Harvey";
				max="Max";
				max1="Max";
				cameron="Cameron";
				liam="Liam";
				jamie="Jamie";
				owen="Owen";
				connor="Connor";
				harrison="Harrison";
				nathan="Nathan";
				ben="Ben";
				henry="Henry";
				archie="Archie";
				edward="Edward";
				kyle="Kyle";
				noah="Noah";
				oscar="Oscar";
				lucas="Lucas";
				rhys="Rhys";
				bradley="Bradley";
				charles="Charles";
				toby="Toby";
				conor="Conor";
				sean="Sean";
				sean1="Sean";
				adam="Adam";
				michael="Michael";
				david="David";
				aaron="Aaron";
				donnan="Donnan";
				douglas="Douglas";
				ewan="Ewan";
				ewan1="Ewan";
				finlay="Finlay";
				gillian="Gillian";
				gillis="Gillis";
				greer="Greer";
				ian="Ian";
				montgomery="Montgomery";
				tavish="Tavish";
				wallace="Wallace";
			};
			class LastNames
			{
				jones="Jones";
				williams="Williams";
				taylor="Taylor";
				davies="Davies";
				evans="Evans";
				thomas="Thomas";
				johnson="Johnson";
				roberts="Roberts";
				robinson="Robinson";
				thompson="Thompson";
				wright="Wright";
				walker="Walker";
				white="White";
				edwards="Edwards";
				hughes="Hughes";
				green="Green";
				hall="Hall";
				lewis="Lewis";
				harris="Harris";
				clarke="Clarke";
				patel="Patel";
				jackson="Jackson";
				wood="Wood";
				turner="Turner";
				martin="Martin";
				cooper="Cooper";
				hill="Hill";
				morris="Morris";
				ward="Ward";
				moore="Moore";
				clark="Clark";
				baker="Baker";
				harrison="Harrison";
				king="King";
				morgan="Morgan";
				lee="Lee";
				allen="Allen";
				james="James";
				phillips="Phillips";
				watson="Watson";
				davis="Davis";
				parker="Parker";
				bennett="Bennett";
				price="Price";
				griffiths="Griffiths";
				young="Young";
				smith="Smith";
				brown="Brown";
				wilson="Wilson";
				thomson="Thomson";
				robertson="Robertson";
				campbell="Campbell";
				stewart="Stewart";
				anderson="Anderson";
				macdonald="MacDonald";
				scott="Scott";
				murphy="Murphy";
				kelly="Kelly";
				osullivan="O'Sullivan";
				walsh="Walsh";
				obrien="O'Brien";
				byrne="Byrne";
				ryan="Ryan";
				oconnor="O'Connor";
			};
		};
	};
};
class CfgMarkers
{
	class Faction_USA_EP1;
	class Faction_BritishArmedForces_BAF: Faction_USA_EP1
	{
		expansion=2;
		name="$STR_BAF_CFGMARKERS_FLAGBAF0";
		icon="ca\data_baf\flag_unionjack_co";
	};
};
class CfgVehicles
{
	class FlagCarrier;
	class FlagCarrierBAF: FlagCarrier
	{
		scope=2;
		accuracy=1000;
		displayName="$STR_BAF_CFGVEHICLES_FLAGCARRIERBAF0";
		expansion=2;
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture ""ca\data_baf\flag_unionjack_co""";
		};
	};
};
class CfgMusic
{
	class BAF_Track01
	{
		expansion=2;
		name="$STR_BAF_TRACK01_CRIMSON_LANCE";
		sound[]=
		{
			"\Ca\Data_baf\Music\BAF_Track01_Crimson_Lance.ogg",
			1,
			1
		};
		duration=140;
	};
	class BAF_Track02
	{
		expansion=2;
		name="$STR_BAF_TRACK02_DRUMS";
		sound[]=
		{
			"\Ca\Data_baf\Music\BAF_Track02_Drums.ogg",
			1,
			1
		};
		duration=43;
	};
	class BAF_Track03
	{
		expansion=2;
		name="$STR_BAF_TRACK03_JACKALS";
		sound[]=
		{
			"\Ca\Data_baf\Music\BAF_Track03_Jackals.ogg",
			1,
			1
		};
		duration=54;
	};
	class BAF_Track04
	{
		expansion=2;
		name="$STR_BAF_TRACK04_THROUGH_THE_VALLEY";
		sound[]=
		{
			"\Ca\Data_baf\Music\BAF_Track04_Through_The_Valley.ogg",
			1,
			1
		};
		duration=44;
	};
	class BAF_Track05
	{
		expansion=2;
		name="$STR_BAF_TRACK05_UTRINQUE_PARATUS";
		sound[]=
		{
			"\Ca\Data_baf\Music\BAF_Track05_Utrinque_Paratus.ogg",
			1,
			1
		};
		duration=44;
	};
	class BAF_Track06
	{
		expansion=2;
		name="$STR_BAF_TRACK06_WAR_PIPES";
		sound[]=
		{
			"\Ca\Data_baf\Music\BAF_Track06_War_Pipes.ogg",
			1,
			1
		};
		duration=65;
	};
};
class CfgSounds
{
	class mortar1
	{
		expansion=2;
		name="Mortar 1";
		sound[]=
		{
			"\ca\data_baf\Music\mortar1.ogg",
			0.56234133,
			1
		};
		titles[]={};
	};
	class missile_impact
	{
		expansion=2;
		name="misile impact";
		sound[]=
		{
			"Ca\sounds\Weapons\explosions\explosion_large1",
			100000,
			1,
			1800
		};
		titles[]={};
	};
	class missile_inbound
	{
		expansion=2;
		name="missile inbound";
		sound[]=
		{
			"Ca\sounds_baf\air\int-alarm_loop",
			3.1622777,
			4
		};
		titles[]={};
	};
	class chopper_crash
	{
		expansion=2;
		name="Chopper Crash";
		sound[]=
		{
			"\ca\data_baf\Music\crash.ogg",
			100,
			1
		};
		titles[]={};
	};
};
