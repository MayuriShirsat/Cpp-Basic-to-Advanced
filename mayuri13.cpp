//pass or not
#include<iostream>
using namespace std;

int main()
{
	int phy,che,math;
	cout<<"\n Enter the marks of maths,physics and chemistry:";
	cin>>math>>phy>>che;
	
	if(math>=40&&phy>=40&&che>=40)
	{
		cout<<"\n Congratulation You are Pass:";
	}
	else 
	{
		cout<<"\n You are not pass better luck next time:";
	}
	return 0;
}
