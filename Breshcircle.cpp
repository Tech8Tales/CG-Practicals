#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

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
int main(){
    int cx,cy,r;
    cout<<"Enter center x:"<<endl;
    cin>>cx;
    cout<<"Enter center y:"<<endl;
    cin>>cy;
    cout<<"Radius :"<<endl;
    cin>>r;

    int gd=DETECT, gm;
    initgraph(&gd,&gm,NULL);

    mycircle(cx,cy,r);
    delay(50000);
    closegraph();
    return 0;
}