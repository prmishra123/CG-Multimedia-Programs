//IMPLEMENTATION OF CIRCLE DRAWING ALGORITHMS: MID POINT ALGO.
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main()
{
 int gd=DETECT,gm;
 int i,r,x=0,y,xc,yc;
 float d;
 clrscr();
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 printf("enter radius\n");
 scanf("%d",&r);
 printf("enter center of circle\n");
 scanf("%d%d",&xc,&yc);
 d=1.25-r;
 y=r;
 do
 {
 if(d<0.0)
	{
	x=x+1;
	d=d+2*x+1;
	}
else
	{
	x=x+1;
	y=y-1;
	d=d+2*x-2*y+10;
	}
	putpixel(xc+x,yc+y,7);
	putpixel(xc-y,yc-x,7);
	putpixel(xc+y,yc-x,7);
	putpixel(xc-y,yc+x,7);
	putpixel(xc+y,yc+x,7);
	putpixel(xc-x,yc-y,7);
	putpixel(xc+x,yc-y,7);
	putpixel(xc-x,yc+y,7);
 }
 while(x<y);
 getch();
 }
