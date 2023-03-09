#include<iostream>
#include<cmath>
#include<graphics.h>
#include<conio.h>
using namespace std;

void plot(int x1, int y1, int x2, int y2, int x3, int y3){
	moveto(x1,y1);
	lineto(x2,y2);
	lineto(x3,y3);
	lineto(x1,y1);
}

void translate(int x1, int y1, int x2, int y2, int x3, int y3){
	
	int tx,ty;
	cout<<"Enter the translation factors tx and ty"<<endl;
	cin>>tx>>ty;
	x1+=tx;
	y1+=ty;
	x2+=tx;
	y2+=ty;
	x3+=tx;
	y3+=ty;
	plot(x1, y1,x2, y2, x3, y3);
}

void Rotation(int x1, int y1, int x2, int y2, int x3, int y3){
	
	float a;
	cout<<"Enter the rotation angle"<<endl;
	cin>>a;
	a=a*(3.14/180);
	x1= abs((x1 * cos(a)) - (y1 * sin(a)));
	y1= abs((x1 * sin(a)) + (y1 * cos(a)));
	
	x2= abs((x2 * cos(a)) - (y2 * sin(a)));
	y2= abs((x2 * sin(a)) + (y2 * cos(a)));
	
	x3= abs((x3 * cos(a)) - (y3 * sin(a)));
	y3= abs((x3 * sin(a)) + (y3 * cos(a)));
	plot(x1, y1,x2, y2, x3, y3);
}

void Scaling(int x1, int y1, int x2, int y2, int x3, int y3){
	
	int sx,sy;
	cout<<"Enter the scaling factors sx and sy"<<endl;
	cin>>sx>>sy;
	x1*=sx;
	y1=y1*sy;
	x2=x2*sx;
	y2=y2*sy;
	x3=x3*sx;
	y3=y3*sy;
	plot(x1, y1,x2, y2, x3, y3);
}

int main(){
	initwindow(400,400);
	int i,x1,x2,x3,y1,y2,y3;
	char ch;
	cout<<"Enter the coordinates ot the triangle: "<<endl;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	plot(x1, y1,x2, y2, x3, y3);
	do{
	here:
	cout<<"1.Translation\n2.Rotation\n3.Scaling"<<endl;
	cin>>i;
	switch(i){
		case 1:
			translate( x1,  y1,  x2,  y2,  x3,  y3);
			break;
		case 2:
			Rotation( x1,  y1,  x2,  y2,  x3,  y3);
			break;
		case 3:
			Scaling( x1,  y1,  x2,  y2,  x3,  y3);
			break;
		default:
			cout<<"Enter according to option";
			goto here; 
	}
		cout<<"do you want to continue:Y"<<endl;
		cin>>ch;
	}while(ch=='Y'||ch=='y');
	getch();
	closegraph();
	return 0;
}
