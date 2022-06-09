#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{int gd=DETECT,gm;
 float x1,y1,x2,y2,steps,dx,dy,xinc,yinc;
 initgraph(&gd, &gm, "..//BGI");
 cout<<"Enter 2 coordinates";
 cin>>x1>>y1>>x2>>y2;
 dx=x2-x1;
 dy=y2-y1;
 if(dx>=dy)steps=dx;
 else steps=dy;
 xinc=dx/steps;
 yinc=dy/steps;
 putpixel(x1,y1,YELLOW);
 for(int i=0;i<steps;i++)
 { x1=x1+xinc;
   y1=y1+yinc;
   putpixel(x1,y1,YELLOW);
 }
 getch();
 closegraph();
}