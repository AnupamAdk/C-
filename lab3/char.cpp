#include<iostream>
using namespace std;
class display{
	public:
		void print(int n, char a ='s'){
			for(int i =1;i<=n;i++){
				cout<<a<<cout<<endl;
			}
		}
};
int main(){
	display ok;
	ok.print(5);
	return 0;
}

