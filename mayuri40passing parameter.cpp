#include<iostream>
using namespace std;

class rectri
{
	private:
		int a,b,area;
	public:
		void get(int x,int y)
		{
			a=x;
			b=y;
		}
		int result()
		{
			area=a*b;
			cout<<"\n Area of rectriangle is :"<<area;
		}
}r;
int main()
{
	int a,b;
	cout<<"\n Enter two sides of rectriangle:";
	cin>>a>>b;
	r.get(a,b);
	
	return 0;
}
