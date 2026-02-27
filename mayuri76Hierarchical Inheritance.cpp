//Hierarchical Inheritance(one base class many child class)
#include <iostream>
using namespace std;

class data
{
	public:
		int roll;
		char nm[20],clg[10];
};
class Roll:public data
{
	public:
		void get();
		void put();
}r;
void Roll::get()
{
	cout<<"\n Enter Roll no:";
	cin>>roll;
}
void Roll::put()
{
	cout<<"\n Roll no:"<<roll;
}
class name:public data
{
	public:
	void getdata()
	{
		cout<<"\n Enter name:";
		cin>>nm;
	}
	void putdata()
	{
		cout<<"\n Name:"<<nm;
	}
}n;
class Clgname:public data
{
	public:
	void accept()
	{
		cout<<"\n Enter Collage name:";
		cin>>clg;
	}
	void display()
	
	{
		cout<<"\n Collage name:"<<clg;
	}
}c;
int main()
{
	r.get();
	n.getdata();
	c.accept();
	
	r.put();
	n.putdata();
	c.display();
	
	return 0;
}
