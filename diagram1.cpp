#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

void myline(float x1, float y1,float x2, float y2){
float x,y;

float dx,dy,len;
dx=x2-x1;
dy=y2-y1;

if(abs(dx)>abs(dy)){
len=abs(dx);}

else{
len=abs(dy);}

float xin,yin;
xin=dx/len;
yin=dy/len;

x=x1+0.5;
y=y1+0.5;
int i=1;
while(i<=len){
//for(int j=0;j<t;j++)
//if(i%4==0)
//if(i%8<4)
//if(i%9<4||i%9==6)
putpixel(x,y,RED);
x=x+xin;
y=y+yin;
i+=1;
}

}


void mycircle(int cx,int cy, int r){
int x,y,p;
x=0;
y=r;
p=3-(2*r);
do{
putpixel(cx+x,cy-y,RED);
putpixel(cx-x,cy-y,RED);
putpixel(cx-x,cy+y,RED);
putpixel(cx+x,cy+y,RED);
putpixel(cy-y,cx+x,RED);
putpixel(cy-y,cx-x,RED);
putpixel(cy+y,cx-x,RED);
putpixel(cy+y,cx+x,RED);
if(p<0){
p=p+(4*x)+6;
}
else
{p=p+(4*(x-y))+10;
y=y-1;
}
x=x+1;
}while(x<y);
}

int main()
{

int cx,cy,r;
cout<<"Enter center x:"<<endl;
cin>>cx;
cout<<"Enter center y:"<<endl;
cin>>cy;
cout<<"Enter radius:"<<endl;
cin>>r;

int gd=DETECT, gm;
initgraph(&gd,&gm,NULL);

float x1,x2,x3,y1,y2,y3,rr;
x1=cx;
y1=cy-r;
x2=cx-(0.866*r);
x3=cx+(0.866*r);
y2=cy+(0.5*r);
y3=cy+(0.5*r);
rr=0.5*r;

mycircle(cx,cy,r);
myline(x1,y1,x2,y2);
myline(x2,y2,x3,y3);
myline(x3,y3,x1,y1);
mycircle(cx,cy,rr);



delay(60000);
closegraph();
return(0);
}