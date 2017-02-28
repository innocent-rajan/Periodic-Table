void block(int,int,int,int);
void demo(int,int,int,int);
void at_no();
void color(int,int,int,int,int);
void at_names();
void index();
void number();
void exitmain();
#include<conio.h>
#include<dos.h>
#include<process.h>
#include<iostream.H>
#include<graphics.h>
#include "ELEMENT.CPP"
#include "DESIGN.CPP"
void main()
{
	clrscr();
	int driver=DETECT,mode;
	initgraph(&driver,&mode,"C:\\TURBOC");
	int i=0,l,t;
	at_no();
	setcolor(WHITE);
	at_names();
	index();
	settextstyle(6,0,1);
	outtextxy(140,90,"Enter the atomic number : ");
	char ch[4];
	i=0;
	do
	{
		ch[i]=getch();
		if(ch[i]=='\r')
			 break;
		++i;
		ch[i]='\0';
		outtextxy(350,90,ch);
	}while(i<3);
	i=0;
	int y=atoi(ch);
		while(y>119)
		{
			index();
			y=atoi(ch);
			settextstyle(3,0,1);
			setfillstyle(1,12);
			floodfill(15,35,WHITE);
			settextstyle(6,0,1);
			setcolor(12);
			outtextxy(140,90,"Enter the atomic number : ");
			outtextxy(350,90,ch);
			setcolor(BLUE);
			outtextxy(130,90,"Please enter correct atomic number");
			do
			{
				ch[i]=getch();
				if(ch[i]=='\r')
					 break;
				++i;//settextstyle(11,0,0);
				ch[i]='\0';
				outtextxy(350,110,ch);
			}while(i<3);
		}
	settextstyle(0,0,0);
	int x=atoi(ch);
	if(x==0)
		exitmain();
	if(x>0&&x<119)            //displaying the information.
	{
		cleardevice();
		design(x);
		element(x);
	}
}

void demo(int l,int t,int a,int b)  //function to draw rectangles
{
	int i,j,y=t;
	for(i=0;i<a;++i,l+=30)
		for(j=0,t=y;j<b;++j,t+=20)
			rectangle(l,t,l+30,t+20);
}

void block(int l,int t,int a,int b)  //function to draw rectangles
{
	int i,j,y=t;
	for(i=0;i<a;++i,l+=30)
		for(j=0,t=y;j<b;++j,t+=40)
			rectangle(l,t,l+30,t+40);
}

void color(int c,int l,int t,int a,int b)   //function to color blocks
{
	int i,j,y=t;
	for(i=0;i<a;++i,l+=30)
		for(j=0,t=y;j<b;++j,t+=40)
		{
			setfillstyle(1,c);
			setcolor(BLUE);
			floodfill(l+1,t+1,WHITE);
		}
}

void at_no()
{
	setcolor(YELLOW);
	settextstyle(4,0,8);
	outtextxy(80,50,"Periodic Table");
	settextstyle(5,0,3);
	outtextxy(300,440,"Press any key to continue ...");
	settextstyle(1,0,1);
	setcolor(WHITE);
	demo(50,250,18,4);         //function to draw rectangles on first screen
	demo(50,210,2,2);
	demo(140,350,15,2);
	demo(50,190,1,1);
	demo(560,190,1,1);
	demo(410,210,6,2);
	settextstyle(11,0,0);
	char str[4];
	int l=63;int t=198;
	for(int i=1;i<119;++i,l+=30)
	{
		itoa(i,str,10);
		delay(250);
		outtextxy(l,t,str);
		if(i==1)    	//jumping to He
		{
			l=542;
			t=198;
		}
		else if(i==2)	//jumping to Li
		{
			l=33;
			t+=20;
		}
		else if(i==4)	//jumping to B
			l=393;
		else if(i==9)
			l-=5;
		else if(i==10)
		{
			l=28;
			t+=20;
		}
		else if(i==12)  //jumping to Al
			l=388;
		else if(i==18)	//jumping to K
		{
			l=28;
			t=258;
		}
		else if(i==36||i==54||i==86) //starting from new line
		{
			l=28;
			t+=20;
		}
		else if(i==56)		//Lanthanoids
		{
			l=118;
			t+=60;
		}
		else if(i==71)          //Back to Hf
		{
			l=118;
			t-=60;
		}
		else if(i==88)		//Actinoids
		{
			l=118;
			t+=60;
		}
		else if(i==103)		//Back to Rf
		{
			l=118;
			t-=60;
		}
		if(i==99||i==103)
		{
			l-=4;
		}
		if(kbhit())
			break;
	}
	getch();
	cleardevice();
}

