#include<iostream>
using namespace std;

class costomer
{
	protected:
		int ph;
		char nm[10];
	public:
		void get()
		{
			cout<<"\n Enter your name and phone no of costomer:";
			cin>>nm>>ph;
		}
		void put()
		{
			cout<<"\n Name:"<<nm<<"\n Phone no:"<<ph;
		}
};
class depositor:public costomer
{
	protected:
		int ac,bal;
	public:
		void getdepo()
		{
			cout<<"\n Enter AC and balance:";
			cin>>ac>>bal;
		}
		void putdepo()
		{
			cout<<"\n AC:"<<ac<<"\n balance:"<<bal;
		}
}D;
class borower:public depositor
{
	protected:
		int loan_no,loan_account;
	public:
		void getloan()
		{
			cout<<"\n Enter loan no and loan account:";
			cin>>loan_no>>loan_account;
		}
		void putloan()
		{
			cout<<"\n Loan no:"<<loan_no<<"\n Loan Account no:"<<loan_account;
		}
		void show()
		{
			put();
			putdepo();
			putloan();
		}
}B;
int main()
{
	B.get();
	B.getdepo();
	B.getloan();
	B.show();
	return 0;
}
