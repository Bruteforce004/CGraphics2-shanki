#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void CompScale(int x1,int y1, int r)
{
 int s,n;
 cout<<"Enter the scaling factor";
 cin>>s;
 cout<<"Enter the times to scale";
 cin>>n;
 setcolor(CYAN);
 circle(x1,y1,r);
 setcolor(YELLOW);
 for(int i=0;i<n;i++)
 {
  r=r*s;
  circle(x1,y1,r);
 }
}
void main()
{
 int gd=DETECT, gm, xc,yc,r;
 initgraph(&gd, &gm, "..//BGI");
 cout<<"Enter center and radius of circle";
 cin>>xc>>yc>>r;
 CompScale(xc,yc,r);
 getch();
 closegraph();
}