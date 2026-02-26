#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<dos.h>
int main()
{
  int gd=DETECT,gm,i;
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  for (i=50;i<=640;i+=10)
  {
    cleardevice();
    line(0,230,640,230);
    rectangle(i,200,i+5,205);
    rectangle(i+100,200,i+105,205);
    line(i,200,i,225);
    line(i+105,200,i+105,225);
    line(i,200,i+105,200);
    rectangle(i+75,175,i+55,195);
    rectangle(i+25,175,i+45,195);
    rectangle(i+80,170,i+50,200);
    rectangle(i+20,170,i+50,200);
    line(i,225,i+18,225);
    line(i+82,225,i+105,225);
    line(i+32,225,i+68,225);
    arc(i+75,225,0,180,7);
    arc(i+25,225,0,180,7);
    circle(i+75,225,5);
    circle(i+25,225,5);
    outtextxy(i+55,210,"97");
    delay(300);
  }
  getch();
  closegraph();
  return 0;
}