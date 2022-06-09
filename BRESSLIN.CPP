#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{ int gd=DETECT,gm;
  initgraph(&gd,&gm,"..//BGI");
  float x1,y1,x2,y2,dx,dy,p,x,y;
  cout<<"Enter 2 coordinates";
  cin>>x1>>y1>>x2>>y2;
  x=x1;
  y=y1;
  putpixel(x,y,YELLOW);
  dx=x2-x1;
  dy=y2-y1;
  p=2*dy-dx;
  while(x<=x2)
  {
   if(p>=0)
   { x++; y++;
     p=p+2*(dy-dx);
   }
   else
   { x++;
     p=p+2*dy;
   }

   putpixel(x,y,YELLOW);
  }
  getch();
  closegraph();
}