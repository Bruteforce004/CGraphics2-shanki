#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{ int gd=DETECT,gm;
  initgraph(&gd,&gm,"..//BGI");
  float r,x,y,t,x1,y1;
  cout<<"Input center and radius of circle";
  cin>>x>>y>>r;
  for(t=0;t<=2*3.1419;t+=0.01)
  { x1=x+r*cos(t) ;
    y1=y+r*sin(t);
    putpixel(x1,y1,YELLOW);
  }
  getch();
  closegraph();
}