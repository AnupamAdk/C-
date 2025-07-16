#include<iostream>
using namespace std;
class shape{
	public:
		int l,b,h;
		void volume(){
			int volume;
			volume=l*b*h;

			cout<<"the volume is"<<volume<<endl;
		}
		void area(){
			int area;
			area=l*b;
			cout<<"the area is"<<area<<endl;
		}
		void getdata(){
		cout<<"enter length";
cin>>l;
cout<<"enter breadth";
cin>>b;
cout<<"enter height";
cin>>h;
		}
};
int main(){
shape s1;
s1.getdata();
s1.volume();
s1.area();
return 0;
}
	
