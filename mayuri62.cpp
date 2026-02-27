#include<iostream>
using namespace std;

class add
{
	int a;
	public:
		add(int x)
		{
			a=x;
			cout<<"\n value of A before overloading:"<<a;
		}
		void operator +()
		{
			cout<<"\n Value of A after overloading:"<<a*a;
		}
};
int main()
{
	add Add(12);
	+Add;
	return 0;
}
