#include<iostream>
using namespace std;
//assi swap value
class ope__ovr
{
	int a,b;
	public:
		ope__ovr(int x,int y)
		{
			a=x;
			b=y;
		}
		void operator *()
		{
			cout<<"\n "<<a+b;
		}
};
class normal__fun
{
	int a,b,ans;
	public:
		//void mul(int x,int y)
		normal__fun (int x,int y)
		{
			a=x;
			b=y;
			ans=a*b;
			cout<<"\n "<<ans;
		}
};
int main()
{
	cout<<"\n Operation by overloading";
	ope__ovr O(10,30);
    *O;	
    cout<<"\n operation by normal function";
	normal__fun N (22,10);
	//normal__fun M;
	//M.mul(22,10);
	return 0;
	
}
