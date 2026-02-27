#include<iostream>
using namespace std;

class employee
{
	private:
	    int salary;
		char nm[20],ID[10];
	public:
		void getdata() 
		{
			cout<<"\n Enter your salary,ID and name:";
			cin>>nm>>ID>>salary;
		}
		void putdata()
		{
			cout<<"\n Enployee name :"<<nm;
			cout<<"\n Enployee Id :"<<ID;
			cout<<"\n Employee salary :"<<salary;
		}
};
int main()
{
	employee e;
	e.getdata();
	e.putdata();
	return 0;
}
