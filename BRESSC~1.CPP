#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void bressdraw(float xc, float yc, float x, float y)
{
 putpixel(xc+x,yc+y,YELLOW);
 putpixel(xc+x,yc-y,YELLOW);
 putpixel(xc-x,yc+y,YELLOW);
 putpixel(xc-x,yc-y,YELLOW);
 putpixel(xc+y,yc+x,YELLOW);
 putpixel(xc+y,yc-x,YELLOW);
 putpixel(xc-y,yc+x,YELLOW);
 putpixel(xc-y,yc-x,YELLOW);
}
void main()
{ int gd=DETECT,gm;
  initgraph(&gd,&gm,"..//BGI");
  float xc,yc,r,p,x,y;
  cout<<"Enter the center and the radius";
  cin>>xc>>yc>>r;
  x=0;
  y=r;
  putpixel(x,y,YELLOW);
  p=1-r;
  while(x<y)
  {
   if(p>=0)
   {p=p+2*(x-y)+1;
    x++; y--;}
   else
   {p=p+2*x+1;
    x++;}
   bressdraw(xc,yc,x,y);
  }
  getch();
  closegraph();
}