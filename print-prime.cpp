#include<iostream>
using namespace std;

int primenum(int n)
{
		for(int i=2;i<n;i++)
		{
			if(n%i == 0)
			{
				return false;
			}
		}
		return true;
}
int main()
{
	int m=15;
	for(int n=2;n<=m;n++)
	{
		if(primenum(n) == true)
		{
			cout<<n<<endl;
		}
	}
	
	return 0;
}
