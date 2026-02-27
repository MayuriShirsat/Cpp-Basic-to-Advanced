//Parameterised constructor
//assi--swap,leapyear,evenodd,facto,reverce,square
#include<iostream>
using namespace std;

class demo
{
	private:
		int a;
	public:
		demo(int x)
		{
			a=x;
			cout<<"\n The value of given number is:"<<a;
		}
};
int main()
{
	int n;
	cout<<"\n Enter any num:";
	cin>>n;
	demo D(n);
	
	demo(4);
	return 0;
}
