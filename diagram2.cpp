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


void mycircle(float cx,float cy, float r){
int x,y,p;
x=0;
y=r;
p=3-(2*r);
do{
putpixel(cx+x,cy-y,RED);
putpixel(cx-x,cy-y,RED);
putpixel(cx-x,cy+y,RED);
putpixel(cx+x,cy+y,RED);
putpixel(cx+y,cy-x,RED);
putpixel(cx-y,cy-x,RED);
putpixel(cx-y,cy+x,RED);
putpixel(cx+y,cy+x,RED);

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

int main(){
float x1,y1,x2,y2,x3,y3,x4,y4;
cout<<"Enter x1:"<<endl;
cin>>x1;
cout<<"Enter y1:"<<endl;
cin>>y1;
cout<<"Enter x3:"<<endl;
cin>>x3;
cout<<"Enter y3:"<<endl;
cin>>y3;

int gd=DETECT, gm;
initgraph(&gd,&gm,NULL);

float m1,n1,r,d,D;
m1=(x1+x2)*0.5;
n1=(y1+y2)*0.5;
d=y2-y1;
D=x2-x1;
r=(D*d)/(2*sqrt((d*d)+(D*D)));

myline(x1,y1,x2,y1);
myline(x2,y1,x2,y2);
myline(x2,y2,x1,y2);
myline(x1,y2,x1,y1);
myline(m1,y1,x1,n1);
myline(x1,n1,m1,y2);
myline(m1,y2,x2,n1);
myline(x2,n1,m1,y1);
mycircle(m1,n1,r);

delay(60000);
closegraph();
return(0);
}