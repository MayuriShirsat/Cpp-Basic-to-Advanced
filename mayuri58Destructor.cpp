/*destructor
1)It is spacial member fun
2)It have same name as class name
3)It call automatically at the end of the program
4)It destroy the memory allocated by constructor*/

#include<conio.h>
#include<iostream>
using namespace std;

class demo
{
	private:
		int a[];
	public:
		demo()
		{
			a[10];
			cout<<"\n Memory is allocated sucessfully";
		}
		~demo()		//destructor
		{
			cout<<"\n Memory dellocated sucessfully";
		}
};
int main()
{
	demo d;
	getch();		//imp in destructor it hold the screen for destructor
	return 0;
}
