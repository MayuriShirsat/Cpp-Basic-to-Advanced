#include <iostream>
using namespace std;

int main()
{
	int n,i,fact=1;
	cout<<"\n Enter any number:";
	cin>>n;
	
	while(n>=1)
	{
		fact*=n;
		n--;
	}
	cout<<"\n Factorial is :"<<fact;
	return 0;
}
