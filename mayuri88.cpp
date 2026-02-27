#include <iostream>
using namespace std;
//using adress 
template<class t>
t swp(t &a,t &b)			
{
	t temp=a;
	a=b;
	b=temp;
}
int main()
{
	int x,y;
	float p,q;
	 
	cout<<"\n Enter two integers:";
	cin>>x>>y; 
	cout<<"\n Enter two floats:";
	cin>>p>>q; 
	 
	cout<<"\n Values before swapping:";
	cout<<"\n X="<<x<<"\n Y="<<y;
	cout<<"\n P="<<p<<"\n Q="<<q;
	  
	swp(x,y);
	swp(p,q);
	
	cout<<"\n values after swapping:";
	cout<<"\n X="<<x<<"\n Y="<<y;
	cout<<"\n P="<<p<<"\n Q="<<q;
	return 0;
}
