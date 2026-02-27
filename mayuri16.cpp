#include<iostream>
using namespace std;

int main()
{
	int a,b,n;
	char ope;
	cout<<"\n Enter the values for a and b:";
	cin>>a>>b;
	cout<<"\n Enter tha operation :";
	cin>>ope;
	
	switch(ope)
	{
		case '+':n=a+b;
				cout<<"\n The addition is :"<<n;
				break;
		case '-':n=a-b;
		 		cout<<"n The substraction is:"<<n;
		 		break;
		case '*':n=a*b;
		        cout<<"n The multplication is:"<<n;
		        break;
		case '/':n==a/b;
		        cout<<"\n The division is:"<<n;
		        break;
		default :cout<<"\n You enter the wrong choice";
		
	}
	return 0;
}
