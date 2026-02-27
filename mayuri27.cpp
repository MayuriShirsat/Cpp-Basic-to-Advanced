#include <iostream>
using namespace std;

void circle()
{
	float r,area;
	cout<<"\n Enter the radius:";
	cin>>r;
	
	area=r*r*3.14;
	cout<<"\n Area of circle is:"<<area;
}
float rectriangle()
{
	float a,b,area;
	cout<<"\n Enter the two sides of rectriangle :";
	cin>>a>>b;
	
	area=a*b;
	cout<<"\n Area of rectriabgle is:"<<area;
}
int triangle()
{
	int h,b,area;
	cout<<"\n enter the hight and base of triangle :";
	cin>>h>>b;
	
	area=h*b*0.5;
	cout<<"\n Area of triangle is:"<<area;
}
void square()
{
	int s,area;
	cout<<"\n Enter the side of square :";
	cin>>s;
	
	area=s*s;
	cout<<"\n Area of square is:"<<area;
}
int main()
{
	circle();
	rectriangle();
    square();
	triangle();	
} 
