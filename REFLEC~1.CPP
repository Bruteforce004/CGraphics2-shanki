#include<conio.h>
#include<iostream.h>
#include<graphics.h>
void main()
{int gd=DETECT,gm;
 int vert[8],s;
 initgraph(&gd, &gm, "..//BGI");
 cout<<"Enter 3 vertices of triangle";
 cin>>vert[0]>>vert[1]>>vert[2]>>vert[3]>>vert[4]>>vert[5];
 vert[6]=vert[0];
 vert[7]=vert[1];
 line(getmaxx()/2,0,getmaxx()/2,getmaxy());
 line(0,getmaxy()/2,getmaxx(),getmaxy()/2);
 setcolor(YELLOW);
 drawpoly(4,vert);
 cout<<"\nChoose axis of reflection\n1. X-axis\n2.Y-axis\n3.x=y axis";
 cin>>s;
 setcolor(CYAN);
 switch(s)
 {
  case 1:
   for(int i=0;i<8;i++)
    if(i%2!=0) vert[i]=getmaxy()-vert[i];
   drawpoly(4,vert);
   break;
  case 2:
   for(int j=0;j<8;j++)
    if(j%2==0) vert[j]=getmaxx()-vert[j];
   drawpoly(4,vert);
   break;
  case 3:
   for(int k=0;k<8;k++)
    {
     if(k%2==0) vert[k]=getmaxx()-vert[k+1];
     if(k%2!=0) vert[k]=getmaxy()-vert[k-1];
    }
   drawpoly(4,vert);
   break;
  default:
   cout<<"Bad input";
   break;
 }
 getch();
 closegraph();
}