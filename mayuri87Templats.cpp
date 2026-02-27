//Templats
#include <iostream>
using namespace std;

template<class T>
T maximum(T a,T b)			// T can take any data type like int ,float etc
{
 return	a>b ? a:b;	//conditional operator||if A is greator then condition will be true and a will print
					// if A is smaller then con__on ________ fails and b will print
}
int main()
{
	int x,y;
	float p,q,fmax;
	 
	cout<<"\n Enter two integers:";
	cin>>x>>y; 
	cout<<"\n Enter two floats:";
	cin>>p>>q; 
	 
	cout<<"\n Greater integer is:"<<maximum(x,y);
	  
	fmax=maximum(p,q);
	cout<<"\n Greater float is:"<<fmax;
	return 0;
}
