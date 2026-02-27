//passing parameter return value
#include<iostream>
using namespace std;

class rectri
{
	private:
		int s1,s2,ar;
	public:
		void getdata(int x,int y)
		{
			s1=x;
			s2=y;
		}
		int area()
		{
			ar=s1*s2;
			return ar;
		}
}r;
int main()
{
	int a,b,out;
	cout<<"\n Enter two no:";
	cin>>a>>b;
	
	r.getdata(a,b);
	out=r.area();
	cout<<"\n Area of rectriangle is:"<<out;
	//cout<<"\n Area of rectriangle is:"<<r.area();
	return 0;
}
