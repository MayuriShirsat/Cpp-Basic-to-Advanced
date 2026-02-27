//con__or with deafult argument
//when we use dea__ con__er with argument we cant decleare default con__er
#include<iostream>
using namespace std;

class def_arg
{
	//private:
	//	int a;
	public:
		def_arg(int x=100)
		{
			//a=x;
			cout<<"\n Value is:"<<x;
		}
};
int main()
{
	def_arg A1;
	def_arg A2(500);
	return 0;
}