void at_names()
{
	block(50,170,18,4);         //function to draw rectangles
	block(50,90,2,2);
	block(140,360,15,2);
	block(50,50,1,1);
	block(560,50,1,1);
	block(410,90,6,2);
	color(BROWN,81,91,1,6); //Alkaline earth Metal
	color(9,51,91,1,6);     //Alkali Metal
	color(BLUE,561,51,1,6); //Noble gases
	color(GREEN,131,181,10,4); //Transition Metal
	color(GREEN,431,301,6,1);  //Transition Metal
	color(7,51,51,1,1);    //Hydrogen
	color(62,451,181,1,3); //Other Metals
	color(62,421,141,1,4);
	color(62,481,221,1,2);
	color(62,511,261,1,1);
	color(5,411,101,5,1);  //Non-Metals
	color(5,441,141,4,1);
	color(5,471,181,3,1);
	color(5,501,221,2,1);
	color(5,531,261,1,1);
	color(GREEN,141,381,1,2);
	color(8,181,361,14,1);    //Lanthenoids
	color(CYAN,181,401,14,1); //Actinoids
	number();		//For the atomic numbers.
	setcolor(BLACK);
	settextstyle(6,0,3);
	outtextxy(60,100,"Li");
	outtextxy(55,140,"Na");
	outtextxy(60,180,"K");
	outtextxy(55,220,"Rb");
	outtextxy(55,260,"Cs");
	outtextxy(55,300,"Fr");
	outtextxy(85,100,"Be");
	outtextxy(83,137,"Mg");
	outtextxy(83,180,"Ca");
	outtextxy(87,220,"Sr");
	outtextxy(85,260,"Ba");
	outtextxy(85,300,"Ra");
	outtextxy(420,100,"B");
	outtextxy(417,140,"Al");
	outtextxy(415,180,"Ga");
	outtextxy(420,220,"In");
	outtextxy(420,260,"Tl");
	settextstyle(6,0,3);
	outtextxy(450,100,"C");
	outtextxy(447,140,"Si");
	outtextxy(445,180,"Ge");
	outtextxy(445,220,"Sn");
	outtextxy(445,260,"Pb");
	outtextxy(480,140,"P");
	outtextxy(474,180,"As");
	outtextxy(475,220,"Sb");
	outtextxy(478,260,"Bi");
	outtextxy(505,260,"Po");
	outtextxy(535,260,"At");
	outtextxy(510,140,"S");
	outtextxy(505,180,"Se");
	outtextxy(505,220,"Te");
	outtextxy(545,220,"I");
	outtextxy(113,180,"Sc");
	outtextxy(148,180,"Ti");
	outtextxy(178,180,"V");
	outtextxy(203,180,"Cr");
	outtextxy(233,180,"Mn");
	outtextxy(263,180,"Fe");
	outtextxy(293,180,"Co");
	outtextxy(328,180,"Ni");
	outtextxy(353,180,"Cu");
	outtextxy(383,180,"Zn");
	outtextxy(118,220,"Y");
	outtextxy(145,220,"Zr");
	outtextxy(173,220,"Nb");
	outtextxy(203,220,"Mo");
	outtextxy(263,220,"Ru");
	outtextxy(293,220,"Rh");
	outtextxy(325,220,"Pd");
	outtextxy(353,220,"Ag");
	outtextxy(383,220,"Cd");
	outtextxy(145,260,"Hf");
	outtextxy(173,260,"Ta");
	outtextxy(208,260,"W");
	outtextxy(233,260,"Re");
	outtextxy(263,260,"Os");
	outtextxy(300,260,"Ir");
	outtextxy(325,260,"Pt");
	outtextxy(353,260,"Au");
	outtextxy(147,368,"La");
	outtextxy(144,408,"Ac");
	outtextxy(173,408,"Th");
	outtextxy(203,408,"Pa");
	outtextxy(240,408,"U");
	outtextxy(173,368,"Ce");
	outtextxy(203,368,"Pr");
	outtextxy(233,368,"Nd");
	outtextxy(290,368,"Sm");
	outtextxy(325,368,"Eu");
	outtextxy(353,368,"Gd");
	outtextxy(383,368,"Tb");
	outtextxy(414,368,"Dy");
	outtextxy(444,368,"Ho");
	outtextxy(473,368,"Er");
	outtextxy(501,368,"Tm");
	outtextxy(535,368,"Yb");
	outtextxy(565,368,"Lu");
	settextstyle(3,0,1);
	outtextxy(113,252,"La.");
	outtextxy(113,268,".Lu");
	outtextxy(113,292,"Ac.");
	outtextxy(113,308,".Lr");
	setcolor(GREEN);
	settextstyle(6,0,3);
	outtextxy(60,60,"H");
	outtextxy(480,100,"N");
	outtextxy(510,100,"O");
	outtextxy(540,100,"F");
	outtextxy(538,140,"Cl");
	//Noble gases start
	outtextxy(565,60,"He");
	outtextxy(565,100,"Ne");
	outtextxy(565,140,"Ar");
	outtextxy(565,180,"Kr");
	outtextxy(565,220,"Xe");
	outtextxy(565,260,"Rn");
	setcolor(BLUE);
	settextstyle(6,0,1);
	outtextxy(413,301,"Uut");
	outtextxy(442,301,"Uuq");
	outtextxy(472,301,"Uup");
	outtextxy(502,301,"Uuh");
	outtextxy(532,301,"Uus");
	outtextxy(562,301,"Uuo");
	outtextxy(263,373,"Pm");
	outtextxy(323,413,"Am");
	outtextxy(353,413,"Cm");
	outtextxy(475,413,"Fm");
	outtextxy(505,413,"Md");
	outtextxy(295,300,"Mt");
	settextstyle(6,0,3);
	outtextxy(263,408,"Np");
	outtextxy(293,408,"Pu");
	outtextxy(385,408,"Bk");
	outtextxy(415,408,"Cf");
	outtextxy(445,408,"Es");
	outtextxy(533,408,"No");
	outtextxy(568,408,"Lr");
	outtextxy(293,408,"Pu");
	outtextxy(233,220,"Tc");
	outtextxy(145,295,"Rf");
	outtextxy(173,295,"Db");
	outtextxy(203,295,"Sg");
	outtextxy(233,295,"Bh");
	outtextxy(265,295,"Hs");
	outtextxy(325,295,"Ds");
	outtextxy(355,295,"Rg");
	outtextxy(385,295,"Cn");
	setcolor(WHITE);
	outtextxy(383,260,"Hg");
	outtextxy(538,180,"Br");
}

