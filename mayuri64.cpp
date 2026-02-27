//urinary minus overloading     
#include<iostream>
using namespace std;
//assi u_increment++() and u_decrement--()
class u_minus
{
	int a,b;
	public:
		u_minus(int x,int y);
		void show();
		void operator -();
}   ;
u_minus::u_minus(int x,int y)
{
	a=x;
	b=y;
}
void u_minus::show()
{
	cout<<"\n Value of A="<<a<<"\t B="<<b;
}
void u_minus::operator -()
{
	a=-a;
	b=-b;
	
}
int main()
{
	int i,j;
	cout<<"\n Enter two values:";
	cin>>i>>j;
	
	u_minus U(i,j);
	cout<<"\n Value of a & b before overloading:";
	U.show();
	
	-U;
	cout<<"\n Value of a & b after overloading :";
	U.show();
	return 0;
	
}
