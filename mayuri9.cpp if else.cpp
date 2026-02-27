//Conditional statements
//if else even or odd
#include <iostream>
using namespace std;

int main()
{
	int x;
	cout<<"\n Enter the number x:";
	cin>>x;
	
	if(x%2==0)		//condition 
	{
		cout<<"\n The number is even";		//run if condition is true 
	}
	else
	{
		cout<<"\n The number is odd";		//if condition is false
	}
	return 0;
}
