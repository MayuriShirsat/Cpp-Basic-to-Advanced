//using template fun
#include<iostream>
using namespace std;

template<class m>
void add(m a,m b)
{
	cout<<"\n Template fun:";
	cout<<"\n Addition of "<<a<<" and "<<b<<" is :"<<a+b;
}

void add( int a,int b)
{
	cout<<"\n Normal fun:";
	cout<<"\n Addition of "<<a<<" and "<<b<<" is :"<<a+b;
}
int main()
{
	add(2,6);
	add(2,5);
	return 0;
}