void index()
{
	settextstyle(3,0,1);
	setfillstyle(1,12);
	floodfill(25,355,WHITE);
	setcolor(BLACK);
	rectangle(20,345,100,365);
	outtextxy(40,343,"Solid");
	setcolor(WHITE);
	rectangle(20,375,100,395);
	outtextxy(35,373,"Liquid");
	setcolor(GREEN);
	rectangle(20,405,100,425);
	outtextxy(45,402,"Gas");
	setcolor(BLUE);
	rectangle(20,435,100,455);
	outtextxy(22,433,"Synthetic");
}

void exitmain()
{
	int t=120,c=62;
	cleardevice();
	setcolor(c);
	settextstyle(10,0,5);
	delay(250);
	outtextxy(t,100,"T");
	setcolor(BLACK);
	delay(250);
	outtextxy(t,100,"T");
	setcolor(c);
	delay(100);
	outtextxy(t,110,"T");
	setcolor(BLACK);
	delay(100);
	outtextxy(t,110,"T");
	setcolor(62);
	delay(250);
	outtextxy(t,100,"T");
	setcolor(c);
	delay(250);
	t+=40;
	outtextxy(t,100,"H");
	setcolor(BLACK);
	delay(250);
	outtextxy(t,100,"H");
	setcolor(c);
	delay(100);
	outtextxy(t,110,"H");
	setcolor(BLACK);
	delay(100);
	outtextxy(t,110,"H");
	setcolor(c);
	delay(250);
	outtextxy(t,100,"H");
	delay(250);
	t+=40;
	outtextxy(t,100,"A");
	setcolor(BLACK);
	delay(250);
	outtextxy(t,100,"A");
	setcolor(c);
	delay(100);
	outtextxy(t,110,"A");
	setcolor(BLACK);
	delay(100);
	outtextxy(t,110,"A");
	setcolor(c);
	delay(250);
	outtextxy(t,100,"A");
	delay(250);
	t+=50;
	outtextxy(t,100,"N");
	setcolor(BLACK);
	delay(250);
	outtextxy(t,100,"N");
	setcolor(c);
	delay(100);
	outtextxy(t,110,"N");
	setcolor(BLACK);
	delay(100);
	outtextxy(t,110,"N");
	setcolor(c);
	delay(250);
	outtextxy(t,100,"N");
	delay(250);
	t+=40;
	outtextxy(t,100,"K");
	setcolor(BLACK);
	delay(250);
	outtextxy(t,100,"K");
	setcolor(c);
	delay(100);
	outtextxy(t,110,"K");
	setcolor(BLACK);
	delay(100);
	outtextxy(t,110,"K");
	setcolor(c);
	delay(250);
	outtextxy(t,100,"K");
	delay(250);
	t+=80;
	outtextxy(t,100,"Y");
	setcolor(BLACK);
	delay(250);
	outtextxy(t,100,"Y");
	setcolor(c);
	delay(100);
	outtextxy(t,110,"Y");
	setcolor(BLACK);
	delay(100);
	outtextxy(t,110,"Y");
	setcolor(c);
	delay(250);
	outtextxy(t,100,"Y");
	delay(250);
	t+=40;
	outtextxy(t,100,"O");
	setcolor(BLACK);
	delay(250);
	outtextxy(t,100,"O");
	setcolor(c);
	delay(100);
	outtextxy(t,110,"O");
	setcolor(BLACK);
	delay(100);
	outtextxy(t,110,"O");
	setcolor(c);
	delay(250);
	outtextxy(t,100,"O");
	delay(250);
	t+=40;
	outtextxy(t,100,"U");
	setcolor(BLACK);
	delay(250);
	outtextxy(t,100,"U");
	setcolor(c);
	delay(100);
	outtextxy(t,110,"U");
	setcolor(BLACK);
	delay(100);
	outtextxy(t,110,"U");
	setcolor(c);
	delay(250);
	outtextxy(t,100,"U");
	settextstyle(5,0,1);
	outtextxy(415,440,"A product by Rajan girsa.");
}

