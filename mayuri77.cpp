#include<iostream>
using namespace std;

class company
{
	protected:
		int sal;
};
class manager:public company
{
	public:
		void get()
		{
			cout<<"\n Enter salary of manager:";
			cin>>sal;
		}
		void put()
		{
			cout<<"\n Salary of manager:"<<sal;
		}
}m;
class superviser:public company
{
	public:
		void getdata()
		{
			cout<<"\n Enter salary of supervisor:";
			cin>>sal;
		}
		void putdata()
		{
			cout<<"\n Salary of supervisor:"<<sal;
		}
}s;
class emp:public company
{
	public:
		void getinfo()
		{
			cout<<"\n Enter salary of employee:";
			cin>>sal;
		}
		void display()
		{
			cout<<"\n Salary of employee:"<<sal;
		}
}e;
int main()
{
	m.get();
	s.getdata();
	e.getinfo();
	
	m.put();
	s.putdata();
	e.display();
	return 0;
}
