#include<string.h>

struct elmt{
	int at_no;
	float at_mass,at_radius;
	char at_symbol[4],at_name[30],at_oxid[20];
};
elmt h;
void element(int e)
{

	if(e==1)
	{
		h.at_no=1;
		h.at_radius=53;
		h.at_mass=1;
		strcpy(h.at_name,"Hydrogen");
		strcpy(h.at_symbol,"H");
		strcpy(h.at_oxid,"+1,-1");
	}
	else if(e==2)
	{
		h.at_no=2;
		h.at_radius=31.0;
		h.at_mass=4.0;
		strcpy(h.at_name,"Helium");
		strcpy(h.at_symbol,"h");
		strcpy(h.at_oxid,"0");
	}
	else if(e==3)
	{
		h.at_no=3;
		h.at_radius=167;
		h.at_mass=6.9;
		strcpy(h.at_name,"Lithium");
		strcpy(h.at_symbol,"h");
		strcpy(h.at_oxid,"+1");
	}
	else if(e==4)
	{
		h.at_no=4;
		h.at_radius=112;
		h.at_mass=9;
		strcpy(h.at_name,"Berylium");
		strcpy(h.at_symbol,"h");
		strcpy(h.at_oxid,"+2");
	}
	else if(e==5)
	{
		h.at_no=5;
		h.at_radius=87;
		h.at_mass=11;
		strcpy(h.at_name,"Boron");
		strcpy(h.at_symbol,"h");
		strcpy(h.at_oxid,"+3");
	}
    else if(e==6)
	{
		h.at_no=6;
		h.at_radius=67;
		h.at_mass=12;
		strcpy(h.at_name,"Carbon");
		strcpy(h.at_symbol,"C");
		strcpy(h.at_oxid,"+4,+2,-4");
	}
	else if(e==7)
	{
		h.at_no=7;
		h.at_radius=56;
		h.at_mass=14;
		strcpy(h.at_name,"Nitrogen");
		strcpy(h.at_symbol,"N");
		strcpy(h.at_oxid,"-3,+3,+5");
	}
	else if(e==8)
	{
		h.at_no=8;
		h.at_radius=48;
		h.at_mass=16;
		strcpy(h.at_name,"Oxygen");
		strcpy(h.at_symbol,"O");
		strcpy(h.at_oxid,"-2");
	}
	else if(e==9)
	{
		h.at_no=9;
		h.at_radius=42;
		h.at_mass=19;
		strcpy(h.at_name,"Fluorine");
		strcpy(h.at_symbol,"F");
		strcpy(h.at_oxid,"-1");
	}
	else if(e==10)
	{
		h.at_no=10;
		h.at_radius=38;
		h.at_mass=20;
		strcpy(h.at_name,"Neon");
		strcpy(h.at_symbol,"Ne");
		strcpy(h.at_oxid,"0");
	}
	else if(e==11)
	{
		h.at_no=11;
		h.at_radius=190;
		h.at_mass=23;
		strcpy(h.at_name,"Sodium");
		strcpy(h.at_symbol,"Na");
		strcpy(h.at_oxid,"+1");
	}
	else if(e==12)
	{
		h.at_no=12;
		h.at_radius=145;
		h.at_mass=24;
		strcpy(h.at_name,"Magnessium");
		strcpy(h.at_symbol,"Mg");
		strcpy(h.at_oxid,"+2");
	}
	else if(e==13)
	{
		h.at_no=13;
		h.at_radius=118;
		h.at_mass=27;
		strcpy(h.at_name,"Aluminium");
		strcpy(h.at_symbol,"Al");
		strcpy(h.at_oxid,"+3");
	}
	else if(e==14)
	{
		h.at_no=14;
		h.at_radius=111;
		h.at_mass=28;
		strcpy(h.at_name,"Silicon");
		strcpy(h.at_symbol,"Si");
		strcpy(h.at_oxid,"-4,+2,+4");
	}
	else if(e==15)
	{
		h.at_no=15;
		h.at_radius=98;
		h.at_mass=31;
		strcpy(h.at_name,"Phosphorus");
		strcpy(h.at_symbol,"P");
		strcpy(h.at_oxid,"+3,-3,+5");
	}
	else if(e==16)
	{
		h.at_no=16;
		h.at_radius=88;
		h.at_mass=32;
		strcpy(h.at_name,"Sulfur");
		strcpy(h.at_symbol,"S");
		strcpy(h.at_oxid,"-2,+4,+6");
	}
	else if(e==17)
	{
		h.at_no=17;
		h.at_radius=79;
		h.at_mass=4;
		strcpy(h.at_name,"Chlorine");
		strcpy(h.at_symbol,"Cl");
		strcpy(h.at_oxid,"-1,+1,+3,+5,+7");
	}
	else if(e==18)
	{
		h.at_no=18;
		h.at_radius=71;
		h.at_mass=4;
		strcpy(h.at_name,"Argon");
		strcpy(h.at_symbol,"Ar");
		strcpy(h.at_oxid,"0");
	}
	else if(e==19)
	{
		h.at_no=19;
		h.at_radius=243;
		h.at_mass=39;
		strcpy(h.at_name,"Potassium");
		strcpy(h.at_symbol,"K");
		strcpy(h.at_oxid,"+1");
	}
	else if(e==20)
	{
		h.at_no=20;
		h.at_radius=194;
		h.at_mass=40.078;
		strcpy(h.at_name,"Calcium");
		strcpy(h.at_symbol,"Ca");
		strcpy(h.at_oxid,"+2");
	}
	else if(e==21)
	{
		h.at_no=21;
		h.at_radius=184;
		h.at_mass=44.956;
		strcpy(h.at_name,"Scandium");
		strcpy(h.at_symbol,"Sc");
		strcpy(h.at_oxid,"+3");
	}
	else if(e==22)
	{
		h.at_no=22;
		h.at_radius=176;
		h.at_mass=47.88;
		strcpy(h.at_name,"Titanium");
		strcpy(h.at_symbol,"Ti");
		strcpy(h.at_oxid,"+2,+3,+4");
	}
	else if(e==23)
	{
		h.at_no=23;
		h.at_radius=166;
		h.at_mass=50.942;
		strcpy(h.at_name,"Vanadium");
		strcpy(h.at_symbol,"V");
		strcpy(h.at_oxid,"+2,+3,+4,+5");
	}
	else if(e==24)
	{
		h.at_no=24;
		h.at_radius=161;
		h.at_mass=51.996;
		strcpy(h.at_name,"Chromium");
		strcpy(h.at_symbol,"Cr");
		strcpy(h.at_oxid,"+2,+3,+6");
	}
	else if(e==25)
	{
		h.at_no=25;
		h.at_radius=156;
		h.at_mass=54.938;
		strcpy(h.at_name,"Manganese");
		strcpy(h.at_symbol,"Mn");
		strcpy(h.at_oxid,"+2,+3,+4,+7");
	}
	else if(e==26)
	{
		h.at_no=26;
		h.at_radius=149;
		h.at_mass=55.845;
		strcpy(h.at_name,"Iron");
		strcpy(h.at_symbol,"Fe");
		strcpy(h.at_oxid,"+2,+3");
	}
	else if(e==27)
	{
		h.at_no=27;
		h.at_radius=145;
		h.at_mass=51.933;
		strcpy(h.at_name,"Cobalt");
		strcpy(h.at_symbol,"Co");
		strcpy(h.at_oxid,"+2,+3");
	}
	else if(e==28)
	{
		h.at_no=28;
		h.at_radius=142;
		h.at_mass=58.693;
		strcpy(h.at_name,"Nickel");
		strcpy(h.at_symbol,"Ni");
		strcpy(h.at_oxid,"+2,+3");
	}
	else if(e==29)
	{
		h.at_no=29;
		h.at_radius=136;
		h.at_mass=63.546;
		strcpy(h.at_name,"Copper");
		strcpy(h.at_symbol,"Cu");
		strcpy(h.at_oxid,"+1,+2");
	}
	else if(e==30)
	{
		h.at_no=30;
		h.at_radius=125;
		h.at_mass=65.39;
		strcpy(h.at_name,"Zinc");
		strcpy(h.at_symbol,"Zn");
		strcpy(h.at_oxid,"+2");
	}
	else if(e==31)
	{
		h.at_no=31;
		h.at_radius=114;
		h.at_mass=69.723;
		strcpy(h.at_name,"Gallium");
		strcpy(h.at_symbol,"Ga");
		strcpy(h.at_oxid,"+3");
	}
	else if(e==32)
	{
		h.at_no=32;
		h.at_radius=103;
		h.at_mass=72.61;
		strcpy(h.at_name,"Germanium");
		strcpy(h.at_symbol,"Ge");
		strcpy(h.at_oxid,"-4,+2,+4");
	}
	else if(e==33)
	{
		h.at_no=33;
		h.at_radius=94;
		h.at_mass=74.992;
		strcpy(h.at_name,"Arsenic");
		strcpy(h.at_symbol,"As");
		strcpy(h.at_oxid,"-3,+3,+5");
	}
	else if(e==34)
	{
		h.at_no=34;
		h.at_radius=88;
		h.at_mass=78.96;
		strcpy(h.at_name,"Selenium");
		strcpy(h.at_symbol,"Se");
		strcpy(h.at_oxid,"-2,+4,+6");
	}
	else if(e==35)
	{
		h.at_no=35;
		h.at_radius=265;
		h.at_mass=79.904;
		strcpy(h.at_name,"Bromine");
		strcpy(h.at_symbol,"Br");
		strcpy(h.at_oxid,"-1,+1,+5");
	}
	else if(e==36)
	{
		h.at_no=36;
		h.at_radius=219;
		h.at_mass=83.80;
		strcpy(h.at_name,"Krypton");
		strcpy(h.at_symbol,"Kr");
		strcpy(h.at_oxid,"0,+2");
	}
	else if(e==37)
	{
		h.at_no=37;
		h.at_radius=212;
		h.at_mass=85.468;
		strcpy(h.at_name,"Rubidium");
		strcpy(h.at_symbol,"Rh");
		strcpy(h.at_oxid,"+1");
	}
	else if(e==38)
	{
		h.at_no=38;
		h.at_radius=206;
		h.at_mass=87.62;
		strcpy(h.at_name,"Strontium");
		strcpy(h.at_symbol,"Sr");
		strcpy(h.at_oxid,"+2");
	}
	else if(e==39)
	{
		h.at_no=39;
		h.at_radius=198;
		h.at_mass=88.906;
		strcpy(h.at_name,"Yttrium");
		strcpy(h.at_symbol,"Y");
		strcpy(h.at_oxid,"+3");
	}
	else if(e==40)
	{
		h.at_no=40;
		h.at_radius=190;
		h.at_mass=91.224;
		strcpy(h.at_name,"Zirconium");
		strcpy(h.at_symbol,"Zr");
		strcpy(h.at_oxid,"+4");
	}
	else if(e==41)
	{
		h.at_no=41;
		h.at_radius=183;
		h.at_mass=92.906;
		strcpy(h.at_name,"Niobium ");
		strcpy(h.at_symbol,"Nh");
		strcpy(h.at_oxid,"+3,+5");
	}
	else if(e==42)
	{
		h.at_no=42;
		h.at_radius=178;
		h.at_mass=95.94;
		strcpy(h.at_name,"Molybdenum");
		strcpy(h.at_symbol,"Mo");
		strcpy(h.at_oxid,"+3,+6");
	}
	else if(e==43)
	{
		h.at_no=43;
		h.at_radius=173;
		h.at_mass=98.906;
		strcpy(h.at_name,"Technetium");
		strcpy(h.at_symbol,"Tc");
		strcpy(h.at_oxid,"+4,+6,+7");
	}
	else if(e==44)
	{
		h.at_no=44;
		h.at_radius=169;
		h.at_mass=101.07;
		strcpy(h.at_name,"Ruthunium");
		strcpy(h.at_symbol,"Ru");
		strcpy(h.at_oxid,"+3");
	}
	else if(e==45)
	{
		h.at_no=45;
		h.at_radius=165;
		h.at_mass=102.90;
		strcpy(h.at_name,"Rhodium");
		strcpy(h.at_symbol,"Rh");
		strcpy(h.at_oxid,"+3");
	}
	else if(e==46)
	{
		h.at_no=46;
		h.at_radius=161;
		h.at_mass=106.42;
		strcpy(h.at_name,"Palladium");
		strcpy(h.at_symbol,"Pd");
		strcpy(h.at_oxid,"+2,+4");
	}
	else if(e==47)
	{
		h.at_no=47;
		h.at_radius=156;
		h.at_mass=107.87;
		strcpy(h.at_name,"Silver");
		strcpy(h.at_symbol,"Ag");
		strcpy(h.at_oxid,"+1");
	}
	else if(e==48)
	{
		h.at_no=48;
		h.at_radius=145;
		h.at_mass=112.41;
		strcpy(h.at_name,"Cadmium");
		strcpy(h.at_symbol,"Cd");
		strcpy(h.at_oxid,"+2");
	}
	else if(e==49)
	{
		h.at_no=49;
		h.at_radius=133;
		h.at_mass=114.82;
		strcpy(h.at_name,"Indium");
		strcpy(h.at_symbol,"In");
		strcpy(h.at_oxid,"+3");
	}
	else if(e==50)
	{
		h.at_no=50;
		h.at_radius=123;
		h.at_mass=118.71;
		strcpy(h.at_name,"Tin");
		strcpy(h.at_symbol,"Sn");
		strcpy(h.at_oxid,"+2,+4");
	}
	else if(e==51)
	{
		h.at_no=51;
		h.at_radius=115;
		h.at_mass=121.76;
		strcpy(h.at_name,"Antimony");
		strcpy(h.at_symbol,"Sh");
		strcpy(h.at_oxid,"-3,+3,+5");
	}
	if(e==52)
	{
		h.at_no=52;
		h.at_radius=108;
		h.at_mass=127.60;
		strcpy(h.at_name,"Tellurium");
		strcpy(h.at_symbol,"Te");
		strcpy(h.at_oxid,"-2,+4,+6");
	}
	else if(e==53)
	{
		h.at_no=53;
		h.at_radius=298;
		h.at_mass=126.90;
		strcpy(h.at_name,"Iodine");
		strcpy(h.at_symbol,"I");
		strcpy(h.at_oxid,"-1,+1,+5,+7");
	}
	else if(e==54)
	{
		h.at_no=54;
		h.at_radius=253;
		h.at_mass=131.29;
		strcpy(h.at_name,"Xenon");
		strcpy(h.at_symbol,"Xe");
		strcpy(h.at_oxid,"0,+2,+4,+6");
	}
	else if(e==55)
	{
		h.at_no=55;
		h.at_radius=14;
		h.at_mass=132.905;
		strcpy(h.at_name,"Caesium");
		strcpy(h.at_symbol,"Cs");
		strcpy(h.at_oxid,"+1");
	}
	else if(e==56)
	{
		h.at_no=56;
		h.at_radius=14;
		h.at_mass=137.33;
		strcpy(h.at_name,"Barium");
		strcpy(h.at_symbol,"Ba");
		strcpy(h.at_oxid,"+2");
	}
	else if(e==57)
	{
		h.at_no=57;
		h.at_radius=247;
		h.at_mass=138.91;
		strcpy(h.at_name,"Lanthanum");
		strcpy(h.at_symbol,"La");
		strcpy(h.at_oxid,"+3");
	}
	else if(e==58)
	{
		h.at_no=58;
		h.at_radius=206;
		h.at_mass=140.12;
		strcpy(h.at_name,"Cerium");
		strcpy(h.at_symbol,"Ce");
		strcpy(h.at_oxid,"+3,+4");
	}
	else if(e==59)
	{
		h.at_no=59;
		h.at_radius=205;
		h.at_mass=140.91;
		strcpy(h.at_name,"Praseodymium");
		strcpy(h.at_symbol,"Pr");
		strcpy(h.at_oxid,"+3");
	}
	else if(e==60)
	{
		h.at_no=60;
		h.at_radius=238;
		h.at_mass=144.24;
		strcpy(h.at_name,"Neodymium");
		strcpy(h.at_symbol,"Nd");
		strcpy(h.at_oxid,"+3");
	}
	else if(e==61)
	{
		h.at_no=61;
		h.at_radius=231;
		h.at_mass=146.92;
		strcpy(h.at_name,"Promethium");
		strcpy(h.at_symbol,"Pm");
		strcpy(h.at_oxid,"+3");
	}
	else if(e==62)
	{
		h.at_no=62;
		h.at_radius=233;
		h.at_mass=150.35;
		strcpy(h.at_name,"Samarium");
		strcpy(h.at_symbol,"Sm");
		strcpy(h.at_oxid,"+2,+3");
	}
	else if(e==63)
	{
		h.at_no=63;
		h.at_radius=225;
		h.at_mass=151.96;
		strcpy(h.at_name,"Europium");
		strcpy(h.at_symbol,"Eu");
		strcpy(h.at_oxid,"+2,+3");
	}
	else if(e==64)
	{
		h.at_no=64;
		h.at_radius=228;
		h.at_mass=157.25;
		strcpy(h.at_name,"Gadolinium");
		strcpy(h.at_symbol,"Gd");
		strcpy(h.at_oxid,"+3");
	}
	else if(e==65)
	{
		h.at_no=65;
		h.at_radius=226;
		h.at_mass=158.93;
		strcpy(h.at_name,"Terbium");
		strcpy(h.at_symbol,"Th");
		strcpy(h.at_oxid,"+3");
	}
	else if(e==66)
	{
		h.at_no=66;
		h.at_radius=226;
		h.at_mass=162.50;
		strcpy(h.at_name,"Dysprosium");
		strcpy(h.at_symbol,"Dy");
		strcpy(h.at_oxid,"+3");
	}
	else if(e==67)
	{
		h.at_no=67;
		h.at_radius=222;
		h.at_mass=164.93;
		strcpy(h.at_name,"Holmium");
		strcpy(h.at_symbol,"Ho");
		strcpy(h.at_oxid,"+3");
	}
	else if(e==68)
	{
		h.at_no=68;
		h.at_radius=222;
		h.at_mass=167.26;
		strcpy(h.at_name,"Erbium");
		strcpy(h.at_symbol,"Er");
		strcpy(h.at_oxid,"+3");
	}
	else if(e==69)
	{
		h.at_no=69;
		h.at_radius=217;
		h.at_mass=168.93;
		strcpy(h.at_name,"Thulium");
		strcpy(h.at_symbol,"Tm");
		strcpy(h.at_oxid,"+3");
	}
	else if(e==70)
	{
		h.at_no=70;
		h.at_radius=208;
		h.at_mass=173.04;
		strcpy(h.at_name,"Ytterbium");
		strcpy(h.at_symbol,"Yb");
		strcpy(h.at_oxid,"+2,+3");
	}
	else if(e==71)
	{
		h.at_no=71;
		h.at_radius=200;
		h.at_mass=174.97;
		strcpy(h.at_name,"Lutetium");
		strcpy(h.at_symbol,"Lu");
		strcpy(h.at_oxid,"+3");
	}
	else if(e==72)
	{
		h.at_no=72;
		h.at_radius=193;
		h.at_mass=178.49;
		strcpy(h.at_name,"Hafnium");
		strcpy(h.at_symbol,"Hf");
		strcpy(h.at_oxid,"+4");
	}
	else if(e==73)
	{
		h.at_no=73;
		h.at_radius=188;
		h.at_mass=180.95;
		strcpy(h.at_name,"Tantalum");
		strcpy(h.at_symbol,"Ta");
		strcpy(h.at_oxid,"+5");
	}
	else if(e==74)
	{
		h.at_no=74;
		h.at_radius=185;
		h.at_mass=183.84;
		strcpy(h.at_name,"Tungsten");
		strcpy(h.at_symbol,"W");
		strcpy(h.at_oxid,"+6");
	}
	else if(e==75)
	{
		h.at_no=75;
		h.at_radius=180;
		h.at_mass=186.21;
		strcpy(h.at_name,"Rhenium");
		strcpy(h.at_symbol,"Re");
		strcpy(h.at_oxid,"+4,+6,+7");
	}
	else if(e==76)
	{
		h.at_no=76;
		h.at_radius=177;
		h.at_mass=190.23;
		strcpy(h.at_name,"Osmium");
		strcpy(h.at_symbol,"Os");
		strcpy(h.at_oxid,"+3,+4");
	}
	else if(e==77)
	{
		h.at_no=77;
		h.at_radius=174;
		h.at_mass=192.22;
		strcpy(h.at_name,"Iridium");
		strcpy(h.at_symbol,"Ir");
		strcpy(h.at_oxid,"+3,+4");
	}
	else if(e==78)
	{
		h.at_no=78;
		h.at_radius=171;
		h.at_mass=195.08;
		strcpy(h.at_name,"Platinum");
		strcpy(h.at_symbol,"Pt");
		strcpy(h.at_oxid,"+2,+4");
	}
	else if(e==79)
	{
		h.at_no=79;
		h.at_radius=156;
		h.at_mass=196.97;
		strcpy(h.at_name,"Gold");
		strcpy(h.at_symbol,"Au");
		strcpy(h.at_oxid,"+1,+3");
	}
	else if(e==80)
	{
		h.at_no=80;
		h.at_radius=154;
		h.at_mass=200.59;
		strcpy(h.at_name,"Mercury");
		strcpy(h.at_symbol,"Hg");
		strcpy(h.at_oxid,"+1,+2");
	}
	else if(e==81)
	{
		h.at_no=81;
		h.at_radius=143;
		h.at_mass=204.38;
		strcpy(h.at_name,"Thallium");
		strcpy(h.at_symbol,"Tl");
		strcpy(h.at_oxid,"+1,+3");
	}
	else if(e==82)
	{
		h.at_no=82;
		h.at_radius=135;
		h.at_mass=207.2;
		strcpy(h.at_name,"Lead");
		strcpy(h.at_symbol,"Pb");
		strcpy(h.at_oxid,"+2,+4");
	}
	else if(e==83)
	{
		h.at_no=83;
		h.at_radius=127;
		h.at_mass=208.98;
		strcpy(h.at_name,"Bismuth");
		strcpy(h.at_symbol,"Bi");
		strcpy(h.at_oxid,"+1,+3");
	}
	else if(e==84)
	{
		h.at_no=84;
		h.at_radius=120;
		h.at_mass=209.98;
		strcpy(h.at_name,"Polonium");
		strcpy(h.at_symbol,"Po");
		strcpy(h.at_oxid,"0");
	}
	else if(e==85)
	{
		h.at_no=85;
		h.at_radius=260;
		h.at_mass=209.99;
		strcpy(h.at_name,"Astatine");
		strcpy(h.at_symbol,"At");
		strcpy(h.at_oxid,"+1");
	}
	else if(e==86)
	{
		h.at_no=86;
		h.at_radius=221;
		h.at_mass=222.02;
		strcpy(h.at_name,"Radon");
		strcpy(h.at_symbol,"Rn");
		strcpy(h.at_oxid,"+2");
	}
	else if(e==87)
	{
		h.at_no=87;
		h.at_radius=31;
		h.at_mass=223.02;
		strcpy(h.at_name,"Francium");
		strcpy(h.at_symbol,"Fr");
		strcpy(h.at_oxid,"+3");
	}
	else if(e==88)
	{
		h.at_no=88;
		h.at_radius=31;
		h.at_mass=226.03;
		strcpy(h.at_name,"Radium");
		strcpy(h.at_symbol,"Ra");
		strcpy(h.at_oxid,"+4");
	}
	else if(e==89)
	{
		h.at_no=89;
		h.at_radius=31;
		h.at_mass=227.03;
		strcpy(h.at_name,"Actinium");
		strcpy(h.at_symbol,"Ac");
		strcpy(h.at_oxid,"+4,+5");
	}
	else if(e==90)
	{
		h.at_no=90;
		h.at_radius=31;
		h.at_mass=232.04;
		strcpy(h.at_name,"Thorium");
		strcpy(h.at_symbol,"Th");
		strcpy(h.at_oxid,"+3,+4,+5,+6");
	}
	else if(e==91)
	{
		h.at_no=91;
		h.at_radius=31;
		h.at_mass=231.04;
		strcpy(h.at_name,"Protactinium");
		strcpy(h.at_symbol,"Pa");
		strcpy(h.at_oxid,"+3,+4,+5,+6");
	}
	else if(e==92)
	{
		h.at_no=92;
		h.at_radius=31;
		h.at_mass=238.03;
		strcpy(h.at_name,"Uranium");
		strcpy(h.at_symbol,"U");
		strcpy(h.at_oxid,"+3,+4,+5,+6");
	}
	else if(e==93)
	{
		h.at_no=93;
		h.at_radius=31;
		h.at_mass=237.05;
		strcpy(h.at_name,"Neptunium");
		strcpy(h.at_symbol,"Np");
		strcpy(h.at_oxid,"+3,+4,+5,+6");
	}
	else if(e==94)
	{
		h.at_no=94;
		h.at_radius=31;
		h.at_mass=244.06;
		strcpy(h.at_name,"Plutonium");
		strcpy(h.at_symbol,"Pu");
		strcpy(h.at_oxid,"+3");
	}
	else if(e==95)
	{
		h.at_no=95;
		h.at_radius=31;
		h.at_mass=243.06;
		strcpy(h.at_name,"Americium");
		strcpy(h.at_symbol,"Am");
		strcpy(h.at_oxid,"+3,+4");
	}
	else if(e==96)
	{
		h.at_no=96;
		h.at_radius=31;
		h.at_mass=247.07;
		strcpy(h.at_name,"Curium");
		strcpy(h.at_symbol,"Cm");
		strcpy(h.at_oxid,"+3");
	}
	else if(e==97)
	{
		h.at_no=97;
		h.at_radius=31;
		h.at_mass=247.07;
		strcpy(h.at_name,"Berkelium");
		strcpy(h.at_symbol,"Bk");
		strcpy(h.at_oxid,"0");
	}
	else if(e==98)
	{
		h.at_no=98;
		h.at_radius=31;
		h.at_mass=251.08;
		strcpy(h.at_name,"Californium");
		strcpy(h.at_symbol,"Cf");
		strcpy(h.at_oxid,"0");
	}
	else if(e==99)
	{
		h.at_no=99;
		h.at_radius=31;
		h.at_mass=252.08;
		strcpy(h.at_name,"Einsteinium");
		strcpy(h.at_symbol,"Es");
		strcpy(h.at_oxid,"0");
	}
	else if(e==100)
	{
		h.at_no=100;
		h.at_radius=31;
		h.at_mass=257.18;
		strcpy(h.at_name,"Fermium");
		strcpy(h.at_symbol,"Fm");
		strcpy(h.at_oxid,"0");  
	}
	else if(e==101)
	{
		h.at_no=101;
		h.at_radius=31;
		h.at_mass=258.10;
		strcpy(h.at_name,"Mendelevium");
		strcpy(h.at_symbol,"Md");
		strcpy(h.at_oxid,"0");
	}
	else if(e==102)
	{
		h.at_no=102;
		h.at_radius=31;
		h.at_mass=259.10;
		strcpy(h.at_name,"Nobelium");
		strcpy(h.at_symbol,"No");
		strcpy(h.at_oxid,"0");
	}
	if(e==103)
	{
		h.at_no=103;
		h.at_radius=31;
		h.at_mass=262.11;
		strcpy(h.at_name,"Lawrencium");
		strcpy(h.at_symbol,"Lr");
		strcpy(h.at_oxid,"0");
	}
	else if(e==104)
	{
		h.at_no=104;
		h.at_radius=31;
		h.at_mass=261.11;
		strcpy(h.at_name,"Rutherfordium");
		strcpy(h.at_symbol,"Rf");
		strcpy(h.at_oxid,"0");   
	}
	else if(e==105)
	{
		h.at_no=105;
		h.at_radius=31;
		h.at_mass=261.11;
		strcpy(h.at_name,"Dubnium");
		strcpy(h.at_symbol,"Db");
		strcpy(h.at_oxid,"0");
	}
	else if(e==106)
	{
		h.at_no=106;
		h.at_radius=31;
		h.at_mass=263.12;
		strcpy(h.at_name,"Seaborgium");
		strcpy(h.at_symbol,"Sg");
		strcpy(h.at_oxid,"0");
	}
	else if(e==107)
	{
		h.at_no=107;
		h.at_radius=31;
		h.at_mass=262.12;
		strcpy(h.at_name,"Bohrium ");
		strcpy(h.at_symbol,"Bh");
		strcpy(h.at_oxid,"0");
	}
	else if(e==108)
	{
		h.at_no=108;
		h.at_radius=31;
//		strcpy(h.at_mass,"NA");
		strcpy(h.at_name,"Hassium");
		strcpy(h.at_symbol,"Hs");
		strcpy(h.at_oxid,"0");
	}
	else if(e==109)
	{
		h.at_no=109;
		h.at_radius=31;
//		strcpy(h.at_mass,"NA");
		strcpy(h.at_name,"Meitnerium");
		strcpy(h.at_symbol,"Mt");
		strcpy(h.at_oxid,"0");
	}
	else if(e==110)
	{
		h.at_no=110;
		h.at_radius=31;
		h.at_mass=269;
		strcpy(h.at_name,"Darmstadtium");
		strcpy(h.at_symbol,"Ds");
		strcpy(h.at_oxid,"0");
	}
	else if(e==111)
	{
		h.at_no=111;
		h.at_radius=31;
		h.at_mass=272;
		strcpy(h.at_name,"Rontgenium");
		strcpy(h.at_symbol,"Rg");
		strcpy(h.at_oxid,"0");
	}
	else if(e==112)
	{
		h.at_no=112;
		h.at_radius=31;
		h.at_mass=277;
		strcpy(h.at_name,"Ununbium");
		strcpy(h.at_symbol,"Uub");
		strcpy(h.at_oxid,"0");
	}
	else if(e==113)
	{
		h.at_no=113;
		h.at_radius=31;
//		strcpy(h.at_mass,"NA");
		strcpy(h.at_name,"Ununtrium");
		strcpy(h.at_symbol,"Uut");
		strcpy(h.at_oxid,"0");
	}
	else if(e==114)
	{
		h.at_no=114;
		h.at_radius=31;
		h.at_mass=285;
		strcpy(h.at_name,"Ununquadium");
		strcpy(h.at_symbol,"Uuq");
		strcpy(h.at_oxid,"0");
	}
	else if(e==115)
	{
		h.at_no=115;
		h.at_radius=31;
	      //	strcpy(h.at_mass,"NA");
		strcpy(h.at_name,"Ununpentium");
		strcpy(h.at_symbol,"Uup");
		strcpy(h.at_oxid,"0");
	}
	else if(e==116)
	{
		h.at_no=116;
		h.at_radius=31;
		h.at_mass=289;
		strcpy(h.at_name,"Ununhxium");
		strcpy(h.at_symbol,"Uuh");
		strcpy(h.at_oxid,"0");
	}
	else if(e==117)
	{
		h.at_no=117;
		h.at_radius=31;
	      //	strcpy(h.at_mass,"NA");
		strcpy(h.at_name,"Ununseptium");
		strcpy(h.at_symbol,"Uus");
		strcpy(h.at_oxid,"0");
	}
	else if(e==118)
	{
		h.at_no=118;
		h.at_radius=31;
		h.at_mass=293;
		strcpy(h.at_name,"Ununoctium");
		strcpy(h.at_symbol,"Uuo");
		strcpy(h.at_oxid,"0");
	}
}