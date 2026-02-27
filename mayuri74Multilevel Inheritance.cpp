//multlevel inheritance(A base-->B middle-->C child)
#include <iostream>
using namespace std;

class grandf__er
{
	public:
		char gnm[10],goccu[10];
		void get();
		void put();
};
void grandf__er::get()
{
	cout<<"\n Enter name and occupation of grandfather:";
	cin>>gnm>>goccu;
}
void grandf__er::put()
{
	cout<<"\n Name:"<<gnm<<"\n Occupation:"<<goccu;
}
class father:public grandf__er
{
	public:
		char fnm[10],foccu[10];
		void getdata();
		void putdata();
};
void father::getdata()
{
	cout<<"\n Enter name and occupation father:";
	cin>>fnm>>foccu;
}
void father::putdata()
{
	cout<<"\n Name:"<<fnm<<"\n Occupation:"<<foccu;
}
class child:public father
{
	public:
		char nm[10],occu[10];
		void getinfo();
		void display();
		void show();
};
void child::getinfo()
{
	cout<<"\n Enter name and occupation child:";
	cin>>nm>>occu;
}
void child::display()
{
	cout<<"\n Name:"<<nm<<"\n Occupation:"<<occu;
}
void child::show()
{
	cout<<"\n INFORMATION OF GRANDFATHER:";
	put();
	cout<<"\n INFORMATION OF FATHER:";
	putdata();
	cout<<"\n INFORMATION OF CHILD:";
	display();
	
}
int main()
{
	child C;
	C.get();
	C.getdata();
	C.getinfo();
	
	C.show();
	return 0;
}
