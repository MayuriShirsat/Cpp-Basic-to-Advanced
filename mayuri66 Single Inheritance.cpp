//Inheritance
//Single inheritance
#include<iostream>
using namespace std;

class parent
{
	int a;
	public:
		int y;
}p;
class child :private parent			//decleration of child class here private is perrmission
{
	public:
		void get()
		{
			//a=100;		//cant access coze it is private data of class parent
			y=200;			//can access but only in this class
			cout<<"\n Value of y is:"<<y;
		}
}c;
int main()
{
	c.get();
	//c.y=300;			//cant access coze permission to child class is private
	p.y=400;			//can access coze asked to parent directly
	cout<<"\n value of Y is:"<<p.y;
	return 0;
}
