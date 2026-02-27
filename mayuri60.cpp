#include<conio.h>
#include<iostream>
using namespace std;

int total=0;			//Globle decleration
class demo
{
	public:
		demo()
		{
			total++;
			cout<<"\n"<<total<<"object are created";
		}
		~demo()
		{
			cout<<"\n\n"<<total<<"object are destory";
			total--;
			getch();
		}
};
int main()
{
	demo d1,d2,d3,d4,d5;		//obj are des__oy in revers order from 5__1 one by one
	getch();
	return 0;
}
