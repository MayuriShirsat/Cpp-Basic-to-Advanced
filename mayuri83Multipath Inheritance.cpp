//Multipath Inheritance
#include <iostream>
using namespace std;

class gfather
{
	protected:
		int a,b;
};
class parent1:public gfather
{
	public:
		void get()
		{
			cout<<"\n Enter A:";
			cin>>a;
		}
		void show()
		{
			cout<<"\n A="<<a;
		}
}p1;
class parent2:public gfather
{
	public:
		void get1()
		{
			cout<<"\n Enter B:";
			cin>>b;
		}
		void show1()
		{
			cout<<"\n B="<<b;
		}
}p2;
class child:public parent1,public parent2
{
	public :
	int ans;
	void add()
	{
		ans =parent1::a+parent2::b;			//imp to clare data from which class
		cout<<"\n Addition is:"<<ans;
	}
}c;
int main()
{
	c.get();
	c.get1();
	c.show();
	c.show1();
	
	c.add();
	return 0;
}

