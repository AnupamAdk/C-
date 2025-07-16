#include <iostream>
using namespace std;
class temp{
	public: 
	int &temperature(int &a,int &b){
		if(a>b){
			return a;
		}else{
			return b;
		}
	}
};
int main(){
	temp c;
	int ltemp,htemp;
		cout<<"Enter Higher temperature"<<endl;
		cin>>htemp;
		cout<<"Emter Lower Temperature"<<endl;
		cin>>ltemp;
		c.temperature(htemp,ltemp)=100;
		cout<<"Final Temperatures are"<<htemp<<endl<<ltemp<<endl;
		return 0;	
}
