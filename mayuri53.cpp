//assi--circlr ,tri,rectri.
#include<iostream>
using namespace std;

class demo
{
	public:
		demo(int num=32);
};
demo::demo(int num)
{
	cout<<"\n Value is:"<<num;
}
int main()
{
	int n;
	demo D(n);			//passes gaebage value 0
	demo();
	demo(23);
	return 0;
}
