#include<iostream>
using namespace std;

class filds
{
	public:
		void message()
		{
			cout<<"\n There are many filds";
		}
		void call()
		{
			cout<<"\n Intelegent people take this fild";
		}
};
class art:public filds
{
	public:
		void psy()
		{
			message();
			cout<<"\n psycholagy is study of human mind";
		}
		void general()
		{
			cout<<"\n There are following generel filds:";
			cout<<"\n English";
			cout<<"\n History";
		}
}a;
class science:public filds
{
	public:
		void CS()
		{
			call();
			cout<<"\n Computer science likes U";
		}
		void biotch()
		{
			cout<<"\n Biotechnology is branch of biology";
		}
}s;
int main()
{
	cout<<"\n ARTS";
	a.psy();
	a.general();
	
	cout<<"\n\n\n SCIENCE";
	s.CS();
	s.biotch();
}
