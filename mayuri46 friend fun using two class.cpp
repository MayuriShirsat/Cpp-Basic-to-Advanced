//friend fun using two classes
//assi-addition,swap,triangle
#include<iostream>
using namespace std;

class two;
class one
{
	private:
		int a;
	public:
		void input(int x)
		{
			a=x;
		}
		friend void mul(one,two);
}o;
class two
{
	private:
		int d;
	public:
		void input(int j)
		{
			d=j;
		}
		friend void mul(one,two);
}t;
void mul(one,two)
{
	int c;
	c=o.a*t.d;
	cout<<"\n Multiplication is:"<<c;
}
int main()
{
	o.input(10);
	t.input(20);
	mul(o,t);
	return 0;
}
