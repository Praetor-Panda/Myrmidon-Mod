class MFD
{
	class MYR_HRZ_LEFT
	{
		topLeft="MFD_L_TL";
		topRight="MFD_L_TR";
		bottomLeft="MFD_L_ML";
		borderLeft=0;
		borderRight=0;
		borderTop=0;
		borderBottom=0;
		color[]={0.05,0.05,0.05,1};
		enableParallax=0;
		class material
		{
			ambient[]={10,10,10,1};
			diffuse[]={10,10,10,1};
			emissive[]={500,500,500,1};
		};
		class Bones
		{
			class Center
			{
				type="fixed";
				pos[]={0.5,0.5};
			};
			class HorizonBankRot
			{
				type="rotational";
				source="horizonBank";
				center[]={0.5,0.5};
				min="-rad(30)";
				max="rad(30)";
				minAngle="+30";
				maxAngle="-30";
				aspectRatio=1;
			};
			class HorizonBankRot0
			{
				type="rotational";
				source="horizonBank";
				center[]={0.5,0.5};
				min=0;
				max=0;
				minAngle=0;
				maxAngle=0;
				aspectRatio=1;
			};
			class HorizonBankRot5_minus: HorizonBankRot0
			{
				minAngle="-5";
				maxAngle="-5";
			};
			class HorizonBankRot5_plus: HorizonBankRot0
			{
				minAngle="5";
				maxAngle="5";
			};
			class HorizonBankRot10_minus: HorizonBankRot0
			{
				minAngle="-10";
				maxAngle="-10";
			};
			class HorizonBankRot10_plus: HorizonBankRot0
			{
				minAngle="10";
				maxAngle="10";
			};
			class HorizonBankRot15_minus: HorizonBankRot0
			{
				minAngle="-15";
				maxAngle="-15";
			};
			class HorizonBankRot15_plus: HorizonBankRot0
			{
				minAngle="15";
				maxAngle="15";
			};
			class HorizonBankRot20_minus: HorizonBankRot0
			{
				minAngle="-20";
				maxAngle="-20";
			};
			class HorizonBankRot20_plus: HorizonBankRot0
			{
				minAngle="20";
				maxAngle="20";
			};
			class HorizonBankRot25_minus: HorizonBankRot0
			{
				minAngle="-25";
				maxAngle="-25";
			};
			class HorizonBankRot25_plus: HorizonBankRot0
			{
				minAngle="25";
				maxAngle="25";
			};
			class HorizonBankRot30_minus: HorizonBankRot0
			{
				minAngle="-30";
				maxAngle="-30";
			};
			class HorizonBankRot30_plus: HorizonBankRot0
			{
				minAngle="30";
				maxAngle="30";
			};
			class Level0
			{
				pos0[]={0.5,0.5};
				pos10[]={0.94,0.94};
				type="horizon";
				angle=0;
			};
			class LevelP5: Level0
			{
				angle=5;
			};
			class LevelM5: Level0
			{
				angle=-5;
			};
			class LevelP10: Level0
			{
				angle=10;
			};
			class LevelM10: Level0
			{
				angle=-10;
			};
			class LevelP15: Level0
			{
				angle=15;
			};
			class LevelM15: Level0
			{
				angle=-15;
			};
			class LevelP20: Level0
			{
				angle=20;
			};
			class LevelM20: Level0
			{
				angle=-20;
			};
			class LevelP25: Level0
			{
				angle=25;
			};
			class LevelM25: Level0
			{
				angle=-25;
			};
			class LevelP30: Level0
			{
				angle=30;
			};
			class LevelM30: Level0
			{
				angle=-30;
			};
			class LevelP35: Level0
			{
				angle=35;
			};
			class LevelM35: Level0
			{
				angle=-35;
			};
			class LevelP40: Level0
			{
				angle=40;
			};
			class LevelM40: Level0
			{
				angle=-40;
			};
			class LevelP45: Level0
			{
				angle=45;
			};
			class LevelM45: Level0
			{
				angle=-45;
			};
			class LevelP50: Level0
			{
				angle=50;
			};
			class LevelM50: Level0
			{
				angle=-50;
			};
			class LevelP60: Level0
			{
				angle=60;
			};
			class LevelM60: Level0
			{
				angle=-60;
			};
			class LevelP70: Level0
			{
				angle=70;
			};
			class LevelM70: Level0
			{
				angle=-70;
			};
			class LevelP80: Level0
			{
				angle=80;
			};
			class LevelM80: Level0
			{
				angle=-80;
			};
			class LevelP90: Level0
			{
				angle=90;
			};
			class LevelM90: Level0
			{
				angle=-90;
			};
		};
		class Draw
		{
			condition="on";
			class BASE_Polygon
			{
				color[]={0,0,0,1};
				class BASE
				{					
					type="polygon";
					points[]=
					{
						{
							{ 
								{0,0},
								1
							},
							{ 
								{1,0},
								1
							},
							{ 
								{1,1},
								1
							},
							{ 	
								{0,1},
								1
							}
						}
					};
				};
			};
			class Brown_Horizon
			{
				color[]={0.006,0.004,0.001,1};
				class Brown
				{					
					type="polygon";
					points[]=
					{
						{
							{ 
								{0,0},
								1
							},
							{ 
								{1,0},
								1
							},
							{ 
								{1,1},
								1
							},
							{ 	
								{0,1},
								1
							}
						}
					};
				};
			};
			class Blue_Horizon
			{
				color[]={0.009,0.025,0.06,1};
				class Blue
				{					
					type="polygon";
					points[]=
					{
						{
							{ 
								"Level0",
								{-50,0},
								1
							},
							{ 	
								"Level0",
								{50,0},
								1
							},
							{ 
								"Level0",
								{-50,-50},
								1
							},
							{ 
								"Level0",
								{50,-50},
								1
							},
						}
					};
				};
			};
			class Line_Horizon
			{
				type="line";
				width=14;
				points[]=
				{
					{
						"Level0",
						{-1,0},
						1
					},
					{
						"Level0",
						{1,0},
						1
					}
				};
			};
			class Horizon
			{
				class Dimmed
				{
					class Level0
					{
						type="line";
						width=3;
						points[]=
						{
							{
								"Level0",
								{0.75,0},
								1
							},
							{
								"Level0",
								{0.1,0},
								1
							},
							{
								"Level0",
								{-0.1,0},
								1
							},
							{
								"Level0",
								{-0.75,0},
								1
							}
						};
					};
					class LevelM5: Level0
					{
						type="line";
						points[]=
						{
							{
								"LevelM5",
								{-0.235,-0.02},
								1
							},
							{
								"LevelM5",
								{-0.235,0},
								1
							},
							{},
							{
								"LevelM5",
								{-0.22,0},
								1
							},
							{
								"LevelM5",
								{-0.205,0},
								1
							},
							{},
							{
								"LevelM5",
								{-0.19,0},
								1
							},
							{
								"LevelM5",
								{-0.175,0},
								1
							},
							{},
							{
								"LevelM5",
								{-0.16,0},
								1
							},
							{
								"LevelM5",
								{-0.145,0},
								1
							},
							{},
							{
								"LevelM5",
								{-0.13,0},
								1
							},
							{
								"LevelM5",
								{-0.115,0},
								1
							},
							{},
							{
								"LevelM5",
								{-0.1,0},
								1
							},
							{
								"LevelM5",
								{-0.085000001,0},
								1
							},
							{},
							{
								"LevelM5",
								{-0.07,0},
								1
							},
							{
								"LevelM5",
								{-0.055,0},
								1
							},
							{},
							{},
							{
								"LevelM5",
								{0.235,-0.02},
								1
							},
							{
								"LevelM5",
								{0.235,0},
								1
							},
							{},
							{
								"LevelM5",
								{0.22,0},
								1
							},
							{
								"LevelM5",
								{0.205,0},
								1
							},
							{},
							{
								"LevelM5",
								{0.19,0},
								1
							},
							{
								"LevelM5",
								{0.175,0},
								1
							},
							{},
							{
								"LevelM5",
								{0.16,0},
								1
							},
							{
								"LevelM5",
								{0.145,0},
								1
							},
							{},
							{
								"LevelM5",
								{0.13,0},
								1
							},
							{
								"LevelM5",
								{0.115,0},
								1
							},
							{},
							{
								"LevelM5",
								{0.1,0},
								1
							},
							{
								"LevelM5",
								{0.085000001,0},
								1
							},
							{},
							{
								"LevelM5",
								{0.07,0},
								1
							},
							{
								"LevelM5",
								{0.055,0},
								1
							},
							{}
						};
					};
					class VALM_1_5
					{
						type="text";
						source="static";
						text=-5;
						align="left";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelM5",
							{-0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM5",
							{-0.2,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM5",
							{-0.25999999,0.017999999},
							1
						};
					};
					class VALM_1_5_R
					{
						type="text";
						source="static";
						text=-5;
						align="right";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelM5",
							{0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM5",
							{0.31999999,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM5",
							{0.25999999,0.017999999},
							1
						};
					};
					class LevelP5: Level0
					{
						type="line";
						points[]=
						{
							{
								"LevelP5",
								{"-0.22-0.015",0.02},
								1
							},
							{
								"LevelP5",
								{"-0.22-0.015",0},
								1
							},
							{
								"LevelP5",
								{-0.059999999,0},
								1
							},
							{},
							{
								"LevelP5",
								{0.059999999,0},
								1
							},
							{
								"LevelP5",
								{"+0.22+0.015",0},
								1
							},
							{
								"LevelP5",
								{"+0.22+0.015",0.02},
								1
							}
						};
					};
					class VALP_1_5
					{
						type="text";
						source="static";
						text="5";
						align="left";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelP5",
							{-0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP5",
							{-0.2,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP5",
							{-0.25999999,0.033},
							1
						};
					};
					class VALP_1_5_R
					{
						type="text";
						source="static";
						text="5";
						align="right";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelP5",
							{0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP5",
							{0.31999999,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP5",
							{0.25999999,0.033},
							1
						};
					};
					class LevelM10: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelM10",
								{-0.235,-0.02},
								1
							},
							
							{
								"LevelM10",
								{-0.235,0},
								1
							},
							{},
							
							{
								"LevelM10",
								{-0.22,0},
								1
							},
							
							{
								"LevelM10",
								{-0.205,0},
								1
							},
							{},
							
							{
								"LevelM10",
								{-0.19,0},
								1
							},
							
							{
								"LevelM10",
								{-0.175,0},
								1
							},
							{},
							
							{
								"LevelM10",
								{-0.16,0},
								1
							},
							
							{
								"LevelM10",
								{-0.145,0},
								1
							},
							{},
							
							{
								"LevelM10",
								{-0.13,0},
								1
							},
							
							{
								"LevelM10",
								{-0.115,0},
								1
							},
							{},
							
							{
								"LevelM10",
								{-0.1,0},
								1
							},
							
							{
								"LevelM10",
								{-0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM10",
								{-0.07,0},
								1
							},
							
							{
								"LevelM10",
								{-0.055,0},
								1
							},
							{},
							{},
							
							{
								"LevelM10",
								{0.235,-0.02},
								1
							},
							
							{
								"LevelM10",
								{0.235,0},
								1
							},
							{},
							
							{
								"LevelM10",
								{0.22,0},
								1
							},
							
							{
								"LevelM10",
								{0.205,0},
								1
							},
							{},
							
							{
								"LevelM10",
								{0.19,0},
								1
							},
							
							{
								"LevelM10",
								{0.175,0},
								1
							},
							{},
							
							{
								"LevelM10",
								{0.16,0},
								1
							},
							
							{
								"LevelM10",
								{0.145,0},
								1
							},
							{},
							
							{
								"LevelM10",
								{0.13,0},
								1
							},
							
							{
								"LevelM10",
								{0.115,0},
								1
							},
							{},
							
							{
								"LevelM10",
								{0.1,0},
								1
							},
							
							{
								"LevelM10",
								{0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM10",
								{0.07,0},
								1
							},
							
							{
								"LevelM10",
								{0.055,0},
								1
							},
							{}
						};
					};
					class VALM_1_10
					{
						type="text";
						source="static";
						text=-10;
						align="left";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelM10",
							{-0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM10",
							{-0.2,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM10",
							{-0.25999999,0.017999999},
							1
						};
					};
					class VALM_1_10_R
					{
						type="text";
						source="static";
						text=-10;
						align="right";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelM10",
							{0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM10",
							{0.31999999,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM10",
							{0.25999999,0.017999999},
							1
						};
					};
					class LevelP10: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelP10",
								
								{
									"-0.22-0.015",
									0.02
								},
								1
							},
							
							{
								"LevelP10",
								
								{
									"-0.22-0.015",
									0
								},
								1
							},
							
							{
								"LevelP10",
								{-0.059999999,0},
								1
							},
							{},
							
							{
								"LevelP10",
								{0.059999999,0},
								1
							},
							
							{
								"LevelP10",
								
								{
									"+0.22+0.015",
									0
								},
								1
							},
							
							{
								"LevelP10",
								
								{
									"+0.22+0.015",
									0.02
								},
								1
							}
						};
					};
					class VALP_1_10
					{
						type="text";
						source="static";
						text="10";
						align="left";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelP10",
							{-0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP10",
							{-0.2,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP10",
							{-0.25999999,0.033},
							1
						};
					};
					class VALP_1_10_R
					{
						type="text";
						source="static";
						text="10";
						align="right";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelP10",
							{0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP10",
							{0.31999999,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP10",
							{0.25999999,0.033},
							1
						};
					};
					class LevelM15: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelM15",
								{-0.235,-0.02},
								1
							},
							
							{
								"LevelM15",
								{-0.235,0},
								1
							},
							{},
							
							{
								"LevelM15",
								{-0.22,0},
								1
							},
							
							{
								"LevelM15",
								{-0.205,0},
								1
							},
							{},
							
							{
								"LevelM15",
								{-0.19,0},
								1
							},
							
							{
								"LevelM15",
								{-0.175,0},
								1
							},
							{},
							
							{
								"LevelM15",
								{-0.16,0},
								1
							},
							
							{
								"LevelM15",
								{-0.145,0},
								1
							},
							{},
							
							{
								"LevelM15",
								{-0.13,0},
								1
							},
							
							{
								"LevelM15",
								{-0.115,0},
								1
							},
							{},
							
							{
								"LevelM15",
								{-0.1,0},
								1
							},
							
							{
								"LevelM15",
								{-0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM15",
								{-0.07,0},
								1
							},
							
							{
								"LevelM15",
								{-0.055,0},
								1
							},
							{},
							{},
							
							{
								"LevelM15",
								{0.235,-0.02},
								1
							},
							
							{
								"LevelM15",
								{0.235,0},
								1
							},
							{},
							
							{
								"LevelM15",
								{0.22,0},
								1
							},
							
							{
								"LevelM15",
								{0.205,0},
								1
							},
							{},
							
							{
								"LevelM15",
								{0.19,0},
								1
							},
							
							{
								"LevelM15",
								{0.175,0},
								1
							},
							{},
							
							{
								"LevelM15",
								{0.16,0},
								1
							},
							
							{
								"LevelM15",
								{0.145,0},
								1
							},
							{},
							
							{
								"LevelM15",
								{0.13,0},
								1
							},
							
							{
								"LevelM15",
								{0.115,0},
								1
							},
							{},
							
							{
								"LevelM15",
								{0.1,0},
								1
							},
							
							{
								"LevelM15",
								{0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM15",
								{0.07,0},
								1
							},
							
							{
								"LevelM15",
								{0.055,0},
								1
							},
							{}
						};
					};
					class VALM_1_15
					{
						type="text";
						source="static";
						text=-15;
						align="left";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelM15",
							{-0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM15",
							{-0.2,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM15",
							{-0.25999999,0.017999999},
							1
						};
					};
					class VALM_1_15_R
					{
						type="text";
						source="static";
						text=-15;
						align="right";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelM15",
							{0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM15",
							{0.31999999,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM15",
							{0.25999999,0.017999999},
							1
						};
					};
					class LevelP15: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelP15",
								
								{
									"-0.22-0.015",
									0.02
								},
								1
							},
							
							{
								"LevelP15",
								
								{
									"-0.22-0.015",
									0
								},
								1
							},
							
							{
								"LevelP15",
								{-0.059999999,0},
								1
							},
							{},
							
							{
								"LevelP15",
								{0.059999999,0},
								1
							},
							
							{
								"LevelP15",
								
								{
									"+0.22+0.015",
									0
								},
								1
							},
							
							{
								"LevelP15",
								
								{
									"+0.22+0.015",
									0.02
								},
								1
							}
						};
					};
					class VALP_1_15
					{
						type="text";
						source="static";
						text="15";
						align="left";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelP15",
							{-0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP15",
							{-0.2,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP15",
							{-0.25999999,0.033},
							1
						};
					};
					class VALP_1_15_R
					{
						type="text";
						source="static";
						text="15";
						align="right";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelP15",
							{0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP15",
							{0.31999999,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP15",
							{0.25999999,0.033},
							1
						};
					};
					class LevelM20: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelM20",
								{-0.235,-0.02},
								1
							},
							
							{
								"LevelM20",
								{-0.235,0},
								1
							},
							{},
							
							{
								"LevelM20",
								{-0.22,0},
								1
							},
							
							{
								"LevelM20",
								{-0.205,0},
								1
							},
							{},
							
							{
								"LevelM20",
								{-0.19,0},
								1
							},
							
							{
								"LevelM20",
								{-0.175,0},
								1
							},
							{},
							
							{
								"LevelM20",
								{-0.16,0},
								1
							},
							
							{
								"LevelM20",
								{-0.145,0},
								1
							},
							{},
							
							{
								"LevelM20",
								{-0.13,0},
								1
							},
							
							{
								"LevelM20",
								{-0.115,0},
								1
							},
							{},
							
							{
								"LevelM20",
								{-0.1,0},
								1
							},
							
							{
								"LevelM20",
								{-0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM20",
								{-0.07,0},
								1
							},
							
							{
								"LevelM20",
								{-0.055,0},
								1
							},
							{},
							{},
							
							{
								"LevelM20",
								{0.235,-0.02},
								1
							},
							
							{
								"LevelM20",
								{0.235,0},
								1
							},
							{},
							
							{
								"LevelM20",
								{0.22,0},
								1
							},
							
							{
								"LevelM20",
								{0.205,0},
								1
							},
							{},
							
							{
								"LevelM20",
								{0.19,0},
								1
							},
							
							{
								"LevelM20",
								{0.175,0},
								1
							},
							{},
							
							{
								"LevelM20",
								{0.16,0},
								1
							},
							
							{
								"LevelM20",
								{0.145,0},
								1
							},
							{},
							
							{
								"LevelM20",
								{0.13,0},
								1
							},
							
							{
								"LevelM20",
								{0.115,0},
								1
							},
							{},
							
							{
								"LevelM20",
								{0.1,0},
								1
							},
							
							{
								"LevelM20",
								{0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM20",
								{0.07,0},
								1
							},
							
							{
								"LevelM20",
								{0.055,0},
								1
							},
							{}
						};
					};
					class VALM_1_20
					{
						type="text";
						source="static";
						text=-20;
						align="left";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelM20",
							{-0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM20",
							{-0.2,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM20",
							{-0.25999999,0.017999999},
							1
						};
					};
					class VALM_1_20_R
					{
						type="text";
						source="static";
						text=-20;
						align="right";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelM20",
							{0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM20",
							{0.31999999,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM20",
							{0.25999999,0.017999999},
							1
						};
					};
					class LevelP20: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelP20",
								
								{
									"-0.22-0.015",
									0.02
								},
								1
							},
							
							{
								"LevelP20",
								
								{
									"-0.22-0.015",
									0
								},
								1
							},
							
							{
								"LevelP20",
								{-0.059999999,0},
								1
							},
							{},
							
							{
								"LevelP20",
								{0.059999999,0},
								1
							},
							
							{
								"LevelP20",
								
								{
									"+0.22+0.015",
									0
								},
								1
							},
							
							{
								"LevelP20",
								
								{
									"+0.22+0.015",
									0.02
								},
								1
							}
						};
					};
					class VALP_1_20
					{
						type="text";
						source="static";
						text="20";
						align="left";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelP20",
							{-0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP20",
							{-0.2,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP20",
							{-0.25999999,0.033},
							1
						};
					};
					class VALP_1_20_R
					{
						type="text";
						source="static";
						text="20";
						align="right";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelP20",
							{0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP20",
							{0.31999999,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP20",
							{0.25999999,0.033},
							1
						};
					};
					class LevelM25: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelM25",
								{-0.235,-0.02},
								1
							},
							
							{
								"LevelM25",
								{-0.235,0},
								1
							},
							{},
							
							{
								"LevelM25",
								{-0.22,0},
								1
							},
							
							{
								"LevelM25",
								{-0.205,0},
								1
							},
							{},
							
							{
								"LevelM25",
								{-0.19,0},
								1
							},
							
							{
								"LevelM25",
								{-0.175,0},
								1
							},
							{},
							
							{
								"LevelM25",
								{-0.16,0},
								1
							},
							
							{
								"LevelM25",
								{-0.145,0},
								1
							},
							{},
							
							{
								"LevelM25",
								{-0.13,0},
								1
							},
							
							{
								"LevelM25",
								{-0.115,0},
								1
							},
							{},
							
							{
								"LevelM25",
								{-0.1,0},
								1
							},
							
							{
								"LevelM25",
								{-0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM25",
								{-0.07,0},
								1
							},
							
							{
								"LevelM25",
								{-0.055,0},
								1
							},
							{},
							{},
							
							{
								"LevelM25",
								{0.235,-0.02},
								1
							},
							
							{
								"LevelM25",
								{0.235,0},
								1
							},
							{},
							
							{
								"LevelM25",
								{0.22,0},
								1
							},
							
							{
								"LevelM25",
								{0.205,0},
								1
							},
							{},
							
							{
								"LevelM25",
								{0.19,0},
								1
							},
							
							{
								"LevelM25",
								{0.175,0},
								1
							},
							{},
							
							{
								"LevelM25",
								{0.16,0},
								1
							},
							
							{
								"LevelM25",
								{0.145,0},
								1
							},
							{},
							
							{
								"LevelM25",
								{0.13,0},
								1
							},
							
							{
								"LevelM25",
								{0.115,0},
								1
							},
							{},
							
							{
								"LevelM25",
								{0.1,0},
								1
							},
							
							{
								"LevelM25",
								{0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM25",
								{0.07,0},
								1
							},
							
							{
								"LevelM25",
								{0.055,0},
								1
							},
							{}
						};
					};
					class VALM_1_25
					{
						type="text";
						source="static";
						text=-25;
						align="left";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelM25",
							{-0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM25",
							{-0.2,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM25",
							{-0.25999999,0.017999999},
							1
						};
					};
					class VALM_1_25_R
					{
						type="text";
						source="static";
						text=-25;
						align="right";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelM25",
							{0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM25",
							{0.31999999,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM25",
							{0.25999999,0.017999999},
							1
						};
					};
					class LevelP25: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelP25",
								
								{
									"-0.22-0.015",
									0.02
								},
								1
							},
							
							{
								"LevelP25",
								
								{
									"-0.22-0.015",
									0
								},
								1
							},
							
							{
								"LevelP25",
								{-0.059999999,0},
								1
							},
							{},
							
							{
								"LevelP25",
								{0.059999999,0},
								1
							},
							
							{
								"LevelP25",
								
								{
									"+0.22+0.015",
									0
								},
								1
							},
							
							{
								"LevelP25",
								
								{
									"+0.22+0.015",
									0.02
								},
								1
							}
						};
					};
					class VALP_1_25
					{
						type="text";
						source="static";
						text="25";
						align="left";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelP25",
							{-0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP25",
							{-0.2,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP25",
							{-0.25999999,0.033},
							1
						};
					};
					class VALP_1_25_R
					{
						type="text";
						source="static";
						text="25";
						align="right";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelP25",
							{0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP25",
							{0.31999999,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP25",
							{0.25999999,0.033},
							1
						};
					};
					class LevelM30: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelM30",
								{-0.235,-0.02},
								1
							},
							
							{
								"LevelM30",
								{-0.235,0},
								1
							},
							{},
							
							{
								"LevelM30",
								{-0.22,0},
								1
							},
							
							{
								"LevelM30",
								{-0.205,0},
								1
							},
							{},
							
							{
								"LevelM30",
								{-0.19,0},
								1
							},
							
							{
								"LevelM30",
								{-0.175,0},
								1
							},
							{},
							
							{
								"LevelM30",
								{-0.16,0},
								1
							},
							
							{
								"LevelM30",
								{-0.145,0},
								1
							},
							{},
							
							{
								"LevelM30",
								{-0.13,0},
								1
							},
							
							{
								"LevelM30",
								{-0.115,0},
								1
							},
							{},
							
							{
								"LevelM30",
								{-0.1,0},
								1
							},
							
							{
								"LevelM30",
								{-0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM30",
								{-0.07,0},
								1
							},
							
							{
								"LevelM30",
								{-0.055,0},
								1
							},
							{},
							{},
							
							{
								"LevelM30",
								{0.235,-0.02},
								1
							},
							
							{
								"LevelM30",
								{0.235,0},
								1
							},
							{},
							
							{
								"LevelM30",
								{0.22,0},
								1
							},
							
							{
								"LevelM30",
								{0.205,0},
								1
							},
							{},
							
							{
								"LevelM30",
								{0.19,0},
								1
							},
							
							{
								"LevelM30",
								{0.175,0},
								1
							},
							{},
							
							{
								"LevelM30",
								{0.16,0},
								1
							},
							
							{
								"LevelM30",
								{0.145,0},
								1
							},
							{},
							
							{
								"LevelM30",
								{0.13,0},
								1
							},
							
							{
								"LevelM30",
								{0.115,0},
								1
							},
							{},
							
							{
								"LevelM30",
								{0.1,0},
								1
							},
							
							{
								"LevelM30",
								{0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM30",
								{0.07,0},
								1
							},
							
							{
								"LevelM30",
								{0.055,0},
								1
							},
							{}
						};
					};
					class VALM_1_30
					{
						type="text";
						source="static";
						text=-30;
						align="left";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelM30",
							{-0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM30",
							{-0.2,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM30",
							{-0.25999999,0.017999999},
							1
						};
					};
					class VALM_1_30_R
					{
						type="text";
						source="static";
						text=-30;
						align="right";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelM30",
							{0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM30",
							{0.31999999,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM30",
							{0.25999999,0.017999999},
							1
						};
					};
					class LevelP30: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelP30",
								
								{
									"-0.22-0.015",
									0.02
								},
								1
							},
							
							{
								"LevelP30",
								
								{
									"-0.22-0.015",
									0
								},
								1
							},
							
							{
								"LevelP30",
								{-0.059999999,0},
								1
							},
							{},
							
							{
								"LevelP30",
								{0.059999999,0},
								1
							},
							
							{
								"LevelP30",
								
								{
									"+0.22+0.015",
									0
								},
								1
							},
							
							{
								"LevelP30",
								
								{
									"+0.22+0.015",
									0.02
								},
								1
							}
						};
					};
					class VALP_1_30
					{
						type="text";
						source="static";
						text="30";
						align="left";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelP30",
							{-0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP30",
							{-0.2,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP30",
							{-0.25999999,0.033},
							1
						};
					};
					class VALP_1_30_R
					{
						type="text";
						source="static";
						text="30";
						align="right";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelP30",
							{0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP30",
							{0.31999999,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP30",
							{0.25999999,0.033},
							1
						};
					};
					class LevelM35: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelM35",
								{-0.235,-0.02},
								1
							},
							
							{
								"LevelM35",
								{-0.235,0},
								1
							},
							{},
							
							{
								"LevelM35",
								{-0.22,0},
								1
							},
							
							{
								"LevelM35",
								{-0.205,0},
								1
							},
							{},
							
							{
								"LevelM35",
								{-0.19,0},
								1
							},
							
							{
								"LevelM35",
								{-0.175,0},
								1
							},
							{},
							
							{
								"LevelM35",
								{-0.16,0},
								1
							},
							
							{
								"LevelM35",
								{-0.145,0},
								1
							},
							{},
							
							{
								"LevelM35",
								{-0.13,0},
								1
							},
							
							{
								"LevelM35",
								{-0.115,0},
								1
							},
							{},
							
							{
								"LevelM35",
								{-0.1,0},
								1
							},
							
							{
								"LevelM35",
								{-0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM35",
								{-0.07,0},
								1
							},
							
							{
								"LevelM35",
								{-0.055,0},
								1
							},
							{},
							{},
							
							{
								"LevelM35",
								{0.235,-0.02},
								1
							},
							
							{
								"LevelM35",
								{0.235,0},
								1
							},
							{},
							
							{
								"LevelM35",
								{0.22,0},
								1
							},
							
							{
								"LevelM35",
								{0.205,0},
								1
							},
							{},
							
							{
								"LevelM35",
								{0.19,0},
								1
							},
							
							{
								"LevelM35",
								{0.175,0},
								1
							},
							{},
							
							{
								"LevelM35",
								{0.16,0},
								1
							},
							
							{
								"LevelM35",
								{0.145,0},
								1
							},
							{},
							
							{
								"LevelM35",
								{0.13,0},
								1
							},
							
							{
								"LevelM35",
								{0.115,0},
								1
							},
							{},
							
							{
								"LevelM35",
								{0.1,0},
								1
							},
							
							{
								"LevelM35",
								{0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM35",
								{0.07,0},
								1
							},
							
							{
								"LevelM35",
								{0.055,0},
								1
							},
							{}
						};
					};
					class VALM_1_35
					{
						type="text";
						source="static";
						text=-35;
						align="left";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelM35",
							{-0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM35",
							{-0.2,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM35",
							{-0.25999999,0.017999999},
							1
						};
					};
					class VALM_1_35_R
					{
						type="text";
						source="static";
						text=-35;
						align="right";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelM35",
							{0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM35",
							{0.31999999,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM35",
							{0.25999999,0.017999999},
							1
						};
					};
					class LevelP35: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelP35",
								
								{
									"-0.22-0.015",
									0.02
								},
								1
							},
							
							{
								"LevelP35",
								
								{
									"-0.22-0.015",
									0
								},
								1
							},
							
							{
								"LevelP35",
								{-0.059999999,0},
								1
							},
							{},
							
							{
								"LevelP35",
								{0.059999999,0},
								1
							},
							
							{
								"LevelP35",
								
								{
									"+0.22+0.015",
									0
								},
								1
							},
							
							{
								"LevelP35",
								
								{
									"+0.22+0.015",
									0.02
								},
								1
							}
						};
					};
					class VALP_1_35
					{
						type="text";
						source="static";
						text="35";
						align="left";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelP35",
							{-0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP35",
							{-0.2,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP35",
							{-0.25999999,0.033},
							1
						};
					};
					class VALP_1_35_R
					{
						type="text";
						source="static";
						text="35";
						align="right";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelP35",
							{0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP35",
							{0.31999999,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP35",
							{0.25999999,0.033},
							1
						};
					};
					class LevelM40: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelM40",
								{-0.235,-0.02},
								1
							},
							
							{
								"LevelM40",
								{-0.235,0},
								1
							},
							{},
							
							{
								"LevelM40",
								{-0.22,0},
								1
							},
							
							{
								"LevelM40",
								{-0.205,0},
								1
							},
							{},
							
							{
								"LevelM40",
								{-0.19,0},
								1
							},
							
							{
								"LevelM40",
								{-0.175,0},
								1
							},
							{},
							
							{
								"LevelM40",
								{-0.16,0},
								1
							},
							
							{
								"LevelM40",
								{-0.145,0},
								1
							},
							{},
							
							{
								"LevelM40",
								{-0.13,0},
								1
							},
							
							{
								"LevelM40",
								{-0.115,0},
								1
							},
							{},
							
							{
								"LevelM40",
								{-0.1,0},
								1
							},
							
							{
								"LevelM40",
								{-0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM40",
								{-0.07,0},
								1
							},
							
							{
								"LevelM40",
								{-0.055,0},
								1
							},
							{},
							{},
							
							{
								"LevelM40",
								{0.235,-0.02},
								1
							},
							
							{
								"LevelM40",
								{0.235,0},
								1
							},
							{},
							
							{
								"LevelM40",
								{0.22,0},
								1
							},
							
							{
								"LevelM40",
								{0.205,0},
								1
							},
							{},
							
							{
								"LevelM40",
								{0.19,0},
								1
							},
							
							{
								"LevelM40",
								{0.175,0},
								1
							},
							{},
							
							{
								"LevelM40",
								{0.16,0},
								1
							},
							
							{
								"LevelM40",
								{0.145,0},
								1
							},
							{},
							
							{
								"LevelM40",
								{0.13,0},
								1
							},
							
							{
								"LevelM40",
								{0.115,0},
								1
							},
							{},
							
							{
								"LevelM40",
								{0.1,0},
								1
							},
							
							{
								"LevelM40",
								{0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM40",
								{0.07,0},
								1
							},
							
							{
								"LevelM40",
								{0.055,0},
								1
							},
							{}
						};
					};
					class VALM_1_40
					{
						type="text";
						source="static";
						text=-40;
						align="left";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelM40",
							{-0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM40",
							{-0.2,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM40",
							{-0.25999999,0.017999999},
							1
						};
					};
					class VALM_1_40_R
					{
						type="text";
						source="static";
						text=-40;
						align="right";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelM40",
							{0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM40",
							{0.31999999,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM40",
							{0.25999999,0.017999999},
							1
						};
					};
					class LevelP40: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelP40",
								
								{
									"-0.22-0.015",
									0.02
								},
								1
							},
							
							{
								"LevelP40",
								
								{
									"-0.22-0.015",
									0
								},
								1
							},
							
							{
								"LevelP40",
								{-0.059999999,0},
								1
							},
							{},
							
							{
								"LevelP40",
								{0.059999999,0},
								1
							},
							
							{
								"LevelP40",
								
								{
									"+0.22+0.015",
									0
								},
								1
							},
							
							{
								"LevelP40",
								
								{
									"+0.22+0.015",
									0.02
								},
								1
							}
						};
					};
					class VALP_1_40
					{
						type="text";
						source="static";
						text="40";
						align="left";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelP40",
							{-0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP40",
							{-0.2,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP40",
							{-0.25999999,0.033},
							1
						};
					};
					class VALP_1_40_R
					{
						type="text";
						source="static";
						text="40";
						align="right";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelP40",
							{0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP40",
							{0.31999999,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP40",
							{0.25999999,0.033},
							1
						};
					};
					class LevelM45: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelM45",
								{-0.235,-0.02},
								1
							},
							
							{
								"LevelM45",
								{-0.235,0},
								1
							},
							{},
							
							{
								"LevelM45",
								{-0.22,0},
								1
							},
							
							{
								"LevelM45",
								{-0.205,0},
								1
							},
							{},
							
							{
								"LevelM45",
								{-0.19,0},
								1
							},
							
							{
								"LevelM45",
								{-0.175,0},
								1
							},
							{},
							
							{
								"LevelM45",
								{-0.16,0},
								1
							},
							
							{
								"LevelM45",
								{-0.145,0},
								1
							},
							{},
							
							{
								"LevelM45",
								{-0.13,0},
								1
							},
							
							{
								"LevelM45",
								{-0.115,0},
								1
							},
							{},
							
							{
								"LevelM45",
								{-0.1,0},
								1
							},
							
							{
								"LevelM45",
								{-0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM45",
								{-0.07,0},
								1
							},
							
							{
								"LevelM45",
								{-0.055,0},
								1
							},
							{},
							{},
							
							{
								"LevelM45",
								{0.235,-0.02},
								1
							},
							
							{
								"LevelM45",
								{0.235,0},
								1
							},
							{},
							
							{
								"LevelM45",
								{0.22,0},
								1
							},
							
							{
								"LevelM45",
								{0.205,0},
								1
							},
							{},
							
							{
								"LevelM45",
								{0.19,0},
								1
							},
							
							{
								"LevelM45",
								{0.175,0},
								1
							},
							{},
							
							{
								"LevelM45",
								{0.16,0},
								1
							},
							
							{
								"LevelM45",
								{0.145,0},
								1
							},
							{},
							
							{
								"LevelM45",
								{0.13,0},
								1
							},
							
							{
								"LevelM45",
								{0.115,0},
								1
							},
							{},
							
							{
								"LevelM45",
								{0.1,0},
								1
							},
							
							{
								"LevelM45",
								{0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM45",
								{0.07,0},
								1
							},
							
							{
								"LevelM45",
								{0.055,0},
								1
							},
							{}
						};
					};
					class VALM_1_45
					{
						type="text";
						source="static";
						text=-45;
						align="left";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelM45",
							{-0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM45",
							{-0.2,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM45",
							{-0.25999999,0.017999999},
							1
						};
					};
					class VALM_1_45_R
					{
						type="text";
						source="static";
						text=-45;
						align="right";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelM45",
							{0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM45",
							{0.31999999,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM45",
							{0.25999999,0.017999999},
							1
						};
					};
					class LevelP45: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelP45",
								
								{
									"-0.22-0.015",
									0.02
								},
								1
							},
							
							{
								"LevelP45",
								
								{
									"-0.22-0.015",
									0
								},
								1
							},
							
							{
								"LevelP45",
								{-0.059999999,0},
								1
							},
							{},
							
							{
								"LevelP45",
								{0.059999999,0},
								1
							},
							
							{
								"LevelP45",
								
								{
									"+0.22+0.015",
									0
								},
								1
							},
							
							{
								"LevelP45",
								
								{
									"+0.22+0.015",
									0.02
								},
								1
							}
						};
					};
					class VALP_1_45
					{
						type="text";
						source="static";
						text="45";
						align="left";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelP45",
							{-0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP45",
							{-0.2,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP45",
							{-0.25999999,0.033},
							1
						};
					};
					class VALP_1_45_R
					{
						type="text";
						source="static";
						text="45";
						align="right";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelP45",
							{0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP45",
							{0.31999999,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP45",
							{0.25999999,0.033},
							1
						};
					};
					class LevelM50: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelM50",
								{-0.235,-0.02},
								1
							},
							
							{
								"LevelM50",
								{-0.235,0},
								1
							},
							{},
							
							{
								"LevelM50",
								{-0.22,0},
								1
							},
							
							{
								"LevelM50",
								{-0.205,0},
								1
							},
							{},
							
							{
								"LevelM50",
								{-0.19,0},
								1
							},
							
							{
								"LevelM50",
								{-0.175,0},
								1
							},
							{},
							
							{
								"LevelM50",
								{-0.16,0},
								1
							},
							
							{
								"LevelM50",
								{-0.145,0},
								1
							},
							{},
							
							{
								"LevelM50",
								{-0.13,0},
								1
							},
							
							{
								"LevelM50",
								{-0.115,0},
								1
							},
							{},
							
							{
								"LevelM50",
								{-0.1,0},
								1
							},
							
							{
								"LevelM50",
								{-0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM50",
								{-0.07,0},
								1
							},
							
							{
								"LevelM50",
								{-0.055,0},
								1
							},
							{},
							{},
							
							{
								"LevelM50",
								{0.235,-0.02},
								1
							},
							
							{
								"LevelM50",
								{0.235,0},
								1
							},
							{},
							
							{
								"LevelM50",
								{0.22,0},
								1
							},
							
							{
								"LevelM50",
								{0.205,0},
								1
							},
							{},
							
							{
								"LevelM50",
								{0.19,0},
								1
							},
							
							{
								"LevelM50",
								{0.175,0},
								1
							},
							{},
							
							{
								"LevelM50",
								{0.16,0},
								1
							},
							
							{
								"LevelM50",
								{0.145,0},
								1
							},
							{},
							
							{
								"LevelM50",
								{0.13,0},
								1
							},
							
							{
								"LevelM50",
								{0.115,0},
								1
							},
							{},
							
							{
								"LevelM50",
								{0.1,0},
								1
							},
							
							{
								"LevelM50",
								{0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM50",
								{0.07,0},
								1
							},
							
							{
								"LevelM50",
								{0.055,0},
								1
							},
							{}
						};
					};
					class VALM_1_50
					{
						type="text";
						source="static";
						text=-50;
						align="left";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelM50",
							{-0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM50",
							{-0.2,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM50",
							{-0.25999999,0.017999999},
							1
						};
					};
					class VALM_1_50_R
					{
						type="text";
						source="static";
						text=-50;
						align="right";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelM50",
							{0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM50",
							{0.31999999,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM50",
							{0.25999999,0.017999999},
							1
						};
					};
					class LevelP50: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelP50",
								
								{
									"-0.22-0.015",
									0.02
								},
								1
							},
							
							{
								"LevelP50",
								
								{
									"-0.22-0.015",
									0
								},
								1
							},
							
							{
								"LevelP50",
								{-0.059999999,0},
								1
							},
							{},
							
							{
								"LevelP50",
								{0.059999999,0},
								1
							},
							
							{
								"LevelP50",
								
								{
									"+0.22+0.015",
									0
								},
								1
							},
							
							{
								"LevelP50",
								
								{
									"+0.22+0.015",
									0.02
								},
								1
							}
						};
					};
					class VALP_1_50
					{
						type="text";
						source="static";
						text="50";
						align="left";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelP50",
							{-0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP50",
							{-0.2,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP50",
							{-0.25999999,0.033},
							1
						};
					};
					class VALP_1_50_R
					{
						type="text";
						source="static";
						text="50";
						align="right";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelP50",
							{0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP50",
							{0.31999999,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP50",
							{0.25999999,0.033},
							1
						};
					};
					class LevelM60: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelM60",
								{-0.235,-0.02},
								1
							},
							
							{
								"LevelM60",
								{-0.235,0},
								1
							},
							{},
							
							{
								"LevelM60",
								{-0.22,0},
								1
							},
							
							{
								"LevelM60",
								{-0.205,0},
								1
							},
							{},
							
							{
								"LevelM60",
								{-0.19,0},
								1
							},
							
							{
								"LevelM60",
								{-0.175,0},
								1
							},
							{},
							
							{
								"LevelM60",
								{-0.16,0},
								1
							},
							
							{
								"LevelM60",
								{-0.145,0},
								1
							},
							{},
							
							{
								"LevelM60",
								{-0.13,0},
								1
							},
							
							{
								"LevelM60",
								{-0.115,0},
								1
							},
							{},
							
							{
								"LevelM60",
								{-0.1,0},
								1
							},
							
							{
								"LevelM60",
								{-0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM60",
								{-0.07,0},
								1
							},
							
							{
								"LevelM60",
								{-0.055,0},
								1
							},
							{},
							{},
							
							{
								"LevelM60",
								{0.235,-0.02},
								1
							},
							
							{
								"LevelM60",
								{0.235,0},
								1
							},
							{},
							
							{
								"LevelM60",
								{0.22,0},
								1
							},
							
							{
								"LevelM60",
								{0.205,0},
								1
							},
							{},
							
							{
								"LevelM60",
								{0.19,0},
								1
							},
							
							{
								"LevelM60",
								{0.175,0},
								1
							},
							{},
							
							{
								"LevelM60",
								{0.16,0},
								1
							},
							
							{
								"LevelM60",
								{0.145,0},
								1
							},
							{},
							
							{
								"LevelM60",
								{0.13,0},
								1
							},
							
							{
								"LevelM60",
								{0.115,0},
								1
							},
							{},
							
							{
								"LevelM60",
								{0.1,0},
								1
							},
							
							{
								"LevelM60",
								{0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM60",
								{0.07,0},
								1
							},
							
							{
								"LevelM60",
								{0.055,0},
								1
							},
							{}
						};
					};
					class VALM_1_60
					{
						type="text";
						source="static";
						text=-60;
						align="left";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelM60",
							{-0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM60",
							{-0.2,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM60",
							{-0.25999999,0.017999999},
							1
						};
					};
					class VALM_1_60_R
					{
						type="text";
						source="static";
						text=-60;
						align="right";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelM60",
							{0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM60",
							{0.31999999,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM60",
							{0.25999999,0.017999999},
							1
						};
					};
					class LevelP60: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelP60",
								
								{
									"-0.22-0.015",
									0.02
								},
								1
							},
							
							{
								"LevelP60",
								
								{
									"-0.22-0.015",
									0
								},
								1
							},
							
							{
								"LevelP60",
								{-0.059999999,0},
								1
							},
							{},
							
							{
								"LevelP60",
								{0.059999999,0},
								1
							},
							
							{
								"LevelP60",
								
								{
									"+0.22+0.015",
									0
								},
								1
							},
							
							{
								"LevelP60",
								
								{
									"+0.22+0.015",
									0.02
								},
								1
							}
						};
					};
					class VALP_1_60
					{
						type="text";
						source="static";
						text="60";
						align="left";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelP60",
							{-0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP60",
							{-0.2,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP60",
							{-0.25999999,0.033},
							1
						};
					};
					class VALP_1_60_R
					{
						type="text";
						source="static";
						text="60";
						align="right";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelP60",
							{0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP60",
							{0.31999999,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP60",
							{0.25999999,0.033},
							1
						};
					};
					class LevelM70: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelM70",
								{-0.235,-0.02},
								1
							},
							
							{
								"LevelM70",
								{-0.235,0},
								1
							},
							{},
							
							{
								"LevelM70",
								{-0.22,0},
								1
							},
							
							{
								"LevelM70",
								{-0.205,0},
								1
							},
							{},
							
							{
								"LevelM70",
								{-0.19,0},
								1
							},
							
							{
								"LevelM70",
								{-0.175,0},
								1
							},
							{},
							
							{
								"LevelM70",
								{-0.16,0},
								1
							},
							
							{
								"LevelM70",
								{-0.145,0},
								1
							},
							{},
							
							{
								"LevelM70",
								{-0.13,0},
								1
							},
							
							{
								"LevelM70",
								{-0.115,0},
								1
							},
							{},
							
							{
								"LevelM70",
								{-0.1,0},
								1
							},
							
							{
								"LevelM70",
								{-0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM70",
								{-0.07,0},
								1
							},
							
							{
								"LevelM70",
								{-0.055,0},
								1
							},
							{},
							{},
							
							{
								"LevelM70",
								{0.235,-0.02},
								1
							},
							
							{
								"LevelM70",
								{0.235,0},
								1
							},
							{},
							
							{
								"LevelM70",
								{0.22,0},
								1
							},
							
							{
								"LevelM70",
								{0.205,0},
								1
							},
							{},
							
							{
								"LevelM70",
								{0.19,0},
								1
							},
							
							{
								"LevelM70",
								{0.175,0},
								1
							},
							{},
							
							{
								"LevelM70",
								{0.16,0},
								1
							},
							
							{
								"LevelM70",
								{0.145,0},
								1
							},
							{},
							
							{
								"LevelM70",
								{0.13,0},
								1
							},
							
							{
								"LevelM70",
								{0.115,0},
								1
							},
							{},
							
							{
								"LevelM70",
								{0.1,0},
								1
							},
							
							{
								"LevelM70",
								{0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM70",
								{0.07,0},
								1
							},
							
							{
								"LevelM70",
								{0.055,0},
								1
							},
							{}
						};
					};
					class VALM_1_70
					{
						type="text";
						source="static";
						text=-70;
						align="left";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelM70",
							{-0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM70",
							{-0.2,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM70",
							{-0.25999999,0.017999999},
							1
						};
					};
					class VALM_1_70_R
					{
						type="text";
						source="static";
						text=-70;
						align="right";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelM70",
							{0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM70",
							{0.31999999,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM70",
							{0.25999999,0.017999999},
							1
						};
					};
					class LevelP70: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelP70",
								
								{
									"-0.22-0.015",
									0.02
								},
								1
							},
							
							{
								"LevelP70",
								
								{
									"-0.22-0.015",
									0
								},
								1
							},
							
							{
								"LevelP70",
								{-0.059999999,0},
								1
							},
							{},
							
							{
								"LevelP70",
								{0.059999999,0},
								1
							},
							
							{
								"LevelP70",
								
								{
									"+0.22+0.015",
									0
								},
								1
							},
							
							{
								"LevelP70",
								
								{
									"+0.22+0.015",
									0.02
								},
								1
							}
						};
					};
					class VALP_1_70
					{
						type="text";
						source="static";
						text="70";
						align="left";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelP70",
							{-0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP70",
							{-0.2,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP70",
							{-0.25999999,0.033},
							1
						};
					};
					class VALP_1_70_R
					{
						type="text";
						source="static";
						text="70";
						align="right";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelP70",
							{0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP70",
							{0.31999999,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP70",
							{0.25999999,0.033},
							1
						};
					};
					class LevelM80: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelM80",
								{-0.235,-0.02},
								1
							},
							
							{
								"LevelM80",
								{-0.235,0},
								1
							},
							{},
							
							{
								"LevelM80",
								{-0.22,0},
								1
							},
							
							{
								"LevelM80",
								{-0.205,0},
								1
							},
							{},
							
							{
								"LevelM80",
								{-0.19,0},
								1
							},
							
							{
								"LevelM80",
								{-0.175,0},
								1
							},
							{},
							
							{
								"LevelM80",
								{-0.16,0},
								1
							},
							
							{
								"LevelM80",
								{-0.145,0},
								1
							},
							{},
							
							{
								"LevelM80",
								{-0.13,0},
								1
							},
							
							{
								"LevelM80",
								{-0.115,0},
								1
							},
							{},
							
							{
								"LevelM80",
								{-0.1,0},
								1
							},
							
							{
								"LevelM80",
								{-0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM80",
								{-0.07,0},
								1
							},
							
							{
								"LevelM80",
								{-0.055,0},
								1
							},
							{},
							{},
							
							{
								"LevelM80",
								{0.235,-0.02},
								1
							},
							
							{
								"LevelM80",
								{0.235,0},
								1
							},
							{},
							
							{
								"LevelM80",
								{0.22,0},
								1
							},
							
							{
								"LevelM80",
								{0.205,0},
								1
							},
							{},
							
							{
								"LevelM80",
								{0.19,0},
								1
							},
							
							{
								"LevelM80",
								{0.175,0},
								1
							},
							{},
							
							{
								"LevelM80",
								{0.16,0},
								1
							},
							
							{
								"LevelM80",
								{0.145,0},
								1
							},
							{},
							
							{
								"LevelM80",
								{0.13,0},
								1
							},
							
							{
								"LevelM80",
								{0.115,0},
								1
							},
							{},
							
							{
								"LevelM80",
								{0.1,0},
								1
							},
							
							{
								"LevelM80",
								{0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM80",
								{0.07,0},
								1
							},
							
							{
								"LevelM80",
								{0.055,0},
								1
							},
							{}
						};
					};
					class VALM_1_80
					{
						type="text";
						source="static";
						text=-80;
						align="left";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelM80",
							{-0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM80",
							{-0.2,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM80",
							{-0.25999999,0.017999999},
							1
						};
					};
					class VALM_1_80_R
					{
						type="text";
						source="static";
						text=-80;
						align="right";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelM80",
							{0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM80",
							{0.31999999,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM80",
							{0.25999999,0.017999999},
							1
						};
					};
					class LevelP80: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelP80",
								
								{
									"-0.22-0.015",
									0.02
								},
								1
							},
							
							{
								"LevelP80",
								
								{
									"-0.22-0.015",
									0
								},
								1
							},
							
							{
								"LevelP80",
								{-0.059999999,0},
								1
							},
							{},
							
							{
								"LevelP80",
								{0.059999999,0},
								1
							},
							
							{
								"LevelP80",
								
								{
									"+0.22+0.015",
									0
								},
								1
							},
							
							{
								"LevelP80",
								
								{
									"+0.22+0.015",
									0.02
								},
								1
							}
						};
					};
					class VALP_1_80
					{
						type="text";
						source="static";
						text="80";
						align="left";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelP80",
							{-0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP80",
							{-0.2,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP80",
							{-0.25999999,0.033},
							1
						};
					};
					class VALP_1_80_R
					{
						type="text";
						source="static";
						text="80";
						align="right";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelP80",
							{0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP80",
							{0.31999999,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP80",
							{0.25999999,0.033},
							1
						};
					};
					class LevelM90: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelM90",
								{-0.235,-0.02},
								1
							},
							
							{
								"LevelM90",
								{-0.235,0},
								1
							},
							{},
							
							{
								"LevelM90",
								{-0.22,0},
								1
							},
							
							{
								"LevelM90",
								{-0.205,0},
								1
							},
							{},
							
							{
								"LevelM90",
								{-0.19,0},
								1
							},
							
							{
								"LevelM90",
								{-0.175,0},
								1
							},
							{},
							
							{
								"LevelM90",
								{-0.16,0},
								1
							},
							
							{
								"LevelM90",
								{-0.145,0},
								1
							},
							{},
							
							{
								"LevelM90",
								{-0.13,0},
								1
							},
							
							{
								"LevelM90",
								{-0.115,0},
								1
							},
							{},
							
							{
								"LevelM90",
								{-0.1,0},
								1
							},
							
							{
								"LevelM90",
								{-0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM90",
								{-0.07,0},
								1
							},
							
							{
								"LevelM90",
								{-0.055,0},
								1
							},
							{},
							{},
							
							{
								"LevelM90",
								{0.235,-0.02},
								1
							},
							
							{
								"LevelM90",
								{0.235,0},
								1
							},
							{},
							
							{
								"LevelM90",
								{0.22,0},
								1
							},
							
							{
								"LevelM90",
								{0.205,0},
								1
							},
							{},
							
							{
								"LevelM90",
								{0.19,0},
								1
							},
							
							{
								"LevelM90",
								{0.175,0},
								1
							},
							{},
							
							{
								"LevelM90",
								{0.16,0},
								1
							},
							
							{
								"LevelM90",
								{0.145,0},
								1
							},
							{},
							
							{
								"LevelM90",
								{0.13,0},
								1
							},
							
							{
								"LevelM90",
								{0.115,0},
								1
							},
							{},
							
							{
								"LevelM90",
								{0.1,0},
								1
							},
							
							{
								"LevelM90",
								{0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM90",
								{0.07,0},
								1
							},
							
							{
								"LevelM90",
								{0.055,0},
								1
							},
							{}
						};
					};
					class VALM_1_90
					{
						type="text";
						source="static";
						text=-90;
						align="left";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelM90",
							{-0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM90",
							{-0.2,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM90",
							{-0.25999999,0.017999999},
							1
						};
					};
					class VALM_1_90_R
					{
						type="text";
						source="static";
						text=-90;
						align="right";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelM90",
							{0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM90",
							{0.31999999,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM90",
							{0.25999999,0.017999999},
							1
						};
					};
					class LevelP90: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelP90",
								
								{
									"-0.22-0.015",
									0.02
								},
								1
							},
							
							{
								"LevelP90",
								
								{
									"-0.22-0.015",
									0
								},
								1
							},
							
							{
								"LevelP90",
								{-0.059999999,0},
								1
							},
							{},
							
							{
								"LevelP90",
								{0.059999999,0},
								1
							},
							
							{
								"LevelP90",
								
								{
									"+0.22+0.015",
									0
								},
								1
							},
							
							{
								"LevelP90",
								
								{
									"+0.22+0.015",
									0.02
								},
								1
							}
						};
					};
					class VALP_1_90
					{
						type="text";
						source="static";
						text="90";
						align="left";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelP90",
							{-0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP90",
							{-0.2,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP90",
							{-0.25999999,0.033},
							1
						};
					};
					class VALP_1_90_R
					{
						type="text";
						source="static";
						text="90";
						align="right";
						scale=2;
						sourceScale=1;
						pos[]=
						{
							"LevelP90",
							{0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP90",
							{0.31999999,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP90",
							{0.25999999,0.033},
							1
						};
					};
				};
			};
			class HorizonBankRot
			{
				type="line";
				width=3;
				points[]=
				{
					{
						"HorizonBankRot",
						{0,0.37},
						1
					},
					{
						"HorizonBankRot",
						{0.01,0.35},
						1
					},
					{
						"HorizonBankRot",
						{-0.01,0.35},
						1
					},
					{
						"HorizonBankRot",
						{0,0.37},
						1
					}
				};
			};
			class HorizonBankRotLines
			{
				type="line";
				width=3;
				points[]=
				{
					{
						"HorizonBankRot30_minus",
						{0,0.37},
						1
					},
					{
						"HorizonBankRot30_minus",
						{0,0.4},
						1
					},
					{},
					{
						"HorizonBankRot25_minus",
						{0,0.385},
						1
					},
					{
						"HorizonBankRot25_minus",
						{0,0.4},
						1
					},
					{},
					{
						"HorizonBankRot20_minus",
						{0,0.37},
						1
					},
					{
						"HorizonBankRot20_minus",
						{0,0.4},
						1
					},
					{},
					{
						"HorizonBankRot15_minus",
						{0,0.385},
						1
					},
					{
						"HorizonBankRot15_minus",
						{0,0.4},
						1
					},
					{},
					{
						"HorizonBankRot10_minus",
						{0,0.37},
						1
					},
					{
						"HorizonBankRot10_minus",
						{0,0.4},
						1
					},
					{},
					{
						"HorizonBankRot5_minus",
						{0,0.385},
						1
					},
					{
						"HorizonBankRot5_minus",
						{0,0.4},
						1
					},
					{},
					{
						"HorizonBankRot0",
						{0,0.37},
						1
					},
					{
						"HorizonBankRot0",
						{0,0.4},
						1
					},
					{},
					{
						"HorizonBankRot5_plus",
						{0,0.385},
						1
					},
					{
						"HorizonBankRot5_plus",
						{0,0.4},
						1
					},
					{},
					{
						"HorizonBankRot10_plus",
						{0,0.37},
						1
					},
					{
						"HorizonBankRot10_plus",
						{0,0.4},
						1
					},
					{},
					{
						"HorizonBankRot15_plus",
						{0,0.385},
						1
					},
					{
						"HorizonBankRot15_plus",
						{0,0.4},
						1
					},
					{},
					{
						"HorizonBankRot20_plus",
						{0,0.37},
						1
					},
					{
						"HorizonBankRot20_plus",
						{0,0.4},
						1
					},
					{},
					{
						"HorizonBankRot25_plus",
						{0,0.385},
						1
					},
					{
						"HorizonBankRot25_plus",
						{0,0.4},
						1
					},
					{},
					{
						"HorizonBankRot30_plus",
						{0,0.37},
						1
					},
					{
						"HorizonBankRot30_plus",
						{0,0.4},
						1
					}
				};
			};
			class Speed_Black
			{
				color[]={0,0,0,1};
				alpha=0.625;
				class Black
				{					
					type="polygon";
					points[]=
					{
						{
							{
								{0.0375,0.05},
								1
							},
							{
								{0.1625,0.05},
								1
							},
							{
								{0.1625,0.95},
								1
							},
							{
								{0.0375,0.95},
								1
							}
						}
					};
				};
			};
			class Speed_SCALE
			{
				type="scale";
				horizontal=0;
				source="speed";
				sourceScale=1;
				min=-4000;
				max=4000;
				width=5;
				top=0.925;
				center=0.5;
				bottom=0.075;
				lineXleft=0.1625;
				lineYright=0.1325;
				lineXleftMajor=0.1625;
				lineYrightMajor=0.1125;
				majorLineEach=5;
				numberEach=10;
				step=1;
				stepSize=0.025;
				align="left";
				scale=1;
				pos[]={0.1,0.9};
				right[]={0.15,0.9};
				down[]={0.1,0.95};
			};
			class Speed_Dark_Polygon
			{
				color[]={0,0,0,1};
				class Speed_POLY1
				{					
					type="polygon";
					points[]=
					{
						{
							{ 
								{0.0375,0.47},
								1
							},
							{ 
								{0.1625,0.47},
								1
							},
							{ 
								{0.1625,0.53},
								1
							},
							{ 	
								{0.0375,0.53},
								1
							}
						}
					};
				};
			};
			class Speed_Dark_Polygon2
			{
				color[]={0,0,0,1};
				class Speed_POLY2
				{					
					type="polygon";
					points[]=
					{
						{
							{ 
								{0.0375,0.83},
								1
							},
							{ 
								{0.1625,0.83},
								1
							},
							{ 
								{0.1625,0.95},
								1
							},
							{ 	
								{0.0375,0.95},
								1
							}
						}
					};
				};
			};
			class Speed_Dark_Polygon3
			{
				color[]={0,0,0,1};
				class Speed_POLY3
				{					
					type="polygon";
					points[]=
					{
						{
							{ 
								{0.0375,0.05},
								1
							},
							{ 
								{0.1625,0.05},
								1
							},
							{ 
								{0.1625,0.11},
								1
							},
							{ 	
								{0.0375,0.11},
								1
							}
						}
					};
				};
			};
			class Speed_BOX
			{
				type="line";
				width=7;
				points[]=
				{
					{
						{0.0375,0.05},
						1
					},
					{
						{0.1625,0.05},
						1
					},
					{
						{0.1625,0.95},
						1
					},
					{
						{0.0375,0.95},
						1
					},
					{
						{0.0375,0.05},
						1
					},
				};
			};
			class Speed_BOX_2
			{
				type="line";
				width=7;
				points[]=
				{
					
					{
						{0.0375,0.47},
						1
					},
					{
						{0.1625,0.47},
						1
					},
					{
						{0.1625,0.53},
						1
					},
					{
						{0.0375,0.53},
						1
					},
					{
						{0.0375,0.47},
						1
					},
				};
			};
			class Speed_BOX_3
			{
				type="line";
				width=7;
				points[]=
				{
					
					{
						{0.0375,0.89},
						1
					},
					{
						{0.1625,0.89},
						1
					},
					{
						{0.1625,0.95},
						1
					},
					{
						{0.0375,0.95},
						1
					},
					{
						{0.0375,0.89},
						1
					},
				};
			};
			class Speed_BOX_4
			{
				type="line";
				width=7;
				points[]=
				{
					
					{
						{0.0375,0.83},
						1
					},
					{
						{0.1625,0.83},
						1
					},
					{
						{0.1625,0.89},
						1
					},
					{
						{0.0375,0.89},
						1
					},
					{
						{0.0375,0.83},
						1
					},
				};
			};
			class Speed_BOX_5
			{
				type="line";
				width=7;
				points[]=
				{
					
					{
						{0.0375,0.05},
						1
					},
					{
						{0.1625,0.05},
						1
					},
					{
						{0.1625,0.11},
						1
					},
					{
						{0.0375,0.11},
						1
					},
					{
						{0.0375,0.05},
						1
					},
				};
			};
			class Speed
			{
				type="text";
				source="speed";
				sourceScale=1;
				align="center";
				scale=1;
				pos[]=
				{
					{0.1,0.47},
					1
				};
				right[]=
				{
					{0.18,0.47},
					1
				};
				down[]=
				{
					{0.1,0.53},
					1
				};
			};
			class Speed_Unit
			{
				type="text";
				source="static";
				text="M/S";
				sourceScale=1;
				align="center";
				scale=1;
				pos[]=
				{
					{0.1,0.06},
					1
				};
				right[]=
				{
					{0.14,0.06},
					1
				};
				down[]=
				{
					{0.1,0.1},
					1
				};
			};
			class Speed_TAS
			{
				type="text";
				source="static";
				text="TAS";
				sourceScale=1;
				align="center";
				scale=1;
				pos[]=
				{
					{0.1,0.84},
					1
				};
				right[]=
				{
					{0.13,0.84},
					1
				};
				down[]=
				{
					{0.1,0.88},
					1
				};
			};
			class Speed_OAT
			{
				type="text";
				source="static";
				text="OAT 27°C";
				sourceScale=1;
				align="center";
				scale=1;
				pos[]=
				{
					{0.1,0.9},
					1
				};
				right[]=
				{
					{0.13,0.9},
					1
				};
				down[]=
				{
					{0.1,0.94},
					1
				};
			};
			class ALT_Black
			{
				color[]={0,0,0,1};
				alpha=0.625;
				class Black
				{					
					type="polygon";
					points[]=
					{
						{
							{
								{0.8625,0.05},
								1
							},
							{
								{0.7375,0.05},
								1
							},
							{
								{0.7375,0.95},
								1
							},
							{
								{0.8625,0.95},
								1
							}
						}
					};
				};
			};
			class ALT_SCALE
			{
				type="scale";			// Tipo
				horizontal=0;			// 0 - Vertical 1 - Horizontal
				source="altitudeAGL";			// fonte da animação
				sourceScale=1;			// multiplicador
				min=-4000;				// valor mínimo
				max=4000;				// valor máximo
				width=5;				// largura
				top=0.925;				// posição do topo da escala
				center=0.5;				// posição do meio da escala
				bottom=0.075;			// posição do pé da escala
				lineXleft=0.7375;		// posição do ponto inicial do traço normal da escala
				lineYright=0.7675;		// posição do ponto final do traço normal da escala
				lineXleftMajor=0.7375;	// posição do ponto inicial do traço grande da escala
				lineYrightMajor=0.7875;	// posição do ponto final do traço grande da escala
				majorLineEach=5;		// intervalo dos traços grandes
				numberEach=10;			// intervalo de numeração
				step=1;					// unidades entre traços
				stepSize=0.025;			// tamanho do espaço entre traços
				align="right";			// alinhamento
				scale=1;				// tamanho da fonte
				pos[]={0.79,0.9};		// posição do texto em relação ao "TOP"
				right[]={0.84,0.9};		// posição do texto em relação ao "TOP"
				down[]={0.79,0.95};		// posição do texto em relação ao "TOP"
			};
			class ALT_Dark_Polygon
			{
				color[]={0,0,0,1};
				class ALT_POLY
				{					
					type="polygon";
					points[]=
					{
						{
							{ 
								{0.8625,0.47},
								1
							},
							{ 
								{0.7375,0.47},
								1
							},
							{ 
								{0.7375,0.53},
								1
							},
							{ 	
								{0.8625,0.53},
								1
							}
						}
					};
				};
			};
			class ALT_Dark_Polygon2
			{
				color[]={0,0,0,1};
				class ALT_POLY2
				{					
					type="polygon";
					points[]=
					{
						{
							{ 
								{0.8625,0.89},
								1
							},
							{ 
								{0.7375,0.89},
								1
							},
							{ 
								{0.7375,0.95},
								1
							},
							{ 	
								{0.8625,0.95},
								1
							}
						}
					};
				};
			};
			class ALT_Dark_Polygon3
			{
				color[]={0,0,0,1};
				class ALT_POLY3
				{					
					type="polygon";
					points[]=
					{
						{
							{ 
								{0.8625,0.05},
								1
							},
							{ 
								{0.7375,0.05},
								1
							},
							{ 
								{0.7375,0.11},
								1
							},
							{ 	
								{0.8625,0.11},
								1
							}
						}
					};
				};
			};
			class ALT_BOX
			{
				type="line";
				width=7;
				points[]=
				{
					
					{
						{0.8625,0.05},
						1
					},
					{
						{0.7375,0.05},
						1
					},
					{
						{0.7375,0.95},
						1
					},
					{
						{0.8625,0.95},
						1
					},
					{
						{0.8625,0.05},
						1
					},
				};
			};
			class ALT_BOX_2
			{
				type="line";
				width=7;
				points[]=
				{
					
					{
						{0.8625,0.47},
						1
					},
					{
						{0.7375,0.47},
						1
					},
					{
						{0.7375,0.53},
						1
					},
					{
						{0.8625,0.53},
						1
					},
					{
						{0.8625,0.47},
						1
					},
				};
			};
			class ALT_BOX_3
			{
				type="line";
				width=7;
				points[]=
				{
					
					{
						{0.8625,0.89},
						1
					},
					{
						{0.7375,0.89},
						1
					},
					{
						{0.7375,0.95},
						1
					},
					{
						{0.8625,0.95},
						1
					},
					{
						{0.8625,0.89},
						1
					},
				};
			};
			class ALT_BOX_4
			{
				type="line";
				width=7;
				points[]=
				{
					
					{
						{0.8625,0.05},
						1
					},
					{
						{0.7375,0.05},
						1
					},
					{
						{0.7375,0.11},
						1
					},
					{
						{0.8625,0.11},
						1
					},
					{
						{0.8625,0.05},
						1
					},
				};
			};
			class ALT_AGL
			{
				type="text";
				source="static";
				text="AGL";
				sourceScale=1;
				align="center";
				scale=1;
				pos[]=
				{
					{0.8,0.89},
					1
				};
				right[]=
				{
					{0.88,0.89},
					1
				};
				down[]=
				{
					{0.8,0.95},
					1
				};
			};
			class ALT
			{
				type="text";
				source="altitudeAGL";
				sourceScale=1;
				align="center";
				scale=1;
				pos[]=
				{
					{0.8,0.47},
					1
				};
				right[]=
				{
					{0.88,0.47},
					1
				};
				down[]=
				{
					{0.8,0.53},
					1
				};
			};
			class ALT_UNIT
			{
				type="text";
				source="static";
				text="Meters";
				sourceScale=1;
				align="center";
				scale=1;
				pos[]=
				{
					{0.8,0.06},
					1
				};
				right[]=
				{
					{0.84,0.06},
					1
				};
				down[]=
				{
					{0.8,0.1},
					1
				};
			};
			class VSPEED_Black
			{
				color[]={0,0,0,1};
				alpha=0.625;
				class Black_1
				{					
					type="polygon";
					points[]=
					{
						{
							{
								{0.8625,0.2},
								1
							},
							{
								{0.9625,0.2},
								1
							},
							{
								{0.9625,0.45},
								1
							},
							{
								{0.8625,0.5},
								1
							}
						}
					};
				};
				class Black_2
				{
					type="polygon";
					points[]=
					{
						{
							{
								{0.8625,0.5},
							1
							},
							{
								{0.9625,0.55},
								1
							},
							{
								{0.9625,0.8},
								1
							},
							{
								{0.8625,0.8},
								1
							}
						}
					};
				};
			};
			class VSPEED_SCALE
			{
				type="scale";
				horizontal=0;
				source="vspeed";
				sourceScale=1;
				min=-30;
				max=30;
				width=5;
				top=0.725;
				center=0.5;
				bottom=0.275;
				lineXleft=0.8625;
				lineYright=0.8925;
				lineXleftMajor=0.8625;
				lineYrightMajor=0.9125;
				majorLineEach=2.5;
				numberEach=5;
				step=1;
				stepSize=0.025;
				align="right";
				scale=1;
				pos[]={0.915,0.7};	
				right[]={0.965,0.7};
				down[]={0.915,0.75};
			};
			class VSPEED_Dark_Polygon
			{
				color[]={0,0,0,1};
				class SPEED_POLY1
				{					
					type="polygon";
					points[]=
					{
						{
							{
								{0.8625,0.5},
								1
							},
							{
								{0.9625,0.45},
								1
							},
							{
								{1,0.45},
								1
							},
							{
								{1,0.5},
								1
							},
						}
					};
				};
				class SPEED_POLY2
				{					
					type="polygon";
					points[]=
					{
						{
							{
								{0.8625,0.5},
								1
							},
							{
								{0.9625,0.55},
								1
							},
							{
								{1,0.55},
								1
							},
							{
								{1,0.5},
								1
							},
						}
					};
				};
			};
			class VSPEED_Dark_Polygon2
			{
				color[]={0,0,0,1};
				class SPEED_POLY1
				{					
					type="polygon";
					points[]=
					{
						{
							{
								{0.8625,0.74},
								1
							},
							{
								{0.8625,0.8},
								1
							},
							{
								{0.9625,0.8},
								1
							},
							{
								{0.9625,0.74},
								1
							},
							
						}
					};
				};
			};
			class VSPEED_BOX
			{
				type="line";
				width=7;
				points[]=
				{
					
					{
						{0.8625,0.2},
						1
					},
					{
						{0.9625,0.2},
						1
					},
					{
						{0.9625,0.45},
						1
					},
					{
						{0.8625,0.5},
						1
					},
					{
						{0.8625,0.2},
						1
					},
					{},
					{
						{0.8625,0.5},
						1
					},
					{
						{0.9625,0.45},
						1
					},
					{
						{1,0.45},
						1
					},
					{
						{1,0.55},
						1
					},
					{
						{0.9625,0.55},
						1
					},
					{
						{0.8625,0.5},
						1
					},
					{},
					{
						{0.8625,0.5},
						1
					},
					{
						{0.9625,0.55},
						1
					},
					{
						{0.9625,0.8},
						1
					},
					{
						{0.8625,0.8},
						1
					},
					{
						{0.8625,0.5},
						1
					}
				};
			};
			class VSPEED_BOX2
			{
				type="line";
				width=7;
				points[]=
				{
					{
						{0.8625,0.74},
						1
					},
					{
						{0.9625,0.74},
						1
					},
					{
						{0.9625,0.8},
						1
					},
					{
						{0.8625,0.8},
						1
					},
					{
						{0.8625,0.74},
						1
					}
				};
			};
			class VSPEED
			{
				type="text";
				source="vspeed";
				sourceScale=1;
				align="center";
				scale=1;
				pos[]=
				{
					{0.945,0.47},
					1
				};
				right[]=
				{
					{1.005,0.47},
					1
				};
				down[]=
				{
					{0.945,0.53},
					1
				};
			};
			class VSPEED_VSPEED
			{
				type="text";
				source="static";
				text="VSPEED";
				sourceScale=1;
				align="center";
				scale=1;
				pos[]=
				{
					{0.91,0.755},
					1
				};
				right[]=
				{
					{0.94,0.755},
					1
				};
				down[]=
				{
					{0.91,0.785},
					1
				};
			};
			class BOTTOM_Black
			{
				color[]={0,0,0,1};
				class BOTTOM_1
				{					
					type="polygon";
					points[]=
					{
						{
							{
								{0,0.95},
								1
							},
							{
								{1,0.95},
								1
							},
							{
								{1,1},
								1
							},
							{
								{0,1},
								1
							}
						}
					};
				};
				class BOTTOM_2
				{					
					type="polygon";
					points[]=
					{
						{
							{
								{0,0.95},
								1
							},
							{
								{1,0.95},
								1
							},
							{
								{1,1},
								1
							},
							{
								{0,1},
								1
							}
						}
					};
				};
			};
			class BOTTOM_BOX
			{
				type="line";
				width=7;
				points[]=
				{
					{
						{0,0.95},
						1
					},
					{
						{1,0.95},
						1
					},
					{
						{1,1},
						1
					},
					{
						{0,1},
						1
					},
					{
						{0,0.95},
						1
					},
					{},
					{
						{0.25,1},
						1
					},
					{
						{0.25,0.95},
						1
					},
					{},
					{
						{0.5,1},
						1
					},
					{
						{0.5,0.95},
						1
					},
					{},
					{
						{0.75,1},
						1
					},
					{
						{0.75,0.95},
						1
					}
				};
			};
			class PitchNumber
			{
				type="text";
				source="horizonDive";
				sourceScale=57.29578;
				align="center";
				scale=1;
				pos[]=
				{
					{0.175,0.95},
					1
				};
				right[]=
				{
					{0.215,0.95},
					1
				};
				down[]=
				{
					{0.175,1},
					1
				};
			};
			class PitchText
			{
				type="text";
				source="static";
				text="PITCH";
				align="center";
				scale=1;
				pos[]=
				{
					{0.105,0.95},
					1
				};
				right[]=
				{
					{0.155,0.95},
					1
				};
				down[]=
				{
					{0.105,1},
					1
				};
			};
			class RollNumber
			{
				type="text";
				source="horizonBank";
				sourceScale=57.29578;
				align="center";
				scale=1;
				pos[]=
				{
					{0.415,0.95},
					1
				};
				right[]=
				{
					{0.455,0.95},
					1
				};
				down[]=
				{
					{0.415,1},
					1
				};
			};
			class RollText
			{
				type="text";
				source="static";
				text="ROLL";
				align="center";
				scale=1;
				pos[]=
				{
					{0.355,0.95},
					1
				};
				right[]=
				{
					{0.405,0.95},
					1
				};
				down[]=
				{
					{0.355,1},
					1
				};
			};
			class PlaneL_Black
			{
				color[] = {0,0,0,1};
				class Black
				{
					type="line";
					width=20;
					points[]=
					{
						{
							"Center",
							{-0.2,0},
							1
						},
						{
							"Center",
							{-0.05,0},
							1
						},
						{
							"Center",
							{-0.05,0.05},
							1
						},
						{},
						{
							"Center",
							{-0.002,0.002},
							1
						},
						{
							"Center",
							{0.002,0.002},
							1
						},
						{
							"Center",
							{0.002,-0.002},
							1
						},
						{
							"Center",
							{-0.002,-0.002},
							1
						},
						{
							"Center",
							{-0.002,0.002},
							1
						},
						{},
						{
							"Center",
							{0.05,0.05},
							1
						},
						{
							"Center",
							{0.05,0},
							1
						},
						{
							"Center",
							{0.2,0},
							1
						},
					};
				};
			};
			class PlaneL_Yellow
			{
				color[] = {0.097,0.085,0.003,1};
				class Yellow
				{
					type="line";
					width=10;
					points[]=
					{
						{
							"Center",
							{-0.2,0},
							1
						},
						{
							"Center",
							{-0.05,0},
							1
						},
						{
							"Center",
							{-0.05,0.05},
							1
						},
						{},
						{
							"Center",
							{-0.002,0.002},
							1
						},
						{
							"Center",
							{0.002,0.002},
							1
						},
						{
							"Center",
							{0.002,-0.002},
							1
						},
						{
							"Center",
							{-0.002,-0.002},
							1
						},
						{
							"Center",
							{-0.002,0.002},
							1
						},
						{},
						{
							"Center",
							{0.05,0.05},
							1
						},
						{
							"Center",
							{0.05,0},
							1
						},
						{
							"Center",
							{0.2,0},
							1
						},
					};
				};
			};
			class VORText1
			{
				color[]={0,0.05,0,1};
				class Text
				{
					type="text";
					source="static";
					text="VOR_1: ON";
					align="right";
					scale=1;
					pos[]=
					{
						{0.7625,0.95},
						1
					};
					right[]=
					{
						{0.8125,0.95},
						1
					};
					down[]=
					{
						{0.7625,1},
						1
					};
				};
			};
		};
	};
	class MYR_HRZ_RIGHT: MYR_HRZ_LEFT
	{
		topLeft="MFD_R_TL";
		topRight="MFD_R_TR";
		bottomLeft="MFD_R_ML";
	};
	class MYR_HRZ_CENTER
	{
		topLeft="HRZ_TL";
		topRight="HRZ_TR";
		bottomLeft="HRZ_BL";
		borderLeft=0;
		borderRight=0;
		borderTop=0;
		borderBottom=0;
		color[]={0.05,0.05,0.05,1};
		enableParallax=0;
		class material
		{
			ambient[]={10,10,10,1};
			diffuse[]={10,10,10,1};
			emissive[]={500,500,500,1};
		};
		class Bones
		{
			class Center
			{
				type="fixed";
				pos[]={0.5,0.5};
			};
			class Level0
			{
				pos0[]={0.5,0.5};
				pos10[]={0.94,0.94};
				type="horizon";
				angle=0;
			};
			class LevelP5: Level0
			{
				angle=5;
			};
			class LevelM5: Level0
			{
				angle=-5;
			};
			class LevelP10: Level0
			{
				angle=10;
			};
			class LevelM10: Level0
			{
				angle=-10;
			};
			class LevelP15: Level0
			{
				angle=15;
			};
			class LevelM15: Level0
			{
				angle=-15;
			};
			class LevelP20: Level0
			{
				angle=20;
			};
			class LevelM20: Level0
			{
				angle=-20;
			};
			class LevelP25: Level0
			{
				angle=25;
			};
			class LevelM25: Level0
			{
				angle=-25;
			};
			class LevelP30: Level0
			{
				angle=30;
			};
			class LevelM30: Level0
			{
				angle=-30;
			};
			class LevelP35: Level0
			{
				angle=35;
			};
			class LevelM35: Level0
			{
				angle=-35;
			};
			class LevelP40: Level0
			{
				angle=40;
			};
			class LevelM40: Level0
			{
				angle=-40;
			};
			class LevelP45: Level0
			{
				angle=45;
			};
			class LevelM45: Level0
			{
				angle=-45;
			};
			class LevelP50: Level0
			{
				angle=50;
			};
			class LevelM50: Level0
			{
				angle=-50;
			};
			class LevelP60: Level0
			{
				angle=60;
			};
			class LevelM60: Level0
			{
				angle=-60;
			};
			class LevelP70: Level0
			{
				angle=70;
			};
			class LevelM70: Level0
			{
				angle=-70;
			};
			class LevelP80: Level0
			{
				angle=80;
			};
			class LevelM80: Level0
			{
				angle=-80;
			};
			class LevelP90: Level0
			{
				angle=90;
			};
			class LevelM90: Level0
			{
				angle=-90;
			};
		};
		class Draw
		{
			condition="on";
			class BASE_Polygon
			{
				color[]={0,0,0,1};
				class BASE
				{					
					type="polygon";
					points[]=
					{
						{
							{ 
								{0,0},
								1
							},
							{ 
								{1,0},
								1
							},
							{ 
								{1,1},
								1
							},
							{ 	
								{0,1},
								1
							}
						}
					};
				};
			};
			class Brown_Horizon
			{
				color[]={0.006,0.004,0.001,1};
				class Brown
				{					
					type="polygon";
					points[]=
					{
						{
							{ 
								{0,0},
								1
							},
							{ 
								{1,0},
								1
							},
							{ 
								{1,1},
								1
							},
							{ 	
								{0,1},
								1
							}
						}
					};
				};
			};
			class Blue_Horizon
			{
				color[]={0.009,0.025,0.06,1};
				class Blue
				{					
					type="polygon";
					points[]=
					{
						{
							{ 
								"Level0",
								{-50,0},
								1
							},
							{ 	
								"Level0",
								{50,0},
								1
							},
							{ 
								//"Level0",
								{-50,-50},
								1
							},
							{ 
								//"Level0",
								{50,-50},
								1
							},
						}
					};
				};
			};
			class Line_Horizon
			{
				type="line";
				width=7;
				points[]=
				{
					{
						"Level0",
						{-1,0},
						1
					},
					{
						"Level0",
						{1,0},
						1
					}
				};
			};
			class Horizon
			{
				class Dimmed
				{
					class Level0
					{
						type="line";
						width=3;
						points[]=
						{
							{
								"Level0",
								{0.75,0},
								1
							},
							{
								"Level0",
								{0.1,0},
								1
							},
							{
								"Level0",
								{-0.1,0},
								1
							},
							{
								"Level0",
								{-0.75,0},
								1
							}
						};
					};
					class LevelM5: Level0
					{
						type="line";
						points[]=
						{
							{
								"LevelM5",
								{-0.235,-0.02},
								1
							},
							{
								"LevelM5",
								{-0.235,0},
								1
							},
							{},
							{
								"LevelM5",
								{-0.22,0},
								1
							},
							{
								"LevelM5",
								{-0.205,0},
								1
							},
							{},
							{
								"LevelM5",
								{-0.19,0},
								1
							},
							{
								"LevelM5",
								{-0.175,0},
								1
							},
							{},
							{
								"LevelM5",
								{-0.16,0},
								1
							},
							{
								"LevelM5",
								{-0.145,0},
								1
							},
							{},
							{
								"LevelM5",
								{-0.13,0},
								1
							},
							{
								"LevelM5",
								{-0.115,0},
								1
							},
							{},
							{
								"LevelM5",
								{-0.1,0},
								1
							},
							{
								"LevelM5",
								{-0.085000001,0},
								1
							},
							{},
							{
								"LevelM5",
								{-0.07,0},
								1
							},
							{
								"LevelM5",
								{-0.055,0},
								1
							},
							{},
							{},
							{
								"LevelM5",
								{0.235,-0.02},
								1
							},
							{
								"LevelM5",
								{0.235,0},
								1
							},
							{},
							{
								"LevelM5",
								{0.22,0},
								1
							},
							{
								"LevelM5",
								{0.205,0},
								1
							},
							{},
							{
								"LevelM5",
								{0.19,0},
								1
							},
							{
								"LevelM5",
								{0.175,0},
								1
							},
							{},
							{
								"LevelM5",
								{0.16,0},
								1
							},
							{
								"LevelM5",
								{0.145,0},
								1
							},
							{},
							{
								"LevelM5",
								{0.13,0},
								1
							},
							{
								"LevelM5",
								{0.115,0},
								1
							},
							{},
							{
								"LevelM5",
								{0.1,0},
								1
							},
							{
								"LevelM5",
								{0.085000001,0},
								1
							},
							{},
							{
								"LevelM5",
								{0.07,0},
								1
							},
							{
								"LevelM5",
								{0.055,0},
								1
							},
							{}
						};
					};
					class VALM_1_5
					{
						type="text";
						source="static";
						text=-5;
						align="left";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelM5",
							{-0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM5",
							{-0.2,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM5",
							{-0.25999999,0.017999999},
							1
						};
					};
					class VALM_1_5_R
					{
						type="text";
						source="static";
						text=-5;
						align="right";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelM5",
							{0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM5",
							{0.31999999,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM5",
							{0.25999999,0.017999999},
							1
						};
					};
					class LevelP5: Level0
					{
						type="line";
						points[]=
						{
							{
								"LevelP5",
								{"-0.22-0.015",0.02},
								1
							},
							{
								"LevelP5",
								{"-0.22-0.015",0},
								1
							},
							{
								"LevelP5",
								{-0.059999999,0},
								1
							},
							{},
							{
								"LevelP5",
								{0.059999999,0},
								1
							},
							{
								"LevelP5",
								{"+0.22+0.015",0},
								1
							},
							{
								"LevelP5",
								{"+0.22+0.015",0.02},
								1
							}
						};
					};
					class VALP_1_5
					{
						type="text";
						source="static";
						text="5";
						align="left";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelP5",
							{-0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP5",
							{-0.2,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP5",
							{-0.25999999,0.033},
							1
						};
					};
					class VALP_1_5_R
					{
						type="text";
						source="static";
						text="5";
						align="right";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelP5",
							{0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP5",
							{0.31999999,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP5",
							{0.25999999,0.033},
							1
						};
					};
					class LevelM10: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelM10",
								{-0.235,-0.02},
								1
							},
							
							{
								"LevelM10",
								{-0.235,0},
								1
							},
							{},
							
							{
								"LevelM10",
								{-0.22,0},
								1
							},
							
							{
								"LevelM10",
								{-0.205,0},
								1
							},
							{},
							
							{
								"LevelM10",
								{-0.19,0},
								1
							},
							
							{
								"LevelM10",
								{-0.175,0},
								1
							},
							{},
							
							{
								"LevelM10",
								{-0.16,0},
								1
							},
							
							{
								"LevelM10",
								{-0.145,0},
								1
							},
							{},
							
							{
								"LevelM10",
								{-0.13,0},
								1
							},
							
							{
								"LevelM10",
								{-0.115,0},
								1
							},
							{},
							
							{
								"LevelM10",
								{-0.1,0},
								1
							},
							
							{
								"LevelM10",
								{-0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM10",
								{-0.07,0},
								1
							},
							
							{
								"LevelM10",
								{-0.055,0},
								1
							},
							{},
							{},
							
							{
								"LevelM10",
								{0.235,-0.02},
								1
							},
							
							{
								"LevelM10",
								{0.235,0},
								1
							},
							{},
							
							{
								"LevelM10",
								{0.22,0},
								1
							},
							
							{
								"LevelM10",
								{0.205,0},
								1
							},
							{},
							
							{
								"LevelM10",
								{0.19,0},
								1
							},
							
							{
								"LevelM10",
								{0.175,0},
								1
							},
							{},
							
							{
								"LevelM10",
								{0.16,0},
								1
							},
							
							{
								"LevelM10",
								{0.145,0},
								1
							},
							{},
							
							{
								"LevelM10",
								{0.13,0},
								1
							},
							
							{
								"LevelM10",
								{0.115,0},
								1
							},
							{},
							
							{
								"LevelM10",
								{0.1,0},
								1
							},
							
							{
								"LevelM10",
								{0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM10",
								{0.07,0},
								1
							},
							
							{
								"LevelM10",
								{0.055,0},
								1
							},
							{}
						};
					};
					class VALM_1_10
					{
						type="text";
						source="static";
						text=-10;
						align="left";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelM10",
							{-0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM10",
							{-0.2,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM10",
							{-0.25999999,0.017999999},
							1
						};
					};
					class VALM_1_10_R
					{
						type="text";
						source="static";
						text=-10;
						align="right";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelM10",
							{0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM10",
							{0.31999999,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM10",
							{0.25999999,0.017999999},
							1
						};
					};
					class LevelP10: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelP10",
								
								{
									"-0.22-0.015",
									0.02
								},
								1
							},
							
							{
								"LevelP10",
								
								{
									"-0.22-0.015",
									0
								},
								1
							},
							
							{
								"LevelP10",
								{-0.059999999,0},
								1
							},
							{},
							
							{
								"LevelP10",
								{0.059999999,0},
								1
							},
							
							{
								"LevelP10",
								
								{
									"+0.22+0.015",
									0
								},
								1
							},
							
							{
								"LevelP10",
								
								{
									"+0.22+0.015",
									0.02
								},
								1
							}
						};
					};
					class VALP_1_10
					{
						type="text";
						source="static";
						text="10";
						align="left";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelP10",
							{-0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP10",
							{-0.2,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP10",
							{-0.25999999,0.033},
							1
						};
					};
					class VALP_1_10_R
					{
						type="text";
						source="static";
						text="10";
						align="right";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelP10",
							{0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP10",
							{0.31999999,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP10",
							{0.25999999,0.033},
							1
						};
					};
					class LevelM15: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelM15",
								{-0.235,-0.02},
								1
							},
							
							{
								"LevelM15",
								{-0.235,0},
								1
							},
							{},
							
							{
								"LevelM15",
								{-0.22,0},
								1
							},
							
							{
								"LevelM15",
								{-0.205,0},
								1
							},
							{},
							
							{
								"LevelM15",
								{-0.19,0},
								1
							},
							
							{
								"LevelM15",
								{-0.175,0},
								1
							},
							{},
							
							{
								"LevelM15",
								{-0.16,0},
								1
							},
							
							{
								"LevelM15",
								{-0.145,0},
								1
							},
							{},
							
							{
								"LevelM15",
								{-0.13,0},
								1
							},
							
							{
								"LevelM15",
								{-0.115,0},
								1
							},
							{},
							
							{
								"LevelM15",
								{-0.1,0},
								1
							},
							
							{
								"LevelM15",
								{-0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM15",
								{-0.07,0},
								1
							},
							
							{
								"LevelM15",
								{-0.055,0},
								1
							},
							{},
							{},
							
							{
								"LevelM15",
								{0.235,-0.02},
								1
							},
							
							{
								"LevelM15",
								{0.235,0},
								1
							},
							{},
							
							{
								"LevelM15",
								{0.22,0},
								1
							},
							
							{
								"LevelM15",
								{0.205,0},
								1
							},
							{},
							
							{
								"LevelM15",
								{0.19,0},
								1
							},
							
							{
								"LevelM15",
								{0.175,0},
								1
							},
							{},
							
							{
								"LevelM15",
								{0.16,0},
								1
							},
							
							{
								"LevelM15",
								{0.145,0},
								1
							},
							{},
							
							{
								"LevelM15",
								{0.13,0},
								1
							},
							
							{
								"LevelM15",
								{0.115,0},
								1
							},
							{},
							
							{
								"LevelM15",
								{0.1,0},
								1
							},
							
							{
								"LevelM15",
								{0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM15",
								{0.07,0},
								1
							},
							
							{
								"LevelM15",
								{0.055,0},
								1
							},
							{}
						};
					};
					class VALM_1_15
					{
						type="text";
						source="static";
						text=-15;
						align="left";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelM15",
							{-0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM15",
							{-0.2,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM15",
							{-0.25999999,0.017999999},
							1
						};
					};
					class VALM_1_15_R
					{
						type="text";
						source="static";
						text=-15;
						align="right";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelM15",
							{0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM15",
							{0.31999999,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM15",
							{0.25999999,0.017999999},
							1
						};
					};
					class LevelP15: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelP15",
								
								{
									"-0.22-0.015",
									0.02
								},
								1
							},
							
							{
								"LevelP15",
								
								{
									"-0.22-0.015",
									0
								},
								1
							},
							
							{
								"LevelP15",
								{-0.059999999,0},
								1
							},
							{},
							
							{
								"LevelP15",
								{0.059999999,0},
								1
							},
							
							{
								"LevelP15",
								
								{
									"+0.22+0.015",
									0
								},
								1
							},
							
							{
								"LevelP15",
								
								{
									"+0.22+0.015",
									0.02
								},
								1
							}
						};
					};
					class VALP_1_15
					{
						type="text";
						source="static";
						text="15";
						align="left";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelP15",
							{-0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP15",
							{-0.2,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP15",
							{-0.25999999,0.033},
							1
						};
					};
					class VALP_1_15_R
					{
						type="text";
						source="static";
						text="15";
						align="right";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelP15",
							{0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP15",
							{0.31999999,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP15",
							{0.25999999,0.033},
							1
						};
					};
					class LevelM20: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelM20",
								{-0.235,-0.02},
								1
							},
							
							{
								"LevelM20",
								{-0.235,0},
								1
							},
							{},
							
							{
								"LevelM20",
								{-0.22,0},
								1
							},
							
							{
								"LevelM20",
								{-0.205,0},
								1
							},
							{},
							
							{
								"LevelM20",
								{-0.19,0},
								1
							},
							
							{
								"LevelM20",
								{-0.175,0},
								1
							},
							{},
							
							{
								"LevelM20",
								{-0.16,0},
								1
							},
							
							{
								"LevelM20",
								{-0.145,0},
								1
							},
							{},
							
							{
								"LevelM20",
								{-0.13,0},
								1
							},
							
							{
								"LevelM20",
								{-0.115,0},
								1
							},
							{},
							
							{
								"LevelM20",
								{-0.1,0},
								1
							},
							
							{
								"LevelM20",
								{-0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM20",
								{-0.07,0},
								1
							},
							
							{
								"LevelM20",
								{-0.055,0},
								1
							},
							{},
							{},
							
							{
								"LevelM20",
								{0.235,-0.02},
								1
							},
							
							{
								"LevelM20",
								{0.235,0},
								1
							},
							{},
							
							{
								"LevelM20",
								{0.22,0},
								1
							},
							
							{
								"LevelM20",
								{0.205,0},
								1
							},
							{},
							
							{
								"LevelM20",
								{0.19,0},
								1
							},
							
							{
								"LevelM20",
								{0.175,0},
								1
							},
							{},
							
							{
								"LevelM20",
								{0.16,0},
								1
							},
							
							{
								"LevelM20",
								{0.145,0},
								1
							},
							{},
							
							{
								"LevelM20",
								{0.13,0},
								1
							},
							
							{
								"LevelM20",
								{0.115,0},
								1
							},
							{},
							
							{
								"LevelM20",
								{0.1,0},
								1
							},
							
							{
								"LevelM20",
								{0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM20",
								{0.07,0},
								1
							},
							
							{
								"LevelM20",
								{0.055,0},
								1
							},
							{}
						};
					};
					class VALM_1_20
					{
						type="text";
						source="static";
						text=-20;
						align="left";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelM20",
							{-0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM20",
							{-0.2,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM20",
							{-0.25999999,0.017999999},
							1
						};
					};
					class VALM_1_20_R
					{
						type="text";
						source="static";
						text=-20;
						align="right";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelM20",
							{0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM20",
							{0.31999999,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM20",
							{0.25999999,0.017999999},
							1
						};
					};
					class LevelP20: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelP20",
								
								{
									"-0.22-0.015",
									0.02
								},
								1
							},
							
							{
								"LevelP20",
								
								{
									"-0.22-0.015",
									0
								},
								1
							},
							
							{
								"LevelP20",
								{-0.059999999,0},
								1
							},
							{},
							
							{
								"LevelP20",
								{0.059999999,0},
								1
							},
							
							{
								"LevelP20",
								
								{
									"+0.22+0.015",
									0
								},
								1
							},
							
							{
								"LevelP20",
								
								{
									"+0.22+0.015",
									0.02
								},
								1
							}
						};
					};
					class VALP_1_20
					{
						type="text";
						source="static";
						text="20";
						align="left";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelP20",
							{-0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP20",
							{-0.2,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP20",
							{-0.25999999,0.033},
							1
						};
					};
					class VALP_1_20_R
					{
						type="text";
						source="static";
						text="20";
						align="right";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelP20",
							{0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP20",
							{0.31999999,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP20",
							{0.25999999,0.033},
							1
						};
					};
					class LevelM25: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelM25",
								{-0.235,-0.02},
								1
							},
							
							{
								"LevelM25",
								{-0.235,0},
								1
							},
							{},
							
							{
								"LevelM25",
								{-0.22,0},
								1
							},
							
							{
								"LevelM25",
								{-0.205,0},
								1
							},
							{},
							
							{
								"LevelM25",
								{-0.19,0},
								1
							},
							
							{
								"LevelM25",
								{-0.175,0},
								1
							},
							{},
							
							{
								"LevelM25",
								{-0.16,0},
								1
							},
							
							{
								"LevelM25",
								{-0.145,0},
								1
							},
							{},
							
							{
								"LevelM25",
								{-0.13,0},
								1
							},
							
							{
								"LevelM25",
								{-0.115,0},
								1
							},
							{},
							
							{
								"LevelM25",
								{-0.1,0},
								1
							},
							
							{
								"LevelM25",
								{-0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM25",
								{-0.07,0},
								1
							},
							
							{
								"LevelM25",
								{-0.055,0},
								1
							},
							{},
							{},
							
							{
								"LevelM25",
								{0.235,-0.02},
								1
							},
							
							{
								"LevelM25",
								{0.235,0},
								1
							},
							{},
							
							{
								"LevelM25",
								{0.22,0},
								1
							},
							
							{
								"LevelM25",
								{0.205,0},
								1
							},
							{},
							
							{
								"LevelM25",
								{0.19,0},
								1
							},
							
							{
								"LevelM25",
								{0.175,0},
								1
							},
							{},
							
							{
								"LevelM25",
								{0.16,0},
								1
							},
							
							{
								"LevelM25",
								{0.145,0},
								1
							},
							{},
							
							{
								"LevelM25",
								{0.13,0},
								1
							},
							
							{
								"LevelM25",
								{0.115,0},
								1
							},
							{},
							
							{
								"LevelM25",
								{0.1,0},
								1
							},
							
							{
								"LevelM25",
								{0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM25",
								{0.07,0},
								1
							},
							
							{
								"LevelM25",
								{0.055,0},
								1
							},
							{}
						};
					};
					class VALM_1_25
					{
						type="text";
						source="static";
						text=-25;
						align="left";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelM25",
							{-0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM25",
							{-0.2,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM25",
							{-0.25999999,0.017999999},
							1
						};
					};
					class VALM_1_25_R
					{
						type="text";
						source="static";
						text=-25;
						align="right";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelM25",
							{0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM25",
							{0.31999999,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM25",
							{0.25999999,0.017999999},
							1
						};
					};
					class LevelP25: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelP25",
								
								{
									"-0.22-0.015",
									0.02
								},
								1
							},
							
							{
								"LevelP25",
								
								{
									"-0.22-0.015",
									0
								},
								1
							},
							
							{
								"LevelP25",
								{-0.059999999,0},
								1
							},
							{},
							
							{
								"LevelP25",
								{0.059999999,0},
								1
							},
							
							{
								"LevelP25",
								
								{
									"+0.22+0.015",
									0
								},
								1
							},
							
							{
								"LevelP25",
								
								{
									"+0.22+0.015",
									0.02
								},
								1
							}
						};
					};
					class VALP_1_25
					{
						type="text";
						source="static";
						text="25";
						align="left";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelP25",
							{-0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP25",
							{-0.2,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP25",
							{-0.25999999,0.033},
							1
						};
					};
					class VALP_1_25_R
					{
						type="text";
						source="static";
						text="25";
						align="right";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelP25",
							{0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP25",
							{0.31999999,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP25",
							{0.25999999,0.033},
							1
						};
					};
					class LevelM30: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelM30",
								{-0.235,-0.02},
								1
							},
							
							{
								"LevelM30",
								{-0.235,0},
								1
							},
							{},
							
							{
								"LevelM30",
								{-0.22,0},
								1
							},
							
							{
								"LevelM30",
								{-0.205,0},
								1
							},
							{},
							
							{
								"LevelM30",
								{-0.19,0},
								1
							},
							
							{
								"LevelM30",
								{-0.175,0},
								1
							},
							{},
							
							{
								"LevelM30",
								{-0.16,0},
								1
							},
							
							{
								"LevelM30",
								{-0.145,0},
								1
							},
							{},
							
							{
								"LevelM30",
								{-0.13,0},
								1
							},
							
							{
								"LevelM30",
								{-0.115,0},
								1
							},
							{},
							
							{
								"LevelM30",
								{-0.1,0},
								1
							},
							
							{
								"LevelM30",
								{-0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM30",
								{-0.07,0},
								1
							},
							
							{
								"LevelM30",
								{-0.055,0},
								1
							},
							{},
							{},
							
							{
								"LevelM30",
								{0.235,-0.02},
								1
							},
							
							{
								"LevelM30",
								{0.235,0},
								1
							},
							{},
							
							{
								"LevelM30",
								{0.22,0},
								1
							},
							
							{
								"LevelM30",
								{0.205,0},
								1
							},
							{},
							
							{
								"LevelM30",
								{0.19,0},
								1
							},
							
							{
								"LevelM30",
								{0.175,0},
								1
							},
							{},
							
							{
								"LevelM30",
								{0.16,0},
								1
							},
							
							{
								"LevelM30",
								{0.145,0},
								1
							},
							{},
							
							{
								"LevelM30",
								{0.13,0},
								1
							},
							
							{
								"LevelM30",
								{0.115,0},
								1
							},
							{},
							
							{
								"LevelM30",
								{0.1,0},
								1
							},
							
							{
								"LevelM30",
								{0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM30",
								{0.07,0},
								1
							},
							
							{
								"LevelM30",
								{0.055,0},
								1
							},
							{}
						};
					};
					class VALM_1_30
					{
						type="text";
						source="static";
						text=-30;
						align="left";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelM30",
							{-0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM30",
							{-0.2,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM30",
							{-0.25999999,0.017999999},
							1
						};
					};
					class VALM_1_30_R
					{
						type="text";
						source="static";
						text=-30;
						align="right";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelM30",
							{0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM30",
							{0.31999999,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM30",
							{0.25999999,0.017999999},
							1
						};
					};
					class LevelP30: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelP30",
								
								{
									"-0.22-0.015",
									0.02
								},
								1
							},
							
							{
								"LevelP30",
								
								{
									"-0.22-0.015",
									0
								},
								1
							},
							
							{
								"LevelP30",
								{-0.059999999,0},
								1
							},
							{},
							
							{
								"LevelP30",
								{0.059999999,0},
								1
							},
							
							{
								"LevelP30",
								
								{
									"+0.22+0.015",
									0
								},
								1
							},
							
							{
								"LevelP30",
								
								{
									"+0.22+0.015",
									0.02
								},
								1
							}
						};
					};
					class VALP_1_30
					{
						type="text";
						source="static";
						text="30";
						align="left";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelP30",
							{-0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP30",
							{-0.2,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP30",
							{-0.25999999,0.033},
							1
						};
					};
					class VALP_1_30_R
					{
						type="text";
						source="static";
						text="30";
						align="right";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelP30",
							{0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP30",
							{0.31999999,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP30",
							{0.25999999,0.033},
							1
						};
					};
					class LevelM35: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelM35",
								{-0.235,-0.02},
								1
							},
							
							{
								"LevelM35",
								{-0.235,0},
								1
							},
							{},
							
							{
								"LevelM35",
								{-0.22,0},
								1
							},
							
							{
								"LevelM35",
								{-0.205,0},
								1
							},
							{},
							
							{
								"LevelM35",
								{-0.19,0},
								1
							},
							
							{
								"LevelM35",
								{-0.175,0},
								1
							},
							{},
							
							{
								"LevelM35",
								{-0.16,0},
								1
							},
							
							{
								"LevelM35",
								{-0.145,0},
								1
							},
							{},
							
							{
								"LevelM35",
								{-0.13,0},
								1
							},
							
							{
								"LevelM35",
								{-0.115,0},
								1
							},
							{},
							
							{
								"LevelM35",
								{-0.1,0},
								1
							},
							
							{
								"LevelM35",
								{-0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM35",
								{-0.07,0},
								1
							},
							
							{
								"LevelM35",
								{-0.055,0},
								1
							},
							{},
							{},
							
							{
								"LevelM35",
								{0.235,-0.02},
								1
							},
							
							{
								"LevelM35",
								{0.235,0},
								1
							},
							{},
							
							{
								"LevelM35",
								{0.22,0},
								1
							},
							
							{
								"LevelM35",
								{0.205,0},
								1
							},
							{},
							
							{
								"LevelM35",
								{0.19,0},
								1
							},
							
							{
								"LevelM35",
								{0.175,0},
								1
							},
							{},
							
							{
								"LevelM35",
								{0.16,0},
								1
							},
							
							{
								"LevelM35",
								{0.145,0},
								1
							},
							{},
							
							{
								"LevelM35",
								{0.13,0},
								1
							},
							
							{
								"LevelM35",
								{0.115,0},
								1
							},
							{},
							
							{
								"LevelM35",
								{0.1,0},
								1
							},
							
							{
								"LevelM35",
								{0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM35",
								{0.07,0},
								1
							},
							
							{
								"LevelM35",
								{0.055,0},
								1
							},
							{}
						};
					};
					class VALM_1_35
					{
						type="text";
						source="static";
						text=-35;
						align="left";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelM35",
							{-0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM35",
							{-0.2,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM35",
							{-0.25999999,0.017999999},
							1
						};
					};
					class VALM_1_35_R
					{
						type="text";
						source="static";
						text=-35;
						align="right";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelM35",
							{0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM35",
							{0.31999999,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM35",
							{0.25999999,0.017999999},
							1
						};
					};
					class LevelP35: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelP35",
								
								{
									"-0.22-0.015",
									0.02
								},
								1
							},
							
							{
								"LevelP35",
								
								{
									"-0.22-0.015",
									0
								},
								1
							},
							
							{
								"LevelP35",
								{-0.059999999,0},
								1
							},
							{},
							
							{
								"LevelP35",
								{0.059999999,0},
								1
							},
							
							{
								"LevelP35",
								
								{
									"+0.22+0.015",
									0
								},
								1
							},
							
							{
								"LevelP35",
								
								{
									"+0.22+0.015",
									0.02
								},
								1
							}
						};
					};
					class VALP_1_35
					{
						type="text";
						source="static";
						text="35";
						align="left";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelP35",
							{-0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP35",
							{-0.2,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP35",
							{-0.25999999,0.033},
							1
						};
					};
					class VALP_1_35_R
					{
						type="text";
						source="static";
						text="35";
						align="right";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelP35",
							{0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP35",
							{0.31999999,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP35",
							{0.25999999,0.033},
							1
						};
					};
					class LevelM40: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelM40",
								{-0.235,-0.02},
								1
							},
							
							{
								"LevelM40",
								{-0.235,0},
								1
							},
							{},
							
							{
								"LevelM40",
								{-0.22,0},
								1
							},
							
							{
								"LevelM40",
								{-0.205,0},
								1
							},
							{},
							
							{
								"LevelM40",
								{-0.19,0},
								1
							},
							
							{
								"LevelM40",
								{-0.175,0},
								1
							},
							{},
							
							{
								"LevelM40",
								{-0.16,0},
								1
							},
							
							{
								"LevelM40",
								{-0.145,0},
								1
							},
							{},
							
							{
								"LevelM40",
								{-0.13,0},
								1
							},
							
							{
								"LevelM40",
								{-0.115,0},
								1
							},
							{},
							
							{
								"LevelM40",
								{-0.1,0},
								1
							},
							
							{
								"LevelM40",
								{-0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM40",
								{-0.07,0},
								1
							},
							
							{
								"LevelM40",
								{-0.055,0},
								1
							},
							{},
							{},
							
							{
								"LevelM40",
								{0.235,-0.02},
								1
							},
							
							{
								"LevelM40",
								{0.235,0},
								1
							},
							{},
							
							{
								"LevelM40",
								{0.22,0},
								1
							},
							
							{
								"LevelM40",
								{0.205,0},
								1
							},
							{},
							
							{
								"LevelM40",
								{0.19,0},
								1
							},
							
							{
								"LevelM40",
								{0.175,0},
								1
							},
							{},
							
							{
								"LevelM40",
								{0.16,0},
								1
							},
							
							{
								"LevelM40",
								{0.145,0},
								1
							},
							{},
							
							{
								"LevelM40",
								{0.13,0},
								1
							},
							
							{
								"LevelM40",
								{0.115,0},
								1
							},
							{},
							
							{
								"LevelM40",
								{0.1,0},
								1
							},
							
							{
								"LevelM40",
								{0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM40",
								{0.07,0},
								1
							},
							
							{
								"LevelM40",
								{0.055,0},
								1
							},
							{}
						};
					};
					class VALM_1_40
					{
						type="text";
						source="static";
						text=-40;
						align="left";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelM40",
							{-0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM40",
							{-0.2,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM40",
							{-0.25999999,0.017999999},
							1
						};
					};
					class VALM_1_40_R
					{
						type="text";
						source="static";
						text=-40;
						align="right";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelM40",
							{0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM40",
							{0.31999999,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM40",
							{0.25999999,0.017999999},
							1
						};
					};
					class LevelP40: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelP40",
								
								{
									"-0.22-0.015",
									0.02
								},
								1
							},
							
							{
								"LevelP40",
								
								{
									"-0.22-0.015",
									0
								},
								1
							},
							
							{
								"LevelP40",
								{-0.059999999,0},
								1
							},
							{},
							
							{
								"LevelP40",
								{0.059999999,0},
								1
							},
							
							{
								"LevelP40",
								
								{
									"+0.22+0.015",
									0
								},
								1
							},
							
							{
								"LevelP40",
								
								{
									"+0.22+0.015",
									0.02
								},
								1
							}
						};
					};
					class VALP_1_40
					{
						type="text";
						source="static";
						text="40";
						align="left";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelP40",
							{-0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP40",
							{-0.2,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP40",
							{-0.25999999,0.033},
							1
						};
					};
					class VALP_1_40_R
					{
						type="text";
						source="static";
						text="40";
						align="right";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelP40",
							{0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP40",
							{0.31999999,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP40",
							{0.25999999,0.033},
							1
						};
					};
					class LevelM45: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelM45",
								{-0.235,-0.02},
								1
							},
							
							{
								"LevelM45",
								{-0.235,0},
								1
							},
							{},
							
							{
								"LevelM45",
								{-0.22,0},
								1
							},
							
							{
								"LevelM45",
								{-0.205,0},
								1
							},
							{},
							
							{
								"LevelM45",
								{-0.19,0},
								1
							},
							
							{
								"LevelM45",
								{-0.175,0},
								1
							},
							{},
							
							{
								"LevelM45",
								{-0.16,0},
								1
							},
							
							{
								"LevelM45",
								{-0.145,0},
								1
							},
							{},
							
							{
								"LevelM45",
								{-0.13,0},
								1
							},
							
							{
								"LevelM45",
								{-0.115,0},
								1
							},
							{},
							
							{
								"LevelM45",
								{-0.1,0},
								1
							},
							
							{
								"LevelM45",
								{-0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM45",
								{-0.07,0},
								1
							},
							
							{
								"LevelM45",
								{-0.055,0},
								1
							},
							{},
							{},
							
							{
								"LevelM45",
								{0.235,-0.02},
								1
							},
							
							{
								"LevelM45",
								{0.235,0},
								1
							},
							{},
							
							{
								"LevelM45",
								{0.22,0},
								1
							},
							
							{
								"LevelM45",
								{0.205,0},
								1
							},
							{},
							
							{
								"LevelM45",
								{0.19,0},
								1
							},
							
							{
								"LevelM45",
								{0.175,0},
								1
							},
							{},
							
							{
								"LevelM45",
								{0.16,0},
								1
							},
							
							{
								"LevelM45",
								{0.145,0},
								1
							},
							{},
							
							{
								"LevelM45",
								{0.13,0},
								1
							},
							
							{
								"LevelM45",
								{0.115,0},
								1
							},
							{},
							
							{
								"LevelM45",
								{0.1,0},
								1
							},
							
							{
								"LevelM45",
								{0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM45",
								{0.07,0},
								1
							},
							
							{
								"LevelM45",
								{0.055,0},
								1
							},
							{}
						};
					};
					class VALM_1_45
					{
						type="text";
						source="static";
						text=-45;
						align="left";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelM45",
							{-0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM45",
							{-0.2,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM45",
							{-0.25999999,0.017999999},
							1
						};
					};
					class VALM_1_45_R
					{
						type="text";
						source="static";
						text=-45;
						align="right";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelM45",
							{0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM45",
							{0.31999999,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM45",
							{0.25999999,0.017999999},
							1
						};
					};
					class LevelP45: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelP45",
								
								{
									"-0.22-0.015",
									0.02
								},
								1
							},
							
							{
								"LevelP45",
								
								{
									"-0.22-0.015",
									0
								},
								1
							},
							
							{
								"LevelP45",
								{-0.059999999,0},
								1
							},
							{},
							
							{
								"LevelP45",
								{0.059999999,0},
								1
							},
							
							{
								"LevelP45",
								
								{
									"+0.22+0.015",
									0
								},
								1
							},
							
							{
								"LevelP45",
								
								{
									"+0.22+0.015",
									0.02
								},
								1
							}
						};
					};
					class VALP_1_45
					{
						type="text";
						source="static";
						text="45";
						align="left";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelP45",
							{-0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP45",
							{-0.2,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP45",
							{-0.25999999,0.033},
							1
						};
					};
					class VALP_1_45_R
					{
						type="text";
						source="static";
						text="45";
						align="right";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelP45",
							{0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP45",
							{0.31999999,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP45",
							{0.25999999,0.033},
							1
						};
					};
					class LevelM50: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelM50",
								{-0.235,-0.02},
								1
							},
							
							{
								"LevelM50",
								{-0.235,0},
								1
							},
							{},
							
							{
								"LevelM50",
								{-0.22,0},
								1
							},
							
							{
								"LevelM50",
								{-0.205,0},
								1
							},
							{},
							
							{
								"LevelM50",
								{-0.19,0},
								1
							},
							
							{
								"LevelM50",
								{-0.175,0},
								1
							},
							{},
							
							{
								"LevelM50",
								{-0.16,0},
								1
							},
							
							{
								"LevelM50",
								{-0.145,0},
								1
							},
							{},
							
							{
								"LevelM50",
								{-0.13,0},
								1
							},
							
							{
								"LevelM50",
								{-0.115,0},
								1
							},
							{},
							
							{
								"LevelM50",
								{-0.1,0},
								1
							},
							
							{
								"LevelM50",
								{-0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM50",
								{-0.07,0},
								1
							},
							
							{
								"LevelM50",
								{-0.055,0},
								1
							},
							{},
							{},
							
							{
								"LevelM50",
								{0.235,-0.02},
								1
							},
							
							{
								"LevelM50",
								{0.235,0},
								1
							},
							{},
							
							{
								"LevelM50",
								{0.22,0},
								1
							},
							
							{
								"LevelM50",
								{0.205,0},
								1
							},
							{},
							
							{
								"LevelM50",
								{0.19,0},
								1
							},
							
							{
								"LevelM50",
								{0.175,0},
								1
							},
							{},
							
							{
								"LevelM50",
								{0.16,0},
								1
							},
							
							{
								"LevelM50",
								{0.145,0},
								1
							},
							{},
							
							{
								"LevelM50",
								{0.13,0},
								1
							},
							
							{
								"LevelM50",
								{0.115,0},
								1
							},
							{},
							
							{
								"LevelM50",
								{0.1,0},
								1
							},
							
							{
								"LevelM50",
								{0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM50",
								{0.07,0},
								1
							},
							
							{
								"LevelM50",
								{0.055,0},
								1
							},
							{}
						};
					};
					class VALM_1_50
					{
						type="text";
						source="static";
						text=-50;
						align="left";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelM50",
							{-0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM50",
							{-0.2,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM50",
							{-0.25999999,0.017999999},
							1
						};
					};
					class VALM_1_50_R
					{
						type="text";
						source="static";
						text=-50;
						align="right";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelM50",
							{0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM50",
							{0.31999999,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM50",
							{0.25999999,0.017999999},
							1
						};
					};
					class LevelP50: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelP50",
								
								{
									"-0.22-0.015",
									0.02
								},
								1
							},
							
							{
								"LevelP50",
								
								{
									"-0.22-0.015",
									0
								},
								1
							},
							
							{
								"LevelP50",
								{-0.059999999,0},
								1
							},
							{},
							
							{
								"LevelP50",
								{0.059999999,0},
								1
							},
							
							{
								"LevelP50",
								
								{
									"+0.22+0.015",
									0
								},
								1
							},
							
							{
								"LevelP50",
								
								{
									"+0.22+0.015",
									0.02
								},
								1
							}
						};
					};
					class VALP_1_50
					{
						type="text";
						source="static";
						text="50";
						align="left";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelP50",
							{-0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP50",
							{-0.2,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP50",
							{-0.25999999,0.033},
							1
						};
					};
					class VALP_1_50_R
					{
						type="text";
						source="static";
						text="50";
						align="right";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelP50",
							{0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP50",
							{0.31999999,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP50",
							{0.25999999,0.033},
							1
						};
					};
					class LevelM60: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelM60",
								{-0.235,-0.02},
								1
							},
							
							{
								"LevelM60",
								{-0.235,0},
								1
							},
							{},
							
							{
								"LevelM60",
								{-0.22,0},
								1
							},
							
							{
								"LevelM60",
								{-0.205,0},
								1
							},
							{},
							
							{
								"LevelM60",
								{-0.19,0},
								1
							},
							
							{
								"LevelM60",
								{-0.175,0},
								1
							},
							{},
							
							{
								"LevelM60",
								{-0.16,0},
								1
							},
							
							{
								"LevelM60",
								{-0.145,0},
								1
							},
							{},
							
							{
								"LevelM60",
								{-0.13,0},
								1
							},
							
							{
								"LevelM60",
								{-0.115,0},
								1
							},
							{},
							
							{
								"LevelM60",
								{-0.1,0},
								1
							},
							
							{
								"LevelM60",
								{-0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM60",
								{-0.07,0},
								1
							},
							
							{
								"LevelM60",
								{-0.055,0},
								1
							},
							{},
							{},
							
							{
								"LevelM60",
								{0.235,-0.02},
								1
							},
							
							{
								"LevelM60",
								{0.235,0},
								1
							},
							{},
							
							{
								"LevelM60",
								{0.22,0},
								1
							},
							
							{
								"LevelM60",
								{0.205,0},
								1
							},
							{},
							
							{
								"LevelM60",
								{0.19,0},
								1
							},
							
							{
								"LevelM60",
								{0.175,0},
								1
							},
							{},
							
							{
								"LevelM60",
								{0.16,0},
								1
							},
							
							{
								"LevelM60",
								{0.145,0},
								1
							},
							{},
							
							{
								"LevelM60",
								{0.13,0},
								1
							},
							
							{
								"LevelM60",
								{0.115,0},
								1
							},
							{},
							
							{
								"LevelM60",
								{0.1,0},
								1
							},
							
							{
								"LevelM60",
								{0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM60",
								{0.07,0},
								1
							},
							
							{
								"LevelM60",
								{0.055,0},
								1
							},
							{}
						};
					};
					class VALM_1_60
					{
						type="text";
						source="static";
						text=-60;
						align="left";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelM60",
							{-0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM60",
							{-0.2,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM60",
							{-0.25999999,0.017999999},
							1
						};
					};
					class VALM_1_60_R
					{
						type="text";
						source="static";
						text=-60;
						align="right";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelM60",
							{0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM60",
							{0.31999999,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM60",
							{0.25999999,0.017999999},
							1
						};
					};
					class LevelP60: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelP60",
								
								{
									"-0.22-0.015",
									0.02
								},
								1
							},
							
							{
								"LevelP60",
								
								{
									"-0.22-0.015",
									0
								},
								1
							},
							
							{
								"LevelP60",
								{-0.059999999,0},
								1
							},
							{},
							
							{
								"LevelP60",
								{0.059999999,0},
								1
							},
							
							{
								"LevelP60",
								
								{
									"+0.22+0.015",
									0
								},
								1
							},
							
							{
								"LevelP60",
								
								{
									"+0.22+0.015",
									0.02
								},
								1
							}
						};
					};
					class VALP_1_60
					{
						type="text";
						source="static";
						text="60";
						align="left";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelP60",
							{-0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP60",
							{-0.2,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP60",
							{-0.25999999,0.033},
							1
						};
					};
					class VALP_1_60_R
					{
						type="text";
						source="static";
						text="60";
						align="right";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelP60",
							{0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP60",
							{0.31999999,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP60",
							{0.25999999,0.033},
							1
						};
					};
					class LevelM70: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelM70",
								{-0.235,-0.02},
								1
							},
							
							{
								"LevelM70",
								{-0.235,0},
								1
							},
							{},
							
							{
								"LevelM70",
								{-0.22,0},
								1
							},
							
							{
								"LevelM70",
								{-0.205,0},
								1
							},
							{},
							
							{
								"LevelM70",
								{-0.19,0},
								1
							},
							
							{
								"LevelM70",
								{-0.175,0},
								1
							},
							{},
							
							{
								"LevelM70",
								{-0.16,0},
								1
							},
							
							{
								"LevelM70",
								{-0.145,0},
								1
							},
							{},
							
							{
								"LevelM70",
								{-0.13,0},
								1
							},
							
							{
								"LevelM70",
								{-0.115,0},
								1
							},
							{},
							
							{
								"LevelM70",
								{-0.1,0},
								1
							},
							
							{
								"LevelM70",
								{-0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM70",
								{-0.07,0},
								1
							},
							
							{
								"LevelM70",
								{-0.055,0},
								1
							},
							{},
							{},
							
							{
								"LevelM70",
								{0.235,-0.02},
								1
							},
							
							{
								"LevelM70",
								{0.235,0},
								1
							},
							{},
							
							{
								"LevelM70",
								{0.22,0},
								1
							},
							
							{
								"LevelM70",
								{0.205,0},
								1
							},
							{},
							
							{
								"LevelM70",
								{0.19,0},
								1
							},
							
							{
								"LevelM70",
								{0.175,0},
								1
							},
							{},
							
							{
								"LevelM70",
								{0.16,0},
								1
							},
							
							{
								"LevelM70",
								{0.145,0},
								1
							},
							{},
							
							{
								"LevelM70",
								{0.13,0},
								1
							},
							
							{
								"LevelM70",
								{0.115,0},
								1
							},
							{},
							
							{
								"LevelM70",
								{0.1,0},
								1
							},
							
							{
								"LevelM70",
								{0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM70",
								{0.07,0},
								1
							},
							
							{
								"LevelM70",
								{0.055,0},
								1
							},
							{}
						};
					};
					class VALM_1_70
					{
						type="text";
						source="static";
						text=-70;
						align="left";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelM70",
							{-0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM70",
							{-0.2,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM70",
							{-0.25999999,0.017999999},
							1
						};
					};
					class VALM_1_70_R
					{
						type="text";
						source="static";
						text=-70;
						align="right";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelM70",
							{0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM70",
							{0.31999999,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM70",
							{0.25999999,0.017999999},
							1
						};
					};
					class LevelP70: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelP70",
								
								{
									"-0.22-0.015",
									0.02
								},
								1
							},
							
							{
								"LevelP70",
								
								{
									"-0.22-0.015",
									0
								},
								1
							},
							
							{
								"LevelP70",
								{-0.059999999,0},
								1
							},
							{},
							
							{
								"LevelP70",
								{0.059999999,0},
								1
							},
							
							{
								"LevelP70",
								
								{
									"+0.22+0.015",
									0
								},
								1
							},
							
							{
								"LevelP70",
								
								{
									"+0.22+0.015",
									0.02
								},
								1
							}
						};
					};
					class VALP_1_70
					{
						type="text";
						source="static";
						text="70";
						align="left";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelP70",
							{-0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP70",
							{-0.2,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP70",
							{-0.25999999,0.033},
							1
						};
					};
					class VALP_1_70_R
					{
						type="text";
						source="static";
						text="70";
						align="right";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelP70",
							{0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP70",
							{0.31999999,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP70",
							{0.25999999,0.033},
							1
						};
					};
					class LevelM80: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelM80",
								{-0.235,-0.02},
								1
							},
							
							{
								"LevelM80",
								{-0.235,0},
								1
							},
							{},
							
							{
								"LevelM80",
								{-0.22,0},
								1
							},
							
							{
								"LevelM80",
								{-0.205,0},
								1
							},
							{},
							
							{
								"LevelM80",
								{-0.19,0},
								1
							},
							
							{
								"LevelM80",
								{-0.175,0},
								1
							},
							{},
							
							{
								"LevelM80",
								{-0.16,0},
								1
							},
							
							{
								"LevelM80",
								{-0.145,0},
								1
							},
							{},
							
							{
								"LevelM80",
								{-0.13,0},
								1
							},
							
							{
								"LevelM80",
								{-0.115,0},
								1
							},
							{},
							
							{
								"LevelM80",
								{-0.1,0},
								1
							},
							
							{
								"LevelM80",
								{-0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM80",
								{-0.07,0},
								1
							},
							
							{
								"LevelM80",
								{-0.055,0},
								1
							},
							{},
							{},
							
							{
								"LevelM80",
								{0.235,-0.02},
								1
							},
							
							{
								"LevelM80",
								{0.235,0},
								1
							},
							{},
							
							{
								"LevelM80",
								{0.22,0},
								1
							},
							
							{
								"LevelM80",
								{0.205,0},
								1
							},
							{},
							
							{
								"LevelM80",
								{0.19,0},
								1
							},
							
							{
								"LevelM80",
								{0.175,0},
								1
							},
							{},
							
							{
								"LevelM80",
								{0.16,0},
								1
							},
							
							{
								"LevelM80",
								{0.145,0},
								1
							},
							{},
							
							{
								"LevelM80",
								{0.13,0},
								1
							},
							
							{
								"LevelM80",
								{0.115,0},
								1
							},
							{},
							
							{
								"LevelM80",
								{0.1,0},
								1
							},
							
							{
								"LevelM80",
								{0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM80",
								{0.07,0},
								1
							},
							
							{
								"LevelM80",
								{0.055,0},
								1
							},
							{}
						};
					};
					class VALM_1_80
					{
						type="text";
						source="static";
						text=-80;
						align="left";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelM80",
							{-0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM80",
							{-0.2,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM80",
							{-0.25999999,0.017999999},
							1
						};
					};
					class VALM_1_80_R
					{
						type="text";
						source="static";
						text=-80;
						align="right";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelM80",
							{0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM80",
							{0.31999999,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM80",
							{0.25999999,0.017999999},
							1
						};
					};
					class LevelP80: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelP80",
								
								{
									"-0.22-0.015",
									0.02
								},
								1
							},
							
							{
								"LevelP80",
								
								{
									"-0.22-0.015",
									0
								},
								1
							},
							
							{
								"LevelP80",
								{-0.059999999,0},
								1
							},
							{},
							
							{
								"LevelP80",
								{0.059999999,0},
								1
							},
							
							{
								"LevelP80",
								
								{
									"+0.22+0.015",
									0
								},
								1
							},
							
							{
								"LevelP80",
								
								{
									"+0.22+0.015",
									0.02
								},
								1
							}
						};
					};
					class VALP_1_80
					{
						type="text";
						source="static";
						text="80";
						align="left";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelP80",
							{-0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP80",
							{-0.2,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP80",
							{-0.25999999,0.033},
							1
						};
					};
					class VALP_1_80_R
					{
						type="text";
						source="static";
						text="80";
						align="right";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelP80",
							{0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP80",
							{0.31999999,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP80",
							{0.25999999,0.033},
							1
						};
					};
					class LevelM90: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelM90",
								{-0.235,-0.02},
								1
							},
							
							{
								"LevelM90",
								{-0.235,0},
								1
							},
							{},
							
							{
								"LevelM90",
								{-0.22,0},
								1
							},
							
							{
								"LevelM90",
								{-0.205,0},
								1
							},
							{},
							
							{
								"LevelM90",
								{-0.19,0},
								1
							},
							
							{
								"LevelM90",
								{-0.175,0},
								1
							},
							{},
							
							{
								"LevelM90",
								{-0.16,0},
								1
							},
							
							{
								"LevelM90",
								{-0.145,0},
								1
							},
							{},
							
							{
								"LevelM90",
								{-0.13,0},
								1
							},
							
							{
								"LevelM90",
								{-0.115,0},
								1
							},
							{},
							
							{
								"LevelM90",
								{-0.1,0},
								1
							},
							
							{
								"LevelM90",
								{-0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM90",
								{-0.07,0},
								1
							},
							
							{
								"LevelM90",
								{-0.055,0},
								1
							},
							{},
							{},
							
							{
								"LevelM90",
								{0.235,-0.02},
								1
							},
							
							{
								"LevelM90",
								{0.235,0},
								1
							},
							{},
							
							{
								"LevelM90",
								{0.22,0},
								1
							},
							
							{
								"LevelM90",
								{0.205,0},
								1
							},
							{},
							
							{
								"LevelM90",
								{0.19,0},
								1
							},
							
							{
								"LevelM90",
								{0.175,0},
								1
							},
							{},
							
							{
								"LevelM90",
								{0.16,0},
								1
							},
							
							{
								"LevelM90",
								{0.145,0},
								1
							},
							{},
							
							{
								"LevelM90",
								{0.13,0},
								1
							},
							
							{
								"LevelM90",
								{0.115,0},
								1
							},
							{},
							
							{
								"LevelM90",
								{0.1,0},
								1
							},
							
							{
								"LevelM90",
								{0.085000001,0},
								1
							},
							{},
							
							{
								"LevelM90",
								{0.07,0},
								1
							},
							
							{
								"LevelM90",
								{0.055,0},
								1
							},
							{}
						};
					};
					class VALM_1_90
					{
						type="text";
						source="static";
						text=-90;
						align="left";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelM90",
							{-0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM90",
							{-0.2,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM90",
							{-0.25999999,0.017999999},
							1
						};
					};
					class VALM_1_90_R
					{
						type="text";
						source="static";
						text=-90;
						align="right";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelM90",
							{0.25999999,-0.032000002},
							1
						};
						right[]=
						{
							"LevelM90",
							{0.31999999,-0.032000002},
							1
						};
						down[]=
						{
							"LevelM90",
							{0.25999999,0.017999999},
							1
						};
					};
					class LevelP90: Level0
					{
						type="line";
						points[]=
						{
							
							{
								"LevelP90",
								
								{
									"-0.22-0.015",
									0.02
								},
								1
							},
							
							{
								"LevelP90",
								
								{
									"-0.22-0.015",
									0
								},
								1
							},
							
							{
								"LevelP90",
								{-0.059999999,0},
								1
							},
							{},
							
							{
								"LevelP90",
								{0.059999999,0},
								1
							},
							
							{
								"LevelP90",
								
								{
									"+0.22+0.015",
									0
								},
								1
							},
							
							{
								"LevelP90",
								
								{
									"+0.22+0.015",
									0.02
								},
								1
							}
						};
					};
					class VALP_1_90
					{
						type="text";
						source="static";
						text="90";
						align="left";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelP90",
							{-0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP90",
							{-0.2,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP90",
							{-0.25999999,0.033},
							1
						};
					};
					class VALP_1_90_R
					{
						type="text";
						source="static";
						text="90";
						align="right";
						scale=3;
						sourceScale=1;
						pos[]=
						{
							"LevelP90",
							{0.25999999,-0.017000001},
							1
						};
						right[]=
						{
							"LevelP90",
							{0.31999999,-0.017000001},
							1
						};
						down[]=
						{
							"LevelP90",
							{0.25999999,0.033},
							1
						};
					};
				};
			};
			class PlaneL_Black
			{
				color[] = {0,0,0,1};
				class Black
				{
					type="line";
					width=20;
					points[]=
					{
						{
							"Center",
							{-0.2,0},
							1
						},
						{
							"Center",
							{-0.05,0},
							1
						},
						{
							"Center",
							{-0.05,0.05},
							1
						},
						{},
						{
							"Center",
							{-0.002,0.002},
							1
						},
						{
							"Center",
							{0.002,0.002},
							1
						},
						{
							"Center",
							{0.002,-0.002},
							1
						},
						{
							"Center",
							{-0.002,-0.002},
							1
						},
						{
							"Center",
							{-0.002,0.002},
							1
						},
						{},
						{
							"Center",
							{0.05,0.05},
							1
						},
						{
							"Center",
							{0.05,0},
							1
						},
						{
							"Center",
							{0.2,0},
							1
						},
					};
				};
			};
			class PlaneL_Yellow
			{
				color[] = {0.097,0.085,0.003,1};
				class Yellow
				{
					type="line";
					width=10;
					points[]=
					{
						{
							"Center",
							{-0.2,0},
							1
						},
						{
							"Center",
							{-0.05,0},
							1
						},
						{
							"Center",
							{-0.05,0.05},
							1
						},
						{},
						{
							"Center",
							{-0.002,0.002},
							1
						},
						{
							"Center",
							{0.002,0.002},
							1
						},
						{
							"Center",
							{0.002,-0.002},
							1
						},
						{
							"Center",
							{-0.002,-0.002},
							1
						},
						{
							"Center",
							{-0.002,0.002},
							1
						},
						{},
						{
							"Center",
							{0.05,0.05},
							1
						},
						{
							"Center",
							{0.05,0},
							1
						},
						{
							"Center",
							{0.2,0},
							1
						},
					};
				};
			};
			};
	};
	class MYR_DIR_LEFT
	{
		topLeft="MFD_L_ML";
		topRight="MFD_L_MR";
		bottomLeft="MFD_L_BL";
		borderLeft=0;
		borderRight=0;
		borderTop=0;
		borderBottom=0;
		color[]={0.05,0.05,0.05,1};
		enableParallax=0;
		class material
		{
			ambient[]={10,10,10,1};
			diffuse[]={10,10,10,1};
			emissive[]={500,500,500,1};
		};
		class Bones
		{
			class Compass_text
			{
				type="fixed";
				pos[]={0.5,0.5};
			};
			class Compass_bone
			{
				type="rotational";
				source="heading";
				center[]={0.5,0.5};
				min=0;
				max=360;
				minAngle=0;
				maxAngle=-360;
				aspectRatio=1;
			};
			class Windage_bone
			{
				type="rotational";
				source="windage";
				center[]={0,0};
				min=0;
				max=360;
				minAngle=180;
				maxAngle=-180;
				aspectRatio=1;
			};
		};
		class Draw
		{
			condition="on";
			class Black_Base
			{
				color[]={0,0,0,1};
				class Black
				{					
					type="polygon";
					points[]=
					{
						{
							{
								{0,0},
								1
							},
							{ 
								{1,0},
								1
							},
							{ 
								{1,1},
								1
							},
							{ 	
								{0,1},
								1
							}
						}
					};
				};
			};
			class HEADING_BOX
			{
				type="line";
				width=7;
				points[]=
				{
					{
						{0.44,0.05},
						1
					},
					{
						{0.56,0.05},
						1
					},
					{
						{0.56,0.13},
						1
					},
					{
						{0.53,0.13},
						1
					},
					{
						{0.5,0.17},
						1
					},
					{
						{0.47,0.13},
						1
					},
					{
						{0.44,0.13},
						1
					},
					{
						{0.44,0.05},
						1
					}
				};
			};
			class HEADING
			{
				type="text";
				source="heading";
				sourceScale=1;
				align="center";
				scale=2;
				pos[]=
				{
					{0.5,0.05},
					1
				};
				right[]=
				{
					{0.58,0.05},
					1
				};
				down[]=
				{
					{0.5,0.13},
					1
				};
			};
			class Compass_Polygon
			{
				color[]={0.05,0.05,0.05,1};
				class Compass
				{					
					type="polygon";
					texture="MYR\MYR_Helicopters\MYR_AS350\data\compass_ca.paa";
					points[]=
					{
						{
							{
								"Compass_bone",
								{-0.3,0.3},
								1
							},
							{
								"Compass_bone",
								{0.3,0.3},
								1
							},
							{
								"Compass_bone",
								{0.3,-0.3},
								1
							},
							{
								"Compass_bone",
								{-0.3,-0.3},
								1
							}
						}
					};
				};
			};
			class Cross
			{
				color[]={0.03,0.02,0.005,1};
				class Cross
				{					
					type="line";
					width=12;
					points[]=
					{
						{
							"Compass_text",
							{0,-0.1},
							1
						},
						{
							"Compass_text",
							{0,0.15},
							1
						},
						{},
						{
							"Compass_text",
							{-0.075,0},
							1
						},
						{
							"Compass_text",
							{0.075,0},
							1
						},
						{},
						{
							"Compass_text",
							{-0.025,0.125},
							1
						},
						{
							"Compass_text",
							{0.025,0.125},
							1
						}							
					};
				};
			};
			class VOR_Arrow
			{
				color[]={0,0.05,0,1};
				class VOR_Arrow
				{					
					type="polygon";
					width=7;
					points[]=
					{
						{
							{
								"Compass_bone",
								{0,0.27},
								1
							},
							{
								"Compass_bone",
								{0.02,0.23},
								1
							},
							{
								"Compass_bone",
								{-0.02,0.23},
								1
							}	
						}
					};
				};
			};
			class VOR_Line
			{
				color[]={0,0.05,0,1};
				class VOR_Line
				{
					type="line";
					width=7;
					points[]=
					{
						{
							"Compass_bone",
							{0,-0.25},1
						},
						{
							"Compass_bone",
							{0,-0.05},1
						},
						{},
						{
							"Compass_bone",
							{0,0.25},1
						},
						{ 
							"Compass_bone",
							{0,0.05},1
						}
					};
				};
			};
			class Windage_Arrow
			{
				color[]={0.009,0.025,0.06,1};
				class Arrow
				{					
					type="polygon";
					width=7;
					points[]=
					{
						{
							{
								"Windage_bone",
								{0,0.27},
								1,
								"Compass_bone",1
							},
							{
								"Windage_bone",
								{0.02,0.23},
								1,
								"Compass_bone",1
							},
							{
								"Windage_bone",
								{-0.02,0.23},
								1,
								"Compass_bone",1
							}	
						}
					};
				};
			};
			class Windage_Line
			{
				color[]={0.009,0.025,0.06,1};
				class Line
				{
					type="line";
					width=7;
					points[]=
					{
						{
							"Windage_bone",
							{0,-0.25},
							1,
							"Compass_bone",1
						},
						{
							"Windage_bone",
							{0,-0.05},
							1,
							"Compass_bone",1
						},
						{},
						{
							"Windage_bone",
							{0,0.25},
							1,
							"Compass_bone",1
						},
						{ 
							"Windage_bone",
							{0,0.05},
							1,
							"Compass_bone",1
						}
					};
				};
			};
			/*
			class Black_Base_2
			{
				color[]={0,0,0,1};
				class Black2
				{					
					type="polygon";
					points[]=
					{
						{
							{ 
								{0,0.65},
								1
							},
							{ 
								{1,0.65},
								1
							},
							{ 
								{1,1},
								1
							},
							{ 	
								{0,1},
								1
							}
						}
					};
				};
			};
			class Black_Base_3
			{
				color[]={0,0,0,1};
				class Black2
				{					
					type="polygon";
					points[]=
					{
						{
							{ 
								{0,0.65},
								1
							},
							{ 
								{1,0.65},
								1
							},
							{ 
								{1,1},
								1
							},
							{ 	
								{0,1},
								1
							}
						}
					};
				};
			};
			class Division_Hor
			{
				type="line";
				width=7;
				points[]=
				{
					{
						{0,0.65},
						1
					},
					{ 
						{1,0.65},
						1
					},
				};
			};
			class Division_Ver
			{
				type="line";
				width=7;
				points[]=
				{
					{
						{0.5,0.65},
						1
					},
					{ 
						{0.5,1},
						1
					},
				};
			};
			class VSPEED_Gray
			{
				color[]={0.0125,0.0125,0.0125,1};
				class VSPEED_Gray
				{					
					type="polygon";
					points[]=
					{
						{
							{ 
								{0.8375,0.05},
								1
							},
							{ 
								{0.9625,0.05},
								1
							},
							{ 
								{0.9625,0.95},
								1
							},
							{ 	
								{0.8375,0.95},
								1
							}
						}
					};
				};
			};
			class VSPEED_Brown
			{
				color[]={0.03,0.02,0.005,1};
				class VSPEED_Brown
				{					
					type="polygon";
					points[]=
					{
						{
							{ 
								
								{0.8375,0.5},
								1
							},
							{ 
								
								{0.9625,0.5},
								1
							},
							{ 
								{0.9625,0.95},
								1
							},
							{ 	
								{0.8375,0.95},
								1
							}
						}
					};
				};
			};
			class VSPEED_SCALE
			{
				type="scale";
				horizontal=0;
				source="vspeed";
				sourceScale=1;
				min=-100;
				max=100;
				width=5;
				top=0.925;
				center=0.5;
				bottom=0.075;
				lineXleft=0.8375;
				lineYright=0.8675;
				lineXleftMajor=0.8375;
				lineYrightMajor=0.8875;
				majorLineEach=5;
				numberEach=10;
				step=1;
				stepSize=0.025;
				align="right";
				scale=1;
				pos[]={0.90,0.9};
				right[]={0.95,0.9};
				down[]={0.90,0.95};
			};
			class VSPEED_Dark_Polygon
			{
				color[]={0,0,0,1};
				class VSPEED_POLY
				{					
					type="polygon";
					points[]=
					{
						{
							{ 
								{0.8375,0.47},
								1
							},
							{ 
								{0.9625,0.47},
								1
							},
							{ 
								{0.9625,0.53},
								1
							},
							{ 	
								{0.8375,0.53},
								1
							}
						}
					};
				};
			};	
			class VSPEED_BOX
			{
				type="line";
				width=7;
				points[]=
				{
					
					{
						{0.8375,0.05},
						1
					},
					{
						{0.9625,0.05},
						1
					},
					{
						{0.9625,0.95},
						1
					},
					{
						{0.8375,0.95},
						1
					},
					{
						{0.8375,0.05},
						1
					},
				};
			};
			class VSPEED_BOX2
			{
				type="line";
				width=7;
				points[]=
				{
					
					{
						{0.8375,0.47},
						1
					},
					{
						{0.9625,0.47},
						1
					},
					{
						{0.9625,0.53},
						1
					},
					{
						{0.8375,0.53},
						1
					},
					{
						{0.8375,0.47},
						1
					},
				};
			};
			class VSPEED
			{
				type="text";
				source="vspeed";
				sourceScale=1;
				align="center";
				scale=0.9;
				pos[]=
				{
					{0.9,0.47},
					1
				};
				right[]=
				{
					{0.98,0.47},
					1
				};
				down[]=
				{
					{0.9,0.53},
					1
				};
			};
			*/
			class TOP_Black
			{
				color[]={0,0,0,1};
				class BOTTOM_1
				{					
					type="polygon";
					points[]=
					{
						{
							{
								{0,0.05},
								1
							},
							{
								{1,0.05},
								1
							},
							{
								{1,0},
								1
							},
							{
								{0,0},
								1
							}
						}
					};
				};
				class BOTTOM_2
				{					
					type="polygon";
					points[]=
					{
						{
							{
								{0,0.05},
								1
							},
							{
								{1,0.05},
								1
							},
							{
								{1,0},
								1
							},
							{
								{0,0},
								1
							}
						}
					};
				};
			};
			class TOP_BOX
			{
				type="line";
				width=7;
				points[]=
				{
					{
						{0,0.05},
						1
					},
					{
						{1,0.05},
						1
					},
					{
						{1,0},
						1
					},
					{
						{0,0},
						1
					},
					{
						{0,0.05},
						1
					},
					{},
					{
						{0.25,0},
						1
					},
					{
						{0.25,0.05},
						1
					},
					{},
					{
						{0.5,0},
						1
					},
					{
						{0.5,0.05},
						1
					},
					{},
					{
						{0.75,0},
						1
					},
					{
						{0.75,0.05},
						1
					}
				};
			};
			class WindText
			{
				color[]={0.009,0.025,0.06,1};
				class Text
				{
					type="text";
					source="static";
					text="WIND DIR";
					align="right";
					scale=1;
					pos[]=
					{
						{0.0125,0},
						1
					};
					right[]=
					{
						{0.0625,0},
						1
					};
					down[]=
					{
						{0.0125,0.05},
						1
					};
				};
			};
			class WindNumber
			{
				color[]={0.009,0.025,0.06,1};
				class Number
				{
					type="text";
					source="windage";
					sourceScale=1;
					align="center";
					scale=1;
					pos[]=
					{
						{0.2,0},
						1
					};
					right[]=
					{
						{0.25,0},
						1
					};
					down[]=
					{
						{0.2,0.05},
						1
					};
				};
			};
			class VORText
			{
				color[]={0.05,0,0.05,1};
				class Text
				{
					type="text";
					source="static";
					text="VOR_2: OFF";
					align="right";
					scale=1;
					pos[]=
					{
						{0.7625,0},
						1
					};
					right[]=
					{
						{0.8125,0},
						1
					};
					down[]=
					{
						{0.7625,0.05},
						1
					};
				};
			};
			class VORText2
			{
				color[]={0,0.05,0,1};
				class Text
				{
					type="text";
					source="static";
					text="VOR";
					align="left";
					scale=1;
					pos[]=
					{
						{0.4,0.45},
						1
					};
					right[]=
					{
						{0.5,0.45},
						1
					};
					down[]=
					{
						{0.4,0.55},
						1
					};
				};
			};
			class OFF
			{
				color[] = {0.08,0,0,1};
				class RIGHT
				{
					type="text";
					source="static";
					text="OFF";
					align="center";
					scale=1;
					pos[]=
					{
						{0.33,0.85},
						1
					};
					right[]=
					{
						{0.43,0.85},
						1
					};
					down[]=
					{
						{0.33,0.95},
						1
					};
				};
				class LEFT: RIGHT
				{
					pos[]=
					{
						{0.66,0.85},
						1
					};
					right[]=
					{
						{0.76,0.85},
						1
					};
					down[]=
					{
						{0.66,0.95},
						1
					};
				};
			};
			class Lights
			{
				class OFF2
				{
					color[]={0,0,0,1};
					class COLLISION
					{
						condition="collisionlights";	
						class Black_Collision1
						{					
							type="polygon";
							points[]=
							{
								{
									{
										{0,0.8},
										1
									},
									{
										{0.5,0.8},
										1
									},
									{
										{0.5,0.99},
										1
									},
									{
										{0,0.99},
										1
									}
								}
							};
						};
						class Black_Collision2
						{					
							type="polygon";
							points[]=
							{
								{
									{
										{0,0.8},
										1
									},
									{
										{0.5,0.8},
										1
									},
									{
										{0.5,0.99},
										1
									},
									{
										{0,0.99},
										1
									}
								}
							};
						};
					};
					class LIGHTS
					{
						condition="lights";
						class Black_Lights1
						{					
							type="polygon";
							points[]=
							{
								{
									{
										{0.5,0.8},
										1
									},
									{
										{1,0.8},
										1
									},
									{
										{1,0.99},
										1
									},
									{
										{0.5,0.99},
										1
									}
								}
							};	
						};
						class Black_Lights2
						{					
							type="polygon";
							points[]=
							{
								{
									{
										{0.5,0.8},
										1
									},
									{
										{1,0.8},
										1
									},
									{
										{1,0.99},
										1
									},
									{
										{0.5,0.99},
										1
									}
								}
							};	
						};
					};
				};
				color[] = {0,0.08,0,1};
				class COLLISION
				{
					condition="collisionlights";
					class COLL
					{
						type="text";
						source="static";
						text="COLL";
						align="center";
						scale=1;
						pos[]=
						{
							{0.33,0.85},
							1
						};
						right[]=
						{
							{0.43,0.85},
							1
						};
						down[]=
						{
							{0.33,0.95},
							1
						};
					};
				};
				class LIGHTS
				{
					condition="lights";
					class LLS
					{
						type="text";
						source="static";
						text="LLS";
						align="center";
						scale=1;
						pos[]=
						{
							{0.66,0.85},
							1
						};
						right[]=
						{
							{0.76,0.85},
							1
						};
						down[]=
						{
							{0.66,0.95},
							1
						};
					};
				};
			};
		};
	};
	class MYR_DIR_RIGHT: MYR_DIR_LEFT
	{
		topLeft="MFD_R_ML";
		topRight="MFD_R_MR";
		bottomLeft="MFD_R_BL";
	};
	class MYR_ENG_TOP
	{
		topLeft="MFD_M_TL";
		topRight="MFD_M_TR";
		bottomLeft="MFD_M_ML";
		borderLeft=0;
		borderRight=0;
		borderTop=0;
		borderBottom=0;
		color[]={0.05,0.05,0.05,1};
		enableParallax=0;
		class material
		{
			ambient[]={10,10,10,1};
			diffuse[]={10,10,10,1};
			emissive[]={500,500,500,1};
		};
		class Bones
		{
			class Center
			{
				type="fixed";
				pos[]={0.5,0.5};
			};
			class RPM_bone
			{
				type="rotational";
				source="rpm";
				center[]={0.5,0.5};
				min=0;
				max=6000;
				minAngle=-20;
				maxAngle=0;
				aspectRatio=1;
			};
		};
		class Draw
		{
			condition="on";
			class BASE_Polygon
			{
				color[]={0,0,0,1};
				class BASE
				{					
					type="polygon";
					points[]=
					{
						{
							{ 
								{0,0},
								1
							},
							{ 
								{1,0},
								1
							},
							{ 
								{1,1},
								1
							},
							{ 	
								{0,1},
								1
							}
						}
					};
				};
			};
			class ENG_Polygon
			{
				color[]={0.05,0.05,0.05,1};
				class Top
				{					
					type="polygon";
					texture="MYR\MYR_Helicopters\MYR_AS350\data\engine2_ca.paa";
					points[]=
					{
						{
							{
								"Center",
								{-0.5,-0.6},
								1
							},
							{
								"Center",
								{0.5,-0.6},
								1
							},
							{
								"Center",
								{0.5,0.6},
								1
							},
							{
								"Center",
								{-0.5,0.6},
								1
							}
						}
					};
				};
			};
			class Marker_Polygon
			{
				color[]={0.75,0.75,0.75,1};
				class BASE
				{					
					type="polygon";
					points[]=
					{
						{
							{ 
								"RPM_bone",
								{0.01,0},
								1
							},
							{ 
								"RPM_bone",
								{0.02,0},
								1
							},
							{ 
								"RPM_bone",
								{0,0.25},
								1
							},
							{ 	
								"RPM_bone",
								{0.01,0},
								1
							}
						}
					};
				};
			};
		};
	};
	class MYR_ENG_BOTTOM
	{
		topLeft="MFD_M_ML";
		topRight="MFD_M_MR";
		bottomLeft="MFD_M_BL";
		borderLeft=0;
		borderRight=0;
		borderTop=0;
		borderBottom=0;
		color[]={0.05,0.05,0.05,1};
		enableParallax=0;
		class material
		{
			ambient[]={10,10,10,1};
			diffuse[]={10,10,10,1};
			emissive[]={500,500,500,1};
		};
		class Bones
		{
			class Center
			{
				type="fixed";
				pos[]={0.5,0.5};
			};
		};
		class Draw
		{
			condition="on";
			class BASE_Polygon
			{
				color[]={0,0,0,1};
				class BASE
				{					
					type="polygon";
					points[]=
					{
						{
							{ 
								{0,0},
								1
							},
							{ 
								{1,0},
								1
							},
							{ 
								{1,1},
								1
							},
							{ 	
								{0,1},
								1
							}
						}
					};
				};
			};
			class ENG_Polygon
			{
				color[]={0.05,0.05,0.05,1};
				class Bottom
				{					
					type="polygon";
					texture="MYR\MYR_Helicopters\MYR_AS350\data\engine1_ca.paa";
					points[]=
					{
						{
							{
								"Center",
								{-0.5,-0.6},
								1
							},
							{
								"Center",
								{0.5,-0.6},
								1
							},
							{
								"Center",
								{0.5,0.6},
								1
							},
							{
								"Center",
								{-0.5,0.6},
								1
							}
						}
					};
				};
			};
		};
	};
	class MYR_CLK_LEFT
	{
		topLeft="CLK_L_TL";
		topRight="CLK_L_TR";
		bottomLeft="CLK_L_BL";
		borderLeft=0;
		borderRight=0;
		borderTop=0;
		borderBottom=0;
		color[]={0.05,0.05,0.05,1};
		enableParallax=0;
		class material
		{
			ambient[]={10,10,10,1};
			diffuse[]={10,10,10,1};
			emissive[]={500,500,500,1};
		};
		class Bones
		{
			class Center
			{
				type="fixed";
				pos[]={0.5,0.5};
			};
		};
		class Draw
		{
			condition="on";
			class Green_Screen
			{
				color[]={0.033,0.041,0.029,1};
				class Green
				{					
					type="polygon";
					points[]=
					{
						{
							{ 
								{0,0},
								1
							},
							{ 
								{1,0},
								1
							},
							{ 
								{1,1},
								1
							},
							{ 	
								{0,1},
								1
							}
						}
					};
				};
			};
			class Clock
			{
				color[] = {0,0,0,1};
				font="LCD14";
				class Hour
				{
					type="text";
					source="ClockHour";
					sourceScale=24;
					sourceLength=2;
					align="right";
					alpha=0.5;
					scale=1;
					pos[]=
					{
						{0.12,0.33},
						1
					};
					right[]=
					{
						{0.45,0.33},
						1
					};
					down[]=
					{
						{0.12,0.66},
						1
					};
				};
				class Minute: Hour
				{
					source="ClockMinute";
					align="center";
					sourceScale=60;
					pos[]=
					{
						{0.66,0.33},
						1
					};
					right[]=
					{
						{0.99,0.33},
						1
					};
					down[]=
					{
						{0.66,0.66},
						1
					};
				};
				class Center
				{
					type="text";
					source="static";
					align="center";
					text=":";
					scale=1;
					pos[]=
					{
						{0.47,0.333},
						1
					};
					right[]=
					{
						{0.67,0.333},
						1
					};
					down[]=
					{
						{0.47,0.666},
						1
					};
				};
			};
		};
	};
	class MYR_CLK_RIGHT: MYR_CLK_LEFT
	{
		topLeft="CLK_R_TL";
		topRight="CLK_R_TR";
		bottomLeft="CLK_R_BL";
	};
	class MYR_GPS_LEFT
	{
		topLeft="GPS_TL";
		topRight="GPS_TR";
		bottomLeft="GPS_BL";
		borderLeft=0;
		borderRight=0;
		borderTop=0;
		borderBottom=0;
		color[]={0.05,0.05,0.05,1};
		enableParallax=0;
		class material
		{
			ambient[]={10,10,10,1};
			diffuse[]={10,10,10,1};
			emissive[]={500,500,500,1};
		};
		class Bones
		{
			
		};
		class Draw
		{
			condition="on";
			class Screen
			{
				color[]={0.05,0.05,0.05,1};
				class GPS
				{					
					type="polygon";
					texture="MYR\MYR_Helicopters\MYR_AS350\data\GPS_175_co.paa";
					points[]=
					{
						{
							{ 
								{0,0},
								1
							},
							{ 
								{1,0},
								1
							},
							{ 
								{1,1},
								1
							},
							{ 	
								{0,1},
								1
							}
						}
					};
				};
				
			};
		};
	};
	class MYR_GUN_LEFT
	{
		topLeft="GUN_TL";
		topRight="GUN_TR";
		bottomLeft="GUN_BL";
		borderLeft=0;
		borderRight=0;
		borderTop=0;
		borderBottom=0;
		color[]={0.05,0.05,0.05,1};
		enableParallax=0;
		class material
		{
			ambient[]={10,10,10,1};
			diffuse[]={10,10,10,1};
			emissive[]={500,500,500,1};
		};
		class Bones
		{
			class Center
			{
				type="fixed";
				pos[]={0.5,0.5};
			};
		};
		class Draw
		{
			condition="mgun";
			class Green_Screen
			{
				color[]={0.033,0.041,0.029,1};
				class Green
				{					
					type="polygon";
					points[]=
					{
						{
							{ 
								{0,0},
								1
							},
							{ 
								{1,0},
								1
							},
							{ 
								{1,1},
								1
							},
							{ 	
								{0,1},
								1
							}
						}
					};
				};
				
			};
			class GUN
			{
				color[] = {0,0,0,1};
				font="LCD14";
				class WeaponName
				{
					type="text";
					source="weapon";
					sourceScale=1;
					align="right";
					scale=3;
					pos[]=
					{
						{0.05,0.25},
						1
					};
					right[]=
					{
						{0.25,0.25},
						1
					};
					down[]=
					{
						{0.05,0.45},
						1
					};
				};
				class AmmoCount
				{
					type="text";
					source="ammo";
					sourceScale=1;
					align="right";
					scale=3;
					pos[]=
					{
						{0.05,0.65},
						1
					};
					right[]=
					{
						{0.25,0.65},
						1
					};
					down[]=
					{
						{0.05,0.85},
						1
					};
				};
			};
		};
	};
	class MYR_COM
	{
		topLeft="COM_TL";
		topRight="COM_TR";
		bottomLeft="COM_BL";
		borderLeft=0;
		borderRight=0;
		borderTop=0;
		borderBottom=0;
		color[]={0.05,0.05,0.05,1};
		enableParallax=0;
		class material
		{
			ambient[]={10,10,10,1};
			diffuse[]={10,10,10,1};
			emissive[]={500,500,500,1};
		};
		class Bones
		{
			class Center
			{
				type="fixed";
				pos[]={0.5,0.5};
			};
		};
		class Draw
		{
			condition="on";
			class BASE_Polygon
			{
				color[]={0,0,0,1};
				class BASE
				{					
					type="polygon";
					points[]=
					{
						{
							{ 
								{0,0},
								1
							},
							{ 
								{1,0},
								1
							},
							{ 
								{1,1},
								1
							},
							{ 	
								{0,1},
								1
							}
						}
					};
				};
			};
			class RADIO_Polygon
			{
				color[]={0.05,0.05,0.05,1};
				class Compass
				{					
					type="polygon";
					texture="MYR\MYR_Helicopters\MYR_AS350\data\radio_co.paa";
					points[]=
					{
						{
							{
								"Center",
								{-0.5,-0.5},
								1
							},
							{
								"Center",
								{0.5,-0.5},
								1
							},
							{
								"Center",
								{0.5,0.5},
								1
							},
							{
								"Center",
								{-0.5,0.5},
								1
							}
						}
					};
				};
			};
		};
	};
	///*
	class MYR_HUD
	{
		topLeft="HUD_TL";
		topRight="HUD_TR";
		bottomLeft="HUD_BL";
		borderLeft=0;
		borderRight=0;
		borderTop=0;
		borderBottom=0;
		color[]={0.1,0.076,0.025,1};
		helmetPosition[]={-0.025,0.025,0.1};
		helmetRight[]={0.050000001,0,0};
		helmetDown[]={0,-0.050000001,0};
		enableParallax=0;
		class Pos10Vector
		{
			type="vector";
			pos0[]={0.5,0.5};
			pos10[]={1.225,1.1};
		};
		class material
		{
			ambient[]={10,10,10,1};
			diffuse[]={10,10,10,1};
			emissive[]={500,500,500,1};
		};
		class Bones
		{
			class Velocity
			{
				type="vector";
				source="velocity";
				pos0[]={0.498,0.38};
				pos10[]={1.166,1.215};
			};
			class Center
			{
				type="vector";
				source="forward";
				pos[]={0.5,0.5};
				pos0[]={0.5,0.5};
				pos10[]={0.77399999,0.76999998};
			};
			class ImpactGun
			{
				type="vector";
				source="ImpactPoint";
				pos0[]={0.475,0.375};
				pos10[]={0.77399999,0.76999998};
			};
			class ImpactRocket
			{
				type="vector";
				source="ImpactPoint";
				pos0[]={0.475,0.335};
				pos10[]={0.77399999,0.76999998};
			};
		};
		class Draw
		{
			width=5;
			condition="on";
			class MachineGunCrosshair
			{
				condition="mgun";
				class Crosshair_Polygon
				{
					class Crosshair
					{					
						type="polygon";
						texture="MYR\MYR_Helicopters\MYR_AS350\data\crosshair_ca.paa";
						points[]=
						{
							{
								{
									"ImpactGun",
									{-0.3,0.3},
									1
								},
								{
									"ImpactGun",
									{0.3,0.3},
									1
								},
								{
									"ImpactGun",
									{0.3,-0.3},
									1
								},
								{
									"ImpactGun",
									{-0.3,-0.3},
									1
								}
							}
						};
					};
				};
			};
			class RocketCrosshair
			{
				condition="Rocket";
				class Crosshair_Polygon
				{
					class Crosshair
					{					
						type="polygon";
						texture="MYR\MYR_Helicopters\MYR_AS350\data\crosshair_ca.paa";
						points[]=
						{
							{
								{
									"ImpactRocket",
									{-0.3,0.3},
									1
								},
								{
									"ImpactRocket",
									{0.3,0.3},
									1
								},
								{
									"ImpactRocket",
									{0.3,-0.3},
									1
								},
								{
									"ImpactRocket",
									{-0.3,-0.3},
									1
								}
							}
						};
					};
				};
			};
		};
	};
	//*/
	//#include "cfg_hud_pilot.hpp"
};