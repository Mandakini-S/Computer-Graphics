#include<iostream>
#include<cmath>
#include<graphics.h>
#include<conio.h>
using namespace std;
//Draw axis


void square(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4){
	moveto(300+x1,300+y1);
	lineto(300+x2,300+y2);
	lineto(300+x3,300+y3);
	lineto(300+x4,300+y4);
	lineto(300+x1,300+y1);
}
int X_ref(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4){
	int xref,shy;
	cout<<"Enter the value of xref and shy:"<<endl;
	cin>>xref>>shy;
	
	int X1=x1;
	int Y1=y1+shy*(x1-xref);
	int X2=x2;
	int Y2=y2+shy*(x2-xref);
	int X3=x3;
	int Y3=y3+shy*(x3-xref);
	int X4=x4;
	int Y4=y4+shy*(x4-xref);
	square(X1, Y1, X2, Y2, X3, Y3, X4 ,Y4);
	
}

int Y_ref(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4){
	int yref,shx;
	cout<<"Enter the value of yref and shx:"<<endl;
	cin>>yref>>shx;
	
	int X1=x1+shx*(y1-yref);
	int Y1=y1;
	int X2=x2+shx*(y2-yref);
	int Y2=y2;
	int X3=x3+shx*(y3-yref);
	int Y3=y3;
	int X4=x4+shx*(y4-yref);
	int Y4=y4;
	square(X1, Y1,X2, Y2, X3, Y3, X4 ,Y4);
	
}
int main(){
	initwindow(600,600);
	//Draw axis
	line(300,0,300,600);
	line(0,300,600,300);
	int choice,x1,x2,x3,y1,y2,y3,x4,y4,xr,yr;
	cout<<"Enter the coordinates ot the Square: "<<endl;
	cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
	square(x1, y1,x2, y2, x3, y3, x4 ,y4);
    here:
    cout<<"What do you want to do?\n"<<endl;
	cout<<"Shearing wrt:"<<endl;
	cout<<"1.x-ref line\n2.y-ref line\n3.Exit"<<endl;
	cin>>choice;
		switch(choice){
			case 1:
				X_ref( x1, y1, x2, y2, x3, y3, x4, y4);
				break;
			case 2:
				Y_ref( x1, y1, x2, y2, x3, y3, x4, y4);
				break;
			case 3:
				exit(0);
				break;
			default:
				cout<<"Enter valid option!!";
				goto here; 
		}
	getch();
	closegraph;
	return 0;
}


