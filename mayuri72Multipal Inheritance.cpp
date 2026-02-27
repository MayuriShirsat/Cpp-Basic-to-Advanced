//multipal inheritance(many base class one child class)
#include<iostream>
using namespace std;

class teaching
{
	public:
		int sal;
		char nm[10],sub[10];
		void  get()
		{
			cout<<"\n Enter your name, salary and subject:";
			cin>>nm>>sal>>sub;
		}
};
class nonteaching
{
	public:
		int ntsal;
		char ntnm[10],ntsub[10];
		void getdata()
		{
			cout<<"\n Enter name,salary and subject:";
			cin>>ntnm>>ntsal>>ntsub;
		}
};
class record:public teaching,public nonteaching
{
	public:
		void show()
		{
			cout<<"\n Teaching staff information:";
			 cout<<"\n Name:"<<nm;
			 cout<<"\n salary:"<<sal;
			 cout<<"\n subject:"<<sub;
			 
			 cout<<"\n Nonteaching staff information:";
			 cout<<"\n Name:"<<ntnm;
			 cout<<"\n salary:"<<ntsal;
			 cout<<"\n subject:"<<ntsub;
		}
}R;
int main()
{
	R.get();
	R.getdata();
	R.show();
	return 0;
}
