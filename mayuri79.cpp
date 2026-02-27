#include<iostream>
using namespace std;

class emp
{
	protected:
		char nm[10],id[10];
	public:
		void accept()
		{
			cout<<"\n\n Enter name and ID :";
			cin>>nm>>id;
		}
		void display()
		{
			cout<<"\n\n Name:"<<nm<<"\n ID:"<<id;
		}
};
class warker:public emp
{
	protected:
		int sal;
	public:
		void accept()
		{
			emp::accept();
			cout<<"\n Enter salary:";
			cin>>sal;
		}
		void display()
		{
			emp::display();
			cout<<"\n Salary:"<<sal;
		}
}w;
class manager:public emp
{
	protected:
		int allo;
	public:
		void accept()
		{
			emp::accept();
			cout<<"\n Enter allowance:";
			cin>>allo;	
		}
		void display()
		{
			emp::display();
			cout<<"\n Allowance :"<<allo;
		}
}m;
int main()
{
	w.accept();
	m.accept();
	
	cout<<"\n INFO OF WARKER:";
	w.display();
	
	cout<<"\n\n INFO OF MANAGER:";
	m.display();
	return 0;
}
