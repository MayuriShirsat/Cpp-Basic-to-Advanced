#include<iostream>
using namespace std;

class leap
{
	public:
		leap(int x)
		{
			if(x%4==0)
			{
				cout<<"\n Entered year\t"<<x<<"\tis leap year";
			}
			else
			{
				cout<<"\n This is not leap year";
			}
		}
};					//we cant define obj here 
int main()
{
	int a;
	cout<<"\n Enter any year:";
	cin>>a;
	leap l(a);
	leap(2000);
	return 0;
}
