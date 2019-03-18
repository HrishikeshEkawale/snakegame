
#include<graphics.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<string.h>
//using namespace std;
 int ch;
 int a=310,b=215,c=365,d=215,c1=360,c2=223;
 int a1=350,a2=100,p=-1;
 int flag=0,r1=300,r3=600,flag1=0;
 int x1=50,x3=250;
 void move();
 void display();
 void dotted(int,int,int,int);
 void display_won();
 void timer();

 /*void timer()
 {
  char ch[1];
  for(ch[0]=1;ch[0]<15;ch[0]++)
  {
   outtextxy(90,10,"TIMER :");
   outtextxy(130,10,ch);
   move();
  }
 }*/
void rect()
{
 if(p==1)
 {
  dotted(r1+25,5,RED,RED);
 }
 if(p==2)
 {
  dotted(r1+75,5,RED,RED);
 }
 if(p==3)
 {
  dotted(r1+101,5,RED,RED);
 }
 if(p==4)
 {
  dotted(r1+151,5,RED,RED);
 }
 if(p==5)
 {
  dotted(r1+210,5,RED,RED);
 }
 if(p==6)
 {
   dotted(r1+255,5,RED,RED);
   display_won();
 }
}


void draw_circle()
{
 if(p==-1)
 {
  setcolor(GREEN);
  circle(a1,a2,6);
  //setcolor(BLACK);
  dotted(a1,a2,RED,GREEN);
  p++;
 }
 else if(p==0)
 {

  setcolor(BLACK);
  circle(a1,a2,6);
  dotted(a1,a2,BLACK,BLACK);
  setcolor(BLACK);
  settextstyle(0,HORIZ_DIR,2);
  outtextxy(0,10,"SCORE:");
  outtextxy(100,10,"0");

  setcolor(GREEN);
  settextstyle(0,HORIZ_DIR,2);
  outtextxy(0,10,"SCORE:");
  outtextxy(100,10,"10");
  circle(a1,a2=a2+50,6);
  //setcolor(BLACK);
  dotted(a1,a2,RED,GREEN);
  p++;
 }
 else if(p==1)
 {
  setcolor(BLACK);
  settextstyle(0,HORIZ_DIR,2);
  outtextxy(0,10,"SCORE:");
  outtextxy(100,10,"10");

  setcolor(BLACK);
  circle(a1,a2,6);
  dotted(a1,a2,BLACK,BLACK);
  setcolor(GREEN);
  settextstyle(0,HORIZ_DIR,2);
  outtextxy(0,10,"SCORE:");
  outtextxy(100,10,"20");
  circle(a1=a1-4,a2=a2+50,6);
  dotted(a1,a2,RED,GREEN);
  //setcolor(BLACK);
  //setcolor(BLACK);
  //circle(a1,a2,6);
  p++;
  flag1=1;
  return;
 }
 else if(flag1==1)
 {
  setcolor(BLACK);
  settextstyle(0,HORIZ_DIR,2);
  outtextxy(0,10,"SCORE:");
  outtextxy(100,10,"20");
  setcolor(BLACK);
  circle(a1,a2,6);
  dotted(a1,a2,BLACK,BLACK);
  setcolor(GREEN);
  settextstyle(0,HORIZ_DIR,2);
  outtextxy(0,10,"SCORE:");
  outtextxy(100,10,"30");
  circle(a1=a1+40,a2=a2+50,8);
  //setcolor(BLACK);
  dotted(a1,a2,BLUE,GREEN);
  //timer();
  flag1=0;
  return;
 }
 else if(p==2)
 {

  setcolor(BLACK);
  settextstyle(0,HORIZ_DIR,2);
  outtextxy(0,10,"SCORE:");
  outtextxy(100,10,"30");
  circle(a1,a2,8);
  dotted(a1,a2,BLACK,BLACK);
  setcolor(GREEN);
  settextstyle(0,HORIZ_DIR,2);
  outtextxy(0,10,"SCORE:");
  outtextxy(100,10,"50");
  circle(a1=a1+6,a2=a2+50,6);
  //setcolor(BLACK);
  dotted(a1,a2,RED,GREEN);
  p++;
 }
 else if(p==3)
 {

  setcolor(BLACK);
  settextstyle(0,HORIZ_DIR,2);
  outtextxy(0,10,"SCORE:");
  outtextxy(100,10,"50");
  circle(a1,a2,6);
  dotted(a1,a2,BLACK,BLACK);
  setcolor(GREEN);
  settextstyle(0,HORIZ_DIR,2);
  outtextxy(0,10,"SCORE:");
  outtextxy(100,10,"60");
  circle(a1=a1+15,a2=a2-30,6);
  //setcolor(BLACK);
  dotted(a1,a2,RED,GREEN);
  p++;
 }
 else if(p==4)
 {
  setcolor(BLACK);
  settextstyle(0,HORIZ_DIR,2);
  outtextxy(0,10,"SCORE:");
  outtextxy(100,10,"60");
  circle(a1,a2,6);
  dotted(a1,a2,BLACK,BLACK);
  setcolor(GREEN);
  settextstyle(0,HORIZ_DIR,2);
  outtextxy(0,10,"SCORE:");
  outtextxy(100,10,"70");
  circle(a1=a1-30,a2=a2+30,6);
  //setcolor(BLACK);
  dotted(a1,a2,RED,GREEN);
  p++;
 }
 else if(p==5)
 {
   outtextxy(0,10,"SCORE:");
   outtextxy(100,10,"80");
   settextstyle(0,HORIZ_DIR,2);
   setcolor(BLACK);
   outtextxy(0,10,"SCORE:");
   outtextxy(100,10,"70");
   settextstyle(0,HORIZ_DIR,2);
  circle(a1,a2,6);
  dotted(a1,a2,BLACK,BLACK);
  p++;
 }

}

  void display()
  {
    clrscr();
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
    cout<<"\t\t\t\t  *** YOU LOSS THE GAME ***     \t\t\t";
    getch();
    delay(50);
    exit(0);
  }

  void display_won()
  {
    clrscr();
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
    cout<<"\t\t\t\t  *** YOU WON THE GAME  ***     \t\t\t";
    getch();
    delay(50);
    exit(0);
  }


