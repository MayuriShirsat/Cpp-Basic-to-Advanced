//using class template
//taking two datatypes in class defination 

#include<iostream>
using namespace std;

template<class T1,class T2>

class test
{
	T1 a;
	T2 b;
	public:
		test(T1 x,T2 y)
		{
			a=x;
			b=y;
		}
		void show()
		{
			cout<<"\n A="<<a<<"\n B="<<b;
		}
};
int main()
{
	test<float,int>
	obj1(2.22,222);
	test<int,char>
	obj2(3,'M');
	
	obj1.show();
	obj2.show();
	return 0;
}
