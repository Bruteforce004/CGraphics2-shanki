#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{int gd=DETECT,gm;
 int vert[10],nvert[10];
 float t;
 initgraph(&gd, &gm, "..//BGI");
 cout<<"Enter 4 vertices of square";
 cin>>vert[0]>>vert[1]>>vert[2]>>vert[3]>>vert[4]>>vert[5]>>vert[6]>>vert[7];
 vert[8]=vert[0];
 vert[9]=vert[1];
 setcolor(YELLOW);
 t=3.1419/4;
 drawpoly(5,vert);
 for(int i=0;i<10;i++)
 {
  if(i%2==0) nvert[i]=vert[i]*cos(t)-vert[i+1]*sin(t);
  if(i%2!=0) nvert[i]=vert[i]*sin(t)+vert[i-1]*cos(t);
 }
 setcolor(CYAN);
 drawpoly(5,nvert);
 getch();
 closegraph();
}