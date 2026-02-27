#include<iostream>
using namespace std;

class parent
{
	public:
		parent()
		{
			cout<<"\n I am in base class";
		}
};
class child:public parent
{
	public:
		child()
		{
			cout<<"\n I am in child class";
		}
};
int main()
{
	child c;
	return 0;
}
