//overloading binary arithmatic operators(+,-,*,/)
#include<iostream>
using namespace std;

class binary
{
	private:
		int a;
	public:
		binary()
		{
			
		}
		binary(int x);
		void show();
		binary operator +(binary);
		binary operator -(binary);
		binary operator *(binary);
		binary operator /(binary);
};
binary::binary(int x)
{
	a=x;
}
void binary::show()
{
	cout<<"\n Value is:"<<a;
}
binary binary::operator +(binary S)
{
	S.a=a+S.a;
	return S;
}
binary binary::operator -(binary S)
{
	S.a=a-S.a;
	return S;
}
binary binary::operator *(binary S)
{
	S.a=a*S.a;
	return S;
}
binary binary::operator /(binary S)
{
	S.a=a/S.a;
	return S;
}
int main()
{
	binary D1(100),D2(200),D3,D4,D5,D6;
	D1.show();
	D2.show();
	
	cout<<"\n Addition is:";
	D3=D2+D1;
	D3.show();
	
	cout<<"\n Substraction is:";
	D4=D1-D2;
	D4.show();
	
	cout<<"\n multiplition is:";
	D5=D2*D1;
	D5.show();
	
	
	cout<<"\n Division is:";
	D6=D2/D1;
	D6.show();
	return 0;
}

	

