#include<iostream>
#include<cmath>
#include<graphics.h>
#include<conio.h>
using namespace std;

void draw_triangle(int x1, int y1, int x2, int y2, int x3, int y3){
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
}

void rotation(int x1, int y1, int x2, int y2, int x3, int y3,int xc, int yc){
	
	float a;
	cout<<"Enter the rotation angle: "<<endl;
	cin>>a;
	int xx1,yy1,xx2,yy2,xx3,yy3;
	a=a*(3.14/180);
    xx1=abs((x1*cos(a))-(y1*sin(a))+((yc*sin(a))-(xc*cos(a))+xc));
    yy1=abs((x1*sin(a))+(y1*cos(a))+((-xc*sin(a))-(yc*cos(a))+yc));
    xx2=abs((x2*cos(a))-(y2*sin(a))+((yc*sin(a))-(xc*cos(a))+xc));
    yy2=abs((x2*sin(a))+(y2*cos(a))+((-xc*sin(a))-(yc*cos(a))+yc));
    xx3=abs((x3*cos(a))-(y3*sin(a))+((yc*sin(a))-(xc*cos(a))+xc));
    yy3=abs((x3*sin(a))+(y3*cos(a))+((-xc*sin(a))-(yc*cos(a))+yc));
	draw_triangle(xx1, yy1,xx2, yy2, xx3, yy3);
}

void scaling(int x1, int y1, int x2, int y2, int x3, int y3,int xc, int yc ){
	
	float sx,sy;
	cout<<"Enter the scaling factors sx and sy"<<endl;
	cin>>sx>>sy;
	x1=(x1*sx)+(xc*(1-sx));
    y1=(y1*sy)+(yc*(1-sy));
    x2=(x2*sx)+(xc*(1-sx));
    y2=(y2*sy)+(yc*(1-sy));
    x3=(x3*sx)+(xc*(1-sx));
    y3=(y3*sy)+(yc*(1-sy));	
	draw_triangle(x1, y1, x2, y2, x3, y3);
}

int main(){
	initwindow(500,500);
	int choice,x1,x2,x3,y1,y2,y3,xc,yc;
	char ch;
	cout<<"Enter the coordinates ot the triangle: "<<endl;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	draw_triangle(x1, y1,x2, y2, x3, y3);
	xc = int((x1+x2+x3)/3);
    yc = int((y1+y2+y3)/3);
    
  do{
    	cout<<"1Rotation\n2.Scaling"<<endl;
    	cout<<"What you want to do?\n";
    	cin>>choice;
		switch(choice){
			case 1:
				rotation( x1,  y1,  x2,  y2,  x3,  y3, xc, yc);
				break;
			case 2:
				scaling( x1,  y1,  x2,  y2,  x3,  y3, xc, yc);
				break;
			default:
				cout<<"Enter according to option";
				break; 
		}
		cout<<"do you want to continue:Y"<<endl;
		cin>>ch;
	}while(ch=='Y'||ch=='y');
	
		getch();
	    closegraph();
	    return 0;
    	
}
