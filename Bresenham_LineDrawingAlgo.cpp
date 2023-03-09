
#include<iostream>
#include<cmath>
#include<graphics.h>
#include<conio.h>
using namespace std;

void BLA(int x1,int y1,int x2,int y2){
	int dx,dy,p,xinc,yinc;
	dx=abs(x2-x1);
	dy=abs(y2-y1);
	if(x2<x1){
		xinc=-1;
	}
	else{
		xinc=1;
	}
	if(y2<y1){
		yinc=-1;
	}
	else{
		yinc=1;
	}
	putpixel(x1,y1,5);
	if(dx>dy){
		p=2*dy-dx;
	for(int k=0;k<dx;k++){
		
		if(p>0){
			
			x1=x1+xinc;
			y1=y1+yinc;
			p=p+2*dy-2*dx;
				putpixel(x1,y1,5);
				delay(100);
		}
		else{
		
			x1=x1+xinc;
			y1=y1;
			p=p+2*dy;
				putpixel(x1,y1,5);
				delay(100);
		}
		
	}
	}else{
		p=2*dy-dx;
		for(int k=0;k<dy;k++){	
		if(p>0){
			x1=x1+xinc;
			y1=y1+yinc;
			p=p+2*dy-2*dx;
			putpixel(x1,y1,5);
				delay(100);
		}
		else{
			
			x1=x1;
			y1=y1+yinc;
			p=p+2*dy;
			putpixel(x1,y1,5);
				delay(100);
		}
	}
		}
	}

int main(){
	int x1,x2,y1,y2;
	initwindow(400,400,"BLA algorithm");
	cout<<"Enter the value of x1 & y1: ";
	cin>>x1>>y1;
	cout<<"Enter the value of x2 & y2: ";
	cin>>x2>>y2;
	BLA(x1,y1,x2,y2);
	getch();
	closegraph();
}