void number() //For atomic numbers in the table.
{
	setcolor(WHITE);
	settextstyle(11,0,10);
	char str[4];
	int l=63;int t=53;
	for(int i=1;i<119;++i,l+=30)
	{
		itoa(i,str,10);
		outtextxy(l,t,str);
		if(i==1)    	//jumping to He
		{
			l=543;
			t=53;
		}
		else if(i==2)	//jumping to Li
		{
			l=33;
			t+=40;
		}
		else if(i==4)	//jumping to B
			l=393;
		else if(i==9)
			l-=5;
		else if(i==10)
		{
			l=28;
			t+=40;
		}
		else if(i==12)  //jumping to Al
			l=388;
		else if(i==18)	//jumping to K
		{
			l=28;
			t=173;
		}
		else if(i==36||i==54||i==86) //starting from new line
		{
			l=28;
			t+=40;
		}
		else if(i==56)		//Lanthanoids
		{
			l=118;
			t+=110;
		}
		else if(i==71)          //Back to Hf
		{
			l=118;
			t-=110;
		}
		else if(i==88)		//Actinoids
		{
			l=118;
			t+=110;
		}
		else if(i==103)		//Back to Rf
		{
			l=118;
			t-=110;
		}
		if(i==99||i==103)
		{
			l-=4;
		}
	}
}

/*
Black-Solid
White-Liquids
Green-Gas
Blue-Synthetic
*/