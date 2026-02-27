#include <iostream>
using namespace std;

int main()
{
	int i,fact=1;
	cout<<endl<<" Enter the number:";
	cin>>i;
	do
	{
		fact*=i;
		 i--;
	}
	while (i>=1);
	cout<<"\n Factorial is :"<<fact;
	return 0;
}
