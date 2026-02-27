#include<conio.h>
#include<iostream>
using namespace std;

class des__or
{
	int n1,n2;
	public:
		des__or(int a,int b)
		{
			n1=a;
			n2=b;
		}
		void display()
		{
			cout<<"\n Values are:"<<n1<<"\t"<<n2;
		}
		~des__or()
		{
			cout<<"\n Value of first number is:"<<n1;
		}
};
int main()
{
	des__or D(10,20);
	D.display();
	getch();
	return 0;
}
