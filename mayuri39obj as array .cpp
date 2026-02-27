//using an object as array
#include<iostream>
using namespace std;

class student
{
	private:
		int rollno,marks;
		char nm[10];
	public:
		void get()
		{
			cout<<"\n Enter name,roll no and marks of student:";
			cin>>nm>>rollno>>marks;
		}
		void display()
		{
			cout<<"\n\n\t"<<nm<<"\t"<<rollno<<"\t\t"<<marks;
		}
}s[10];						//array of object
int main()
{
	int i,num;
	cout<<"\n Enter the no of entry you want:";
	cin>>num;
	cout<<"\n Enter the following information:";
	for(i=0;i<num;i++)
	{
		s[i].get();
    }
	cout<<"\n The entered information is:";
	cout<<"\n\t=================================";
	cout<<"\n\t Name\t Roll no\t Marks"; 
	for(i=0;i<num;i++)
	{
		s[i].display();
	}
	cout<<"\n\t==================================";
	return 0;
}
