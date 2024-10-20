#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

void myline(float x1,float y1,float x2,float y2){
    float dx,dy,len;
    dx=x2-x1;
    dy=y2-y1;

    if(abs(dx)>abs(dy)){
        len=abs(dx);
    }
    else{
        len=abs(dy);
    }

    float xin,yin;
    xin=dx/len;
    yin=dy/len;

    float x,y;
    x=x1+0.5;
    y=y1+0.5;
    int i=1;
    while(i<=len){
       putpixel(x,y,YELLOW);
       x=x+xin;
       y=y+yin;
       i+=1; 
    }
}

int main(){
float x1,y1,x2,y2;
cout<<"Enter x1"<<endl;
cin>>x1;
cout<<"Enter y1"<<endl;
cin>>y1;
cout<<"Enter x2"<<endl;
cin>>x2;
cout<<"Enter y2"<<endl;
cin>>y2;
int gd=DETECT, gm;
initgraph(&gd,&gm,NULL);
myline(x1,y1,x2,y2);
delay(50000);
closegraph();
return 0;
}