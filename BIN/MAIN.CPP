#include<conio.h>    //for getch()
#include<fstream.h>
#include<dos.h>     //for delay()
#include<graphics.h>  //to use graphics
#include<FILE_FUN.CPP>//for using files
#include<GRAPH.CPP>  //cpp files containing the following declared prototypes

void ini();               //to initialize graphics
void mainscreen();
void dblock();
void sblock();
void dblock();
void fblock();
void pblock();
int atom();

void greet()
{
    ini();
    setbkcolor(0);
    settextstyle(BOLD_FONT,0,4);
    outtextxy(70,170,"THE PERIODIC TABLE ");
    settextstyle(3,0,3);
    outtextxy(172,250,"BY DIVYANK AND KAMRAN ");
    delay(1100);
}

void thanks()
{
    settextstyle(BOLD_FONT,0,6);
    setbkcolor(0);
    setcolor(WHITE);
    outtextxy(85,140,"THANK YOU !");
    delay(800);
}

void main()
{
    ini();
    greet();
    char ch,ch1;
    do
    {
	mainscreen();
	cleardevice();
	setbkcolor(CYAN);
	for(int i=0;i<80;i++)
	    cout<<char(479);
	cout<<" ENTER THE BLOCK YOU WANT TO ENTER : "<<"\n s for s block";
	cout<<"\n d for d block \n f for f block \n p for p block ";
	cout<<"\n\t\t\t\t PRESS e TO EXIT \n";
	for(i=0;i<80;i++)
	    cout<<char(479);
	cout<<" YOUR CHOICE : ";
	cin>>ch;
	if(ch=='p'||ch=='P')
	{
	     pblock();
	     atom();
	}
	else if(ch=='d'||ch=='D')
	{
	     dblock();
	     atom();
	}
	else if(ch=='s'||ch=='S')
	{
	     sblock();
	     atom();
	}
	else if(ch=='f'||ch=='f')
	{
	     fblock();
	     atom();
	}
	else if(ch=='e'||ch=='E')
	     goto label;
	else
	{
	     cout<<"\n\t\t\t\tINVALID CHOICE !!";
	     getch();
	}
	clrscr();
	cleardevice();
	setbkcolor(CYAN);
	cout<<"\n\n\n\n\n\n\n\n\n\n";
	cout<<"\n\t\t\tDO YOU WANT TO CONTINUE ? (Y/N)";
	cout<<"\n\t\t\t\t    ";
	cin>>ch1;
    }while(ch1=='y'||ch1=='Y');

    label:;
    cleardevice();
    thanks();

    closegraph();
    cleardevice();
    restorecrtmode();
}
