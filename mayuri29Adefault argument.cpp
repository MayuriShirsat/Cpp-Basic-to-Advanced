//fun with deafult argument
#include<iostream>
using namespace std;

int add(int a=10,int b=20)
{
	return (a+b);
}
int main()
{
	cout<<"\n addition is:"<<add();
	cout<<"\n Addition is:"<<add(20);
	cout<<"\n Addition is:"<<add(20,30);
	return 0;
}
