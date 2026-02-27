#include<iostream>
using namespace std;

class demo
{
	private:
		int a,b,ans;
	public:
		demo(int x,int y)
		{
			a=x;
			b=y;
		}
		demo(demo &o)
		{
			ans=o.a+o.b;
			cout<<"\n Addition is:"<<ans;
		}
};
int main()
{
	demo o1(2,6);
	demo o2(o1);
	demo o3=o1;
	return 0;
}
