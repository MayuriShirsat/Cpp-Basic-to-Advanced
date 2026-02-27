#include<iostream>
using namespace std;

class mydemo
{
	private:
		int a,b;
	public:
		void add()
		{
			cout<<"\n Enter two no.:";
			cin>>a>>b;
			cout<<"\n Addition is:"<<a+b;
		}
};
int main()
{
	mydemo obj;
	obj.add();
	return 0;
}
