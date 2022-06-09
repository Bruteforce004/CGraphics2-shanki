#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{int gd=DETECT,gm;
 int vert[8],s;
 initgraph(&gd, &gm, "..//BGI");
 cout<<"Enter 3 vertices of triangle";
 cin>>vert[0]>>vert[1]>>vert[2]>>vert[3]>>vert[4]>>vert[5];
 vert[6]=vert[0];
 vert[7]=vert[1];
 setcolor(YELLOW);
 cout<<"Enter scaling factor";
 cin>>s;
 drawpoly(4,vert);
 for(int i=0;i<8;i++)
 {
  vert[i]*=s;
 }
 setcolor(CYAN);
 drawpoly(4,vert);
 getch();
 closegraph();
}