//IMPLEMENTATION OF LINE DRAWING ALGORITHMS: (A)  DDA  ALGORITHM
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(){
int gdriver=DETECT,gmode;
int x1=0,x2=50;
int y1=0,y2=100;
float dx=x2-x1;
float dy=y2-y1;
if(dx>dy)   //m<1
{
    dx=1;
	}
	else   //m>=1
	{
	dy=1;
	}
 int x,y;
 x=x1+dx;
 y=y1+dy;
 clrscr();
 initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
 line(x1,y1,x2,y2);
 getch();
 closegraph();
 }
