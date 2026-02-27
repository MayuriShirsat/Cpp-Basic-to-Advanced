//simple function
// It reduce the tress on main fun
#include<iostream>
using namespace std;

int add()							// data_type fun_name()  "DECLERATION"
{
	int a,b,c;						// "DEFINATION"
	cout<<"\n Enter two values:";
	cin>>a>>b;
	
	c=a+b;
	cout<<"\n Addition is:"<<c;
}
int main()
{
	add();							// "FUNCTION CALL"
	return 0;
}
