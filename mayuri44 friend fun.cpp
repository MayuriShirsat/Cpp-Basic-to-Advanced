//Friend fun
#include<iostream>
using namespace std;

class fri
{
	private:
		int n;
	public:
		void get();
		friend void put();
}F;
void fri::get()
{
	n=100;
	cout<<"\n Value of n is:"<<n;
}
void put()				//no need of sope resolution operater
{
	F.n=200;
	cout<<"\n Value of n is:"<<F.n;			//obj is needed
}
int main()
{
	F.get();
	put();				// no need of obj
	return 0;
}
