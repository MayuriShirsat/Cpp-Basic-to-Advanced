//class
#include<iostream>
using namespace std;

class mydemo
{
	private:							//asses specifier
		int a;
	public:
		int b;
	protected:							//use by member funs only
};
int main()
{
	mydemo obj;							//object creation
	//obj.a=100;						//not accessecible cose a is privat member
	obj.b=300;
	cout<<"\n Value of b is:"<<obj.b;
	return 0;
}
