//Operator overloading
#include<iostream>
using namespace std;

class incre
{
	int a;
	public:
		incre(int x)
		{
			a=x;
			cout<<"\n value of a before overloading:"<<a;
		}
		void operator ++()		//overloading fun
		//++ increas value by one
		{
			a+=5;			//but here we do increment by 5 by same ++ operator
			cout<<"\n Value of a after overloading is:"<<a; 
		}
};
int main()
{
	incre I(40);
	++I;			//calling overloading fun
	return 0;
}
