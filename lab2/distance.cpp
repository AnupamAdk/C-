#include<iostream>
#include <math.h>
using namespace std;
class length{	
	public: 
	int x1,x2,y1,y2;
	void input(){
		cout<<"Enter X";
		cout<<"Enter X1: ";
		cin>>x1;
		cout<<"Enter X2: ";
		cin>>x2;
		
		cout<<"Enter Y coordinates";
		cout<<"Enter Y1: ";
		cin>>y1;
		cout<<"Enter Y2: ";
		cin>>y2;		
	}
	void dist(){
		float d;
		d = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
		cout<<"The Distance between two points is: "<<d<<"Units";
	}	
};
int main(){
	length d1;
	d1.input();
	d1.dist();
	return 0;	
}
