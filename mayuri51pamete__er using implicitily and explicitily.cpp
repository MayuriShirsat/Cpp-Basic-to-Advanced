#include<iostream>
using namespace std;

class power
{
	public:
		power(int p,int b)
		{
			int i,ans=1;
			for(i=1;i<=p;i++)
			{
				ans*=b;
			}
			cout<<"\n "<<b<<"^"<<p<<":"<<ans;
		}
};
int main()
{
	//int po,ba;
	//cout<<"\n Enter power and base :";
	//cin>>po>>ba;
	power P1(3,3);		//calling cons implicitly
	power P2=power(7,2);	//calling cons explicitly
	return 0;
	
}
