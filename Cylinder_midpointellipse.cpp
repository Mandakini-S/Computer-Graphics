#include<iostream>
#include<cmath>
#include<graphics.h>
#include<conio.h>
using namespace std;
void circle(int x,int xc, int y, int yc){
        putpixel(xc + x, yc + y,5);
        putpixel(xc - x, yc + y,3);
		putpixel(xc + x, yc - y,1);
		putpixel(xc - x, yc - y,5);
        putpixel(xc + y, yc + x,2);
        putpixel(xc - y, yc + x,6);
		putpixel(xc + y, yc - x,11);
		putpixel(xc - y, yc - x,5);
		delay(0.01);
	
}
	void cone(int r,int xc,int yc){
		int x=0;
		int y=r;
		int p=1-r;
		while (x <= y)
	    {
	    	circle(x,xc,y,yc);
	        x++;
	        if (p < 0)
	        {
	            p += 2 * x + 1;
	        }
	        else
	        {
				y--;
	            p += 2 * (x - y) + 1;
	        }
	        
	    }
	}
int main(){
	int xc,yc,h;
	initwindow(400,400,"cone");
	cout<<"Enter the centre of the cone: "<<endl;
	cin>>xc>>yc;
	cout<<"Enter height of the cone :"<<endl;
	cin>>h;
	for(int i=h;i>0;i--){
		cone(i,xc+i,yc+i);
	}
	getch;
	closegraph();

}


