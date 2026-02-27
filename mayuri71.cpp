#include<iostream>
using namespace std;

class student
{
	protected:
		int rollno;
		char name[10];
}S;
class enggstudent:public student
{
	private:
		char branch[10];
	public:
		void get()
		{
			cout<<"\n Enter your name,roll no and branch:";
			cin>>name>>rollno>>branch;
		}
		void show()
		{
			cout<<"\n Name:"<<name<<"\n Roll no:"<<rollno<<"\n Branch:"<<branch;
		}
}E;
int main()
{
	E.get();
	E.show();
	return 0;
}
