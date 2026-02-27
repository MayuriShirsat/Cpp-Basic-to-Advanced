//using distructor
#include <iostream>
using namespace std;

class base
{
	public:
		base()
		{
			cout<<"\n BASE CONSTRUCTOR";
		}
		~base()
		{
			cout<<"\n BASE DISTRUCTOR";
		}
};
class child:public base
{
	public:
		child()
		{
			cout<<"\n CHILD CONSTRUCTOR";
		}
		~child()
		{
			cout<<"\n CHILD DISTRUCTOR";
		}
}c;
int main()
{
	return 0;
}
