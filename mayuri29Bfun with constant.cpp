//fun with constant arugument
#include<iostream>
using namespace std;

float circle(float r=10,const float p=3.14)
{
	return(r*r*p);
}
int main()
{
	float r;
	const float pi=3.14	;		// we can't change value of pi
	
	cout<<"\n Area of circle is:"<<circle();
	
	cout<<"\n Enter value of radius:";
	cin>>r;
	cout<<"\n Area of circle is:"<<circle(r,pi);
		
	return 0;
}
