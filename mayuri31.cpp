#include<iostream>
using namespace std;

float circle(float r)
{
	float Area;
	Area=r*r*3.14;
	return (Area);
}
float triangle(float h,float b)
{
	return (h*b*0.5);
}
int main()
{
	float r,a,h,b;
	cout<<"\n Enter the radius of circle:";
	cin>>r;
	a=circle(r);							//another methode of printing area rather than @1
	cout<<"\n Area of circle is :"<<a;
	
	cout<<"\n Enter the hight and base of triangle:";
	cin>>h>>b;
	cout<<"\n Area of triangle is :"<<triangle(h,b);		//@1
	return 0;
}
