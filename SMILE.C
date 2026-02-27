#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setcolor(BLUE);
circle(320,240,100);
circle(270,200,20);
circle(370,200,20);
arc(320,270,180,360,40);
setfillstyle(SOLID_FILL,BLUE);
floodfill(270,200,BLUE);
setfillstyle(SOLID_FILL,BLUE);
floodfill(370,200,BLUE);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(320,240,BLUE);
getch();
closegraph();
return 0;
}