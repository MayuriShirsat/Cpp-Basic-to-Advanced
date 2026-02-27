//member fun decleration outside the class
//another method of object creation 
#include<iostream>
using namespace std;

class employee
{
	private:
		int salary;
		char nm[10],ID[10];
	public:
		void accept();
		void display();
}e;
void employee::accept()
{
	cout<<"\n Enter name,ID and salary of employee:";
	cin>>nm>>ID>>salary;
}
void employee::display()
{
	cout<<"\n Employee Name is:"<<nm;
	cout<<"\n ID is:"<<ID;
	cout<<"\n Salary is:"<<salary;
}
int main()
{
	e.accept();
	e.display();
	return 0;
}
