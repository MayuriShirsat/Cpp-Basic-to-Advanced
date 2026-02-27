//fun overloading
//based on no of arguments
#include<iostream>
using namespace std;

void add(int a)
{
	cout<<"\n Addition is :"<<a+a;
}
void add(int a,int b)
{
	cout<<"\n Addition is :"<<a+b;
}
void add(int a,int b,int c)
{
	cout<<"\n Addition is :"<<a+b+c;
}
int main()
{
	add(10);
	add(10,20);
	add(10,20,30);
	return 0;
}
