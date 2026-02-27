#include<iostream>
using namespace std;

class parent
{
	int x;
	public:
		void my()
		{
			x=199;
			cout<<"\n Value of X is:"<<x;
		}
}p;
class child:private parent
{
	int y;
	public:
		void get()
		{
			my();
			y=200;
			cout<<"\n Value of Y is:"<<y;
		}
}c;
int main()
{
	c.get();
	return 0;
}
