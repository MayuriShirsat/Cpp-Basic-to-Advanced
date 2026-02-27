//using construtor
#include<iostream>
using namespace std;

class actor
{
	private:
		double pay1;
		char anm[10];
	public:
		actor(double a)
		{
			pay1=a;
			cout<<"\n\n Enter name of actor:";
			cin>>anm;
			
			cout<<"\n Name:"<<anm;
			cout<<"\n Payment:"<<pay1;
		}
};
class actress
{
	private:
		double pay2;
		char atnm[10];
	public:
		actress(double b)
		{
			pay2=b;
			cout<<"\n\n Enter name of actress:";
			cin>>atnm;
			
			cout<<"\n Name:"<<atnm;
			cout<<"\n Payment:"<<pay2;
		}
};
class director:public actor,public actress
{
	private:
		double pay3;
		char nm[10];
	public:
		director(double a,double b,double c):actor(a),actress(b)
		{
			pay3=c;
			cout<<"\n\n Enter name of director:";
			cin>>nm;
			
			cout<<"\n Name:"<<nm;
			cout<<"\n Payment:"<<pay3;
		}
};
int main()
{
	director d(200000,300000,400000);
	return 0;
}
