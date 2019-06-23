//IMPLEMENTATION OF LINE DRAWING ALGORITHMS: (A)  BRESENHAM ALGORITHM
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void drawline(int x0,int y0,int x1,int y1)
{
	int dx,dy,p,x,y;
	dx=x1-x0;
	dy=y1-y0;
	x=x0;
	y=y0;
	p=2*dy-dx;
	while(x<x1)
	{
	if(p>=0)
	{
	putpixel(x,y,7);
	y=y+1;
	p=p+2*dy-2*dx;
	}
	else
	{
	putpixel(x,y,7);
    p=p+2*dy;
	}
	x=x+1;
	}
   }
   void main()
   {
   int gdriver=DETECT,gmode,x0,y0,x1,y1;
   initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
   printf("enter coordinates of first point:");
   scanf("%d%d",&x0,&y0);
   printf("enter coordinates of second point:");
   scanf("%d%d", &x1,&y1);
   drawline(x0,y0,x1,y1);
   getch();
   closegraph();
   }

