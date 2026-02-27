//positive negative by if else if
#include <iostream>
using namespace std;

int main()
{
	int x;
	cout<<"\n enter the value:";
	cin>>x;
	
	if(x>0)
	{
		cout<<"\n The numbre is positive"; 
	}
	else if(x<0)
	{
		cout<<"\n The number is negative";
	}
	else
	{
		cout<<"\n You enter the wrong value";
	}
	return 0;
}