void get()
{
ch=getch();
move();
}



void move()
{
 int i;
 int q;
 if(ch==68 || ch==100)
 {
   while(!kbhit())
   {
	setcolor(BLACK);

	line(a,b,c,d);
	line(a,b+1,c,d+1);
	line(a,b+2,c,d+2);
	line(a,b+3,c,d+3);
	line(a,b+4,c,d+4);
	a++;
	c++;
	//c1++;

	if(getpixel(c,d)==15)
	{
	 display();
	}
	if(getpixel(c,d)==GREEN)
	 {
	 draw_circle();
	 q=30;
	 a=a-q;
	 //b=0;
	 flag=1;
	}
	if(flag==1)
	{
	 //a=-1;
	 //dotted((r1+25),5,RED,RED);
	 rect();
	 flag=0;
	}

	setcolor(GREEN);

	line(a,b,c,d);
	line(a,b+1,c,d+1);
	line(a,b+2,c,d+2);
	line(a,b+3,c,d+3);
	line(a,b+4,c,d+4);
	/*for(int i=c-6;i<=c+2;i++)
	{
	 putpixel(i,b+2,RED);
	 putpixel(i,216,0);
	 putpixel(i,218,0);
	} */
	for(i=c-8;i>=a;i=i-2)
	{
	 setcolor(RED);
	 circle(i,b+2,1);
	 q=0;
	}
   delay(10);
  }
  get();
 }



if(ch==65 || ch==97)
{
 int q=0;
 while(!kbhit())
 {
	setcolor(BLACK);

	line(a,b,c,d);
	line(a,b+1,c,d+1);
	line(a,b+2,c,d+2);
	line(a,b+3,c,d+3);
	line(a,b+4,c,d+4);
       /*	line(a,b,c,d);
	line(b,a+1,d,c+1);
	line(b,a+2,d,c+2);
	line(b,a+3,d,c+3);
	line(b,a+4,d,c+4);
       */

     a--;
     c--;

     if(getpixel(a,b)==15)
     {
	display();
	//exit(0);
     }
	if(getpixel(a,b)==GREEN)
	{
	  q=30;
	 c=c+q;
	 draw_circle();
	 flag=1;
	}
	if(flag==1)
	{
	 //a=-1;
	 //dotted((r1+25),5,RED,RED);
	 rect();
	 flag=0;
	}
	setcolor(GREEN);
	line(a,b,c,d);
	line(a,b+1,c,d+1);
	line(a,b+2,c,d+2);
	line(a,b+3,c,d+3);
	line(a,b+4,c,d+4);
	  /*for(i=a+6;i>=a-2;i--)
	  {
	   putpixel(i,b+2,RED);
	   putpixel(i,216,0);
	   putpixel(i,218,0);
	  }*/
	for(i=a+8;i<=c+q;i=i+2)
	{
	 setcolor(RED);
	 circle(i,b+2,1);
	 q=0;
	}
	delay(10);
}
get();
}

if(ch==87 || ch==119)
{

	while(!kbhit())
	{

	 setcolor(BLACK);
	line(a,b,c,d);
	line(a,b+1,c,d+1);
	line(a,b+2,c,d+2);
	line(a,b+3,c,d+3);
	line(a,b+4,c,d+4);
	b--;
	d--;


	if(getpixel(c,d)==15)
	{
	 display();
	}

	if(getpixel(c,d)==GREEN)
	{
	 //a=a-5;
	 draw_circle();
	 flag=1;
	}

	if(flag==1)
	{
	 //a=-1;
	 //dotted((r1+25),5,RED,RED);
	 rect();
	 flag=0;
	}
	setcolor(GREEN);
	line(a,b,c,d);
	line(a,b+1,c,d+1);
	line(a,b+2,c,d+2);
	line(a,b+3,c,d+3);
	line(a,b+4,c,d+4);
	//line(c,c+55,c,d);
	 /* for(i=c-6;i<=c+2;i++)
	  {
	   putpixel(i,b+2,RED);
	   putpixel(i,216,0);
	   putpixel(i,218,0);
	  }*/
	/*for(i=c-8;i>=a;i=i-2)
	{
	 setcolor(RED);
	 circle(i,b+2,1);
	}*/
	delay(10);
}
get();
}

if(ch==83 || ch==115)
{
while(!kbhit())
{
	setcolor(BLACK);

	line(a,b,c,d);
	line(a,b+1,c,d+1);
	line(a,b+2,c,d+2);
	line(a,b+3,c,d+3);
	line(a,b+4,c,d+4);

	d++;
	b++;

	if(getpixel(c,d+4)==15)
	{
		display();
	}

	if(getpixel(c,d+4)==GREEN)
	{
	 //a=a-5;
	 draw_circle();
	 flag=1;
	}

	if(flag==1)
	{
	 //a=-1;
	 //dotted((r1+25),5,RED,RED);
	 rect();
	 flag=0;
	}
	setcolor(GREEN);

	line(a,b,c,d);
	line(a,b+1,c,d+1);
	line(a,b+2,c,d+2);
	line(a,b+3,c,d+3);
	line(a,b+4,c,d+4);

	  /*for(i=a+6;i>=a-2;i--)
	  {
	   putpixel(i,b+2,RED);
	   putpixel(i,216,0);
	   putpixel(i,218,0);
	  }*/
	for(i=c-2;i>=a;i=i-2)
	{
	 setcolor(RED);
	 circle(i,b+2,1);
	}
   delay(10);
  }
  get();
 }

}


