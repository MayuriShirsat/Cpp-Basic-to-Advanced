//fun overloading using same type of parameters and diff obj
#include<iostream>
using namespace std;

class demo
{
	public:
		void add(int a,int b)
		{
			cout<<"\n Addition is:"<<a+b;
		}
		void add(double a,double b)
		{
			cout<<"\n Addition is:"<<a+b;
		}
		void add(char a,char b)
		{
			cout<<"\n Joint of characters is:"<<a<<b;
		}
};
int main()
{
	demo d1,d2,d3;
	d1.add(2,5);
	d2.add(2.2,3.3);
	d3.add('M','S');
	return 0;
}
