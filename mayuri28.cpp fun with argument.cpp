//function with argument
#include <iostream>
using namespace std;

void add(float a,float b)
{
	float v;
	v=a+b;
	cout<<"\n Addition is:"<<v;
}
int main()
{
	float a,b;
	cout<<"\n Enter the a & b:";
	cin>>a>>b;
	add(a,b);
	return 0;
}
