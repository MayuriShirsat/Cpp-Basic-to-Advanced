//when permission is private
#include<iostream>
using namespace std;

class demo
{
	private:
	public:
		void get()
		{
			cout<<"\n I am in base class";
		}
}D;
class child:private demo
{
	private:
	public:
		void getdata()
		{
			cout<<"\n I am in child class";
		}
}C;
int main()
{
//	C.get();			//permission is private
	D.get();
	C.getdata();
	return 0;
}
