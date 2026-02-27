#include<iostream>
using namespace std;

class student
{
	private:
		int roll_no,age;
		char nm[10];
	public:
		void get()
		{
			cout<<"\n Enter your name:";
			cin>>nm;
			cout<<"\n Enter your roll no:";
			cin>>roll_no;
			cout<<"\n Enter your age:";
			cin>>age;
		}
		void display()
		{
			cout<<"\n Student name:"<<nm;
			cout<<"\n Roll no:"<<roll_no;
			cout<<"\n Age:"<<age;
		}
};
int main()
{
	student s;
	s.get();
	s.display();
	return 0;
}