void dotted(int x,int y,int c,int b)
{
	int p;
	p=getpixel(x,y);

	if(p!=b && p!=c)
	{
		putpixel(x,y,c);
		dotted(x+1,y,c,b);
		dotted(x-1,y,c,b);
		dotted(x,y+1,c,b);
		dotted(x,y-1,c,b);
	}
}


int main()
{

	int gm,gd=DETECT;
	initgraph(&gd,&gm,"c:\\");

	settextstyle(0,HORIZ_DIR,2);
	outtextxy(60,200,"LET'S PLAY THE GAME OF SNAKE ");
	delay(3000);
	cleardevice();
	settextstyle(0,HORIZ_DIR,2);
	outtextxy(0,10,"SCORE:");
	outtextxy(100,10,"0");


	line(40,30,40,400); //first rectangle 1st verticle
	line(40,30,600,30); //first rectangle top horizontal
	line(600,30,600,400);//first rectangle 2nd verticle
	line(40,400,600,400);//first rectangle bottom verticle

	line(60,50,60,380);//second rectangle
	line(60,50,580,50);//second rectangle
	line(580,50,580,380);//second rectangle
	line(60,380,580,380);//second rectangle


	line(40,50,60,50);
	line(580,50,580,30);
	line(60,400,60,380);


	//line(580,380,600,380);
	//coloring
	//dotted(162,380,15,3);
	//dotted(41,95,3,15);
	//circle(100,100,10);
	//dotted(100,100,128,15);

	//left side wall
	line(40,101,60,101);
	dotted(42,100,RED,WHITE);
	line(40,160,60,160);
	dotted(42,150,YELLOW,WHITE);
	line(40,215,60,215);
	dotted(42,210,RED,WHITE);
	line(40,275,60,275);
	dotted(42,260,YELLOW,WHITE);
	line(40,340,60,340);
	dotted(42,335,RED,WHITE);
	dotted(42,360,YELLOW,WHITE);

	//right sides wall
	line(580,85,600,85);
	dotted(582,40,YELLOW,WHITE);
	line(580,145,600,145);
	dotted(582,140,RED,WHITE);
	line(580,207,600,207);
	dotted(590,205,YELLOW,WHITE);
	line(580,267,600,267);
	dotted(582,230,RED,WHITE);
	line(580,324,600,324);
	dotted(582,300,YELLOW,WHITE);
	line(580,380,600,380);
	dotted(582,378,RED,WHITE);



	//top wall
	line(110,50,110,30);
	dotted(100,40,YELLOW,WHITE);
	line(179,50,179,30);
	dotted(150,40,RED,WHITE);
	line(249,50,249,30);
	dotted(200,40,YELLOW,WHITE);
	line(318,50,318,30);
	dotted(300,40,RED,WHITE);
	line(386,50,386,30);
	dotted(350,40,YELLOW,WHITE);
	line(455,50,455,30);
	dotted(400,40,RED,WHITE);
	line(523,50,523,30);
	dotted(500,40,YELLOW,WHITE);
	dotted(530,40,RED,WHITE);

	//bottom wall

	line(130,380,130,400);
	dotted(120,390,RED,WHITE);
	line(195,380,195,400);
	dotted(150,390,YELLOW,WHITE);
	line(265,380,265,400);
	dotted(200,390,RED,WHITE);
	line(330,380,330,400);
	dotted(300,390,YELLOW,WHITE);
	line(395,380,395,400);
	dotted(350,390,RED,WHITE);
	line(465,380,465,400);
	dotted(400,390,YELLOW,WHITE);
	line(535,380,535,400);
	dotted(500,390,RED,WHITE);
	line(700,380,700,400);
	dotted(598,390,YELLOW,WHITE);


	setcolor(GREEN);
	line(a,b,c,d);
	line(a,b+1,c,d+1);
	line(a,b+2,c,d+2);
	line(a,b+3,c,d+3);
	line(a,b+4,c,d+4);
setcolor(BROWN);
for(int i=359;i>=310;i=i-2)
{
 circle(i,217,1);
}
/*for(i=361;i<=365;i++)
{
 putpixel(i,217,RED);
 putpixel(i,216,0);
 putpixel(i,218,0);

}*/
 //circle(360,223,3)
 //dotted(50,200,6,15);
 //dotted(400,40,6,15);
 //dotted(300,390,6,15);
 //dotted(590,300,6,15);
 //ch=68;

 draw_circle();
 setcolor(RED);
 rectangle(r1,0,r3,10);

 setcolor(RED);
 line(r1+50,0,r1+50,10);

 setcolor(RED);
 line(r1+100,0,r1+100,10);

 setcolor(RED);
 line(r1+150,0,r1+150,10);

 setcolor(RED);
 line(r1+200,0,r1+200,10);

 setcolor(RED);
 line(r1+250,0,r1+250,10);

 setcolor(RED);
 line(r1+250,0,r1+250,10);

 setcolor(RED);
 line(r1,0,r1,10);
 get();
 getch();
 return 0;
}