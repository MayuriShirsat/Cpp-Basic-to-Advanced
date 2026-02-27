//constructors
/*note : 1)types of constructor
			a)Default 
			b)parameterized
				i)pa______ed con___er with deafult argument
			c)copy 
			d)Dynamic
		2)It is spacial member fun
		3)dont have return type
		4)have same name as classs name
		5)used to initialise class obj
		6)default con___er called automaticaly when obj created*/
#include<iostream>
using namespace std;

class demo
{
	public:
		demo()				
		{
			cout<<"\n You are in default constructer";
		}
};
int main()
{
	demo d;			//default con___er called atomatically
	return 0;
}
