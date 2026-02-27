//fun with return value
#include<iostream>
using namespace std;

int add(int x,int y)
{
	int add;
	add=x+y;
	return (add);
}
int main()
{
	int a,b,c;
	cout<<"\n Enter two numbers:";
	cin>>a>>b;
	cout<<"\n Addition is:"<<add(a,b);
	//c=add(a,b);
	//cout<<"\n Addition is:"<<c;
	return 0;
}
