#include<iostream>
#include<string.h>
using namespace std;
class test{
	char a[10];
	public:
	void read()
	{
	cout<<"enter";
	cin>>a;
	}
void show()
{
cout<<"string"<<a;
}
test operator + (test t2){
	test t3;
	strcpy(t3.a,a);
	strcat(t3.a," ");
	strcat(t3.a,t2.a);
	return t3;
}
};
int main()
{
	test t1,t2,t3;
	t1.read();
	t2.read();
	t3=t1+t2;
	t3.show();
	return 0;
}
