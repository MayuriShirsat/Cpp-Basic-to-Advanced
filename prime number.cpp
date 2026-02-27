#include<iostream>
using namespace std;

int primenum(int n)
{
	for(int i=2;i<=(n-1);i++)
	{
		if(n%i == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

}
int main()
{
	int n=9;
	if(primenum(n) == true)
	{
		cout<<"prime no";
	}
	else
	{
		cout<<"not prime no";
	}
	
	return 0;
}
