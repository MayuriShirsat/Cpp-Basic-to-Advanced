//based on data types of argument
#include<iostream>
using namespace std;

void add(int a,int b)
{
	cout<<"\n Addition1 is:"<<a+b;
}

//	void add(float a,float b)
//	{
//	cout<<"\n Addition3 is :"<<a+b;
//	}
int main()
{
	add(2,4);
//	add(2.222222,3.4465646);
	add(1.3,5.3);
	return 0;
}
