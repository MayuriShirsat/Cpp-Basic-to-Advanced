#include <iostream>
using namespace std;
//taking data from only one class
class gfather
{
	protected:
		int a,b;
};
class parent1:public gfather
{
	public:
}p1;
class parent2:public gfather
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
		ans =parent2::a+parent2::b;			//imp to clare data from which class
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

