#include <iostream>
using namespace std;

class employee
{
	protected:
		char empid[10],nm[10];
};
class empunion
{
	protected:
		char memberid[10];
};
class empinfo:public employee,public empunion
{
	private:
		int salary;
	public:
		void get();
		void put();
};
void empinfo::get()
{
	cout<<"\n Enter name,empID,memberID and salary:";
	cin>>nm>>empid>>memberid>>salary;
}
void empinfo::put()
{
	cout<<"\n Name:"<<nm<<"\n Emp ID:"<<empid<<"\n Member ID:"<<memberid<<"\n Salary:"<<salary;
}
int main()
{
	empinfo E;
	E.get();
	E.put();
	return 0;
}
