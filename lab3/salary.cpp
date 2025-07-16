#include<iostream>
using namespace std;
class sal{
	int d;
	public:
		void getinfo(){
			cout<<"enter th salary"<<endl;
			cin>>d;
		}
		inline void payment(){
			float a;
			a=d-0.1*d;
			cout<<"the salary is"<<a;
		}
};
int main(){
	sal s;
	s.getinfo();
	s.payment();
	return 0;
}
