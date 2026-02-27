//using diff types of paramrter and one obj
#include<iostream>
using namespace std;

class addition
{
	public:
		void add(int a,double b)
		{
			cout<<"\n Addition is :"<<a+b;
		}
		void add(int a,char n)
		{
			cout<<"\n Joint is:"<<a<<n;
		}
};
int main()
{
	addition a;					//using only one obj
	a.add(2,3.33);
	a.add(22,'M');
	return 0;
}
