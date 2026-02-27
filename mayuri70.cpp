//when permission is public
#include <iostream>
using namespace std;

class demo
{
	public:
		void get()
		{
			cout<<"\n I am in base class";
		}
}D;
class child:public demo
{
	public:
		void getdata()
		{
			cout<<"\n I am in child class";
		}
}C;
int main()
{
	C.get();				// assicible coze permission is public 
	D.get();
	C.getdata();return 0;
}

