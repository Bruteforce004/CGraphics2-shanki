#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{int gd=DETECT,gm;
 int vert[10];
 float s;
 initgraph(&gd, &gm, "..//BGI");
 cout<<"Enter 4 vertices of square";
 cin>>vert[0]>>vert[1]>>vert[2]>>vert[3]>>vert[4]>>vert[5]>>vert[6]>>vert[7];
 vert[8]=vert[0];
 vert[9]=vert[1];
 cout<<"enter shear factor";
 cin>>s;
 setcolor(YELLOW);
 drawpoly(5,vert);
 for(int i=0;i<10;i++)
 {
  //comment and uncomment as necessary for x/y shearing
  //if(i%2==0) vert[i]=vert[i]+vert[i+1]*s;
  if(i%2!=0) vert[i]=vert[i]+vert[i-1]*s;
 }
 setcolor(CYAN);
 drawpoly(5,vert);
 getch();
 closegraph();
} 