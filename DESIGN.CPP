#include<string.h>
#include<stdlib.h>

void design(int e)
{
	int i,t,l,a=280,b=40;
	char x;
	setcolor(WHITE);
	if(e<119||e>0)
	{
		char str[20];
		element(e);
		rectangle(a,b,a+70,b+80);
		settextstyle(3,0,1);
		itoa(h.at_no,str,10);
		outtextxy(a+3,b+2,str);
		settextstyle(3,0,4);
		outtextxy(a+12,b+20,h.at_symbol);
		settextstyle(2,0,4);
		outtextxy(a+5,b+55,h.at_name);
		settextstyle(2,0,4);
		itoa(h.at_mass,str,10);
		outtextxy(a+50,b+10,str);
	}
	t=100;l=180;
	setcolor(WHITE);
	for(i=0;i<400;++i)
	outtextxy(15+i+t,0+l,"Í");
	for(i=0;i<200;++i)
	outtextxy(10+t,5+i+l,"º");
	outtextxy(420+t,0+l,"»");
	outtextxy(10+t,0+l,"É");
	outtextxy(10+t,210+l,"È");
	outtextxy(420+t,210+l,"¼");
	for(i=0;i<400;++i)
	outtextxy(15+i+t,210+l,"Í");
	for(i=0;i<200;++i)
	outtextxy(420+t,5+i+l,"º");
	settextstyle(6,0,2);
	outtextxy(20+t,20+l,"Atomic Number :");
	outtextxy(20+t,50+l,"Atomic Symbol :");
	outtextxy(20+t,80+l,"Atomic Name :");
	outtextxy(20+t,110+l,"Atomic Mass :");
	outtextxy(20+t,140+l,"Atomic Radius :");
	outtextxy(20+t,170+l,"Oxidation State :");
	if(e<119||e>0)
	{
		char str[20];
		element(e);
		itoa(h.at_no,str,10);
		outtextxy(180+t,20+l,str);
		outtextxy(180+t,50+l,h.at_symbol);
		outtextxy(180+t,80+l,h.at_name);
		itoa(h.at_mass,str,10);
		outtextxy(180+t,110+l,str);
		itoa(h.at_radius,str,10);
		outtextxy(180+t,140+l,str);
		outtextxy(180+t,170+l,h.at_oxid);
	}
	char ch=getch();
	if(ch==27)
		exitmain();
	else if(ch==8)
	{
		cleardevice();
		setcolor(WHITE);
		at_names();
		settextstyle(3,0,1);
		setcolor(BLACK);
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
		settextstyle(6,0,1);
		outtextxy(140,90,"Enter the atomic number : ");
		char ch[4];
		i=0;
		do
		{
			ch[i]=getch();
			if(ch[i]=='\r')
				 break;
			++i;//settextstyle(11,0,0);
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
					outtextxy(350,120,ch);
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
	getch();
}