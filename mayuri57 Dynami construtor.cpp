//Dynamic con__tor
#include<conio.h>
#include<iostream>
#include<string.h>
using namespace std;

class lang
{
	private:
		char *name;
		int size;
	public:
		lang()
		{
			size=1;			
			name = new char[size];		//new is used for dynamic allocation of mamory
		}
		lang(char *a)
		{
		size=strlen(a);
		name=new char[size];
		strcpy(name,a);
		cout<<"\n Lang name:"<<name;
		cout<<"\n Size of "<<name<<" is "<<strlen(name);
		}
};
int main()
{
	lang l1;
	lang l2("Java");
	lang l3("PHY");
	return 0;
}
