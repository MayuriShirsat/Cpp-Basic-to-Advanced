#include<iostream>
using namespace std;

class demo
{
	private:
		int num;
	public:
		demo(int x=19)
		{
			num=x;
		}
		void display()
		{
			cout<<"\n The value is:"<<num;
		}
};
int main()
{
	demo d2;
	d2.display();
	
	demo d1(20);
	d1.display();
	return 0;
}
