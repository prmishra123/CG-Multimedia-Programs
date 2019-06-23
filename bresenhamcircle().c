//IMPLEMENTATION OF CIRCLE DRAWING ALGORITHMS: (A)  BRESENHAM CIRCLE  ALGO.
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
 int gd=DETECT,gm;
 int d,r,x,y,xc,yc;
 clrscr();
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 printf("enter radius\n");
 scanf("%d",&r);
 printf("enter center of circle\n");
 scanf("%d%d",&xc,&yc);
 d=3-2*r;
 x=0;
 y=r;
 while(x<=y)
 {
 putpixel(xc+x,yc+y,7);
 putpixel(xc-y,yc-x,7);
 putpixel(xc+y,yc-x,7);
 putpixel(xc-y,yc+x,7);
 putpixel(xc+y,yc+x,7);
 putpixel(xc-x,yc-y,7);
 putpixel(xc+x,yc-y,7);
 putpixel(xc-x,yc+y,7);
 if(d<=0)
   {
   d=d+4*x+6;
   }
  else
   {
   d=d+4*x-4*y+10;
   y=y-1;
   }
   x=x+1;
  }
  getch();
  closegraph();
}

