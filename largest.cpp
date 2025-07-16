#include<iostream>
using namespace std;
class biggest{
	int a,b;
	public:
		void getdata(){
			cout<<"enter a and b"<<endl;
			cin>>a>>b;
		}
		void largest(){
			if(a>b){
			cout<<"a is largest"<<endl;
			}
			else{
				cout<<"b is largest"<<endl;
			}
		}
};
int main()
{
	biggest l1;
	l1.getdata();
	l1.largest();
	return 0;
}
