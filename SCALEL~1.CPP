#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{int gd=DETECT,gm;
 float x1,y1,x2,y2,s;
 initgraph(&gd, &gm, "..//BGI");
 cout<<"Enter 2 coordinates";
 cin>>x1>>y1>>x2>>y2;
 cout<<"Enter scaling factor";
 cin>>s;
 setcolor(YELLOW);
 line(x1,y1,x2,y2);
 x1=x1*s;
 y1=y1*s;
 x2*=s;
 y2*=s;
 setcolor(GREEN);
 line(x1,y1,x2,y2);
 getch();
 closegraph();
}