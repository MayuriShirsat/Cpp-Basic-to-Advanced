//fun with argument
#include <iostream>
using namespace std;

int circle(float r )
{
	float area;
	area=r*r*3.14;
	cout<<"\n Area of circle is:"<<area;
}
int rectriangle(float a,float b)
{
	int area;
	area=a*b;
	cout<<"\n Area of rectriangle is:"<<area;
}
int main()
{
	float r,a,b;
	cout<<"\n Enter the radius of circle:";
	cin>>r;
	circle(r);
	
	cout<<"\n\n Enter the two sides of rectriangle:";
	cin>>a>>b;
	rectriangle(a,b);
	return 0;
}
