#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
void translation(int x1,int y1,int x2,int y2,int color)
{
 int dx=0,dy=0;
 printf("enter dx and dy\n)";
 scanf(“%d%d”,&dx&dy);
 setcolor(color);
 outtextxy(x1+10,y1-10,"old");
 rectangle(x1,y1,x2,y2);
 setcolor(WHITE);
 outtextxy(x1+dx+10,y1-10+dy,"TRANSLATED");
 rectangle(x1+dx,y1+dy,x2+dx,y2+dy);
}
void rotate(int x1,int y1,int x2,int y2,int color)
{
double angle;
printf("enter angle of rotation\n");
scanf(“%d”,&angle);
angle=(angle*3.14)/180;
setcolor(color);
outtextxy(x1+10,y1-10,"old");
rectangle(x1,y1,x2,y2);
setcolor(WHITE);
int xx1=(x1*cos(angle))-(y1*sin(angle));
int xx2=(x1*cos(angle))-(y2*sin(angle));
int xx3=(x2*cos(angle))-(y2*sin(angle));
int xx4=(x2*cos(angle))-(y1*sin(angle));
int yy1=(x1*sin(angle))+(y1*cos(angle));
int yy2=(x1*sin(angle))+(y2*cos(angle));
int yy3=(x2*sin(angle))+(y2*cos(angle));
int yy4=(x2*sin(angle))+(y1*cos(angle));
outtextxy(xx1+10,yy1-10,"ROTATED");
line(xx1,yy1,xx2,yy2);
line(xx2,yy2,xx3,yy3);
line(xx3,yy3,xx4,yy4);
line(xx4,yy4,xx1,yy1);
}
void scale(int x1,int y1,int x2,int y2,int color)
{
float sx=1,sy=1;
printf("enter sx and sy \n)";
scanf(“%d%d”,&sx&sy);
setcolor(color);
outtextxy(x1+10,y1-10,"old");
rectangle(x1,y1,x2,y2);
setcolor(WHITE);
outtextxy(x1*sx+10,y1*sy-10,"scaling");
rectangle(x1*sx,y1*sy,x2*sx,y2*sy);
}
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
int x1=150,y1=150,x2=350,y2=250;
int ch;
rectangle(x1,y1,x2,y2);
printf("select your choice");
printf("\n 1.Translation 2.Scale 3.Rotate\n");
printf("enter your choice");
scanf(“%d”&ch);
switch(ch)
{
case 1:translation(x1,y1,x2,y2,RED);
      printf("enter dx and dy");
      break;
case 2:scale(x1,y1,x2,y2,RED);
      printf("enter sx and sy");
      break;
case 3:rotate(x1,y1,x2,y2,RED);
      printf("enter angle of rotation");
      break;
default:printf("wrong choice");
}
getch();
closegraph();
}
