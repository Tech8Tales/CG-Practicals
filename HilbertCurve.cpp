#include<iostream>
#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<stdlib.h>
using namespace std;

void move(int j,int h,int &x,int &y)
{
if(j==1)
{y=y-h;}
else if(j==2)
{x=x+h;}
else if(j==3)
{y=y+h;}
else if(j==4)
{x=x-h;}
lineto(x,y);
}


void hilbert(int d,int r,int u,int l,int i,int h,int &x,int &y){
if(i>0)
{
i--;
hilbert(r,d,l,u,i,h,x,y);
move(d,h,x,y);
hilbert(d,r,u,l,i,h,x,y);
move(r,h,x,y);
hilbert(d,r,u,l,i,h,x,y);
move(u,h,x,y);
hilbert(l,u,r,d,i,h,x,y);
}
}

int main()
{
int x,y,h,u=1,r=2,d=3,l=4;
int n;
cout<<"Enter value of x:";
cin>>x;
cout<<"Enter value of y:";
cin>>y;
cout<<"Enter the length of the line :";
cin>>h;
cout<<"Enter value of n:";
cin>>n;
int gd=DETECT,gm;
initgraph(&gd,&gm,NULL);
moveto(x,y);
hilbert(u,r,d,l,n,h,x,y);
getch();
delay(50000);
closegraph();
return 0;
}