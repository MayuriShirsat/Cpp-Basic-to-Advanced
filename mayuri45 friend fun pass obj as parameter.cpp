//friend fun passing obj as a argument
#include<iostream>
using namespace std;

class evenodd
{
	private:
		int n;
	public:
		void get(int x)
		{
			n=x;
		}	
		friend void ans(evenodd EO);
}E;
void ans(evenodd EO)
{

	if(E.n%2==0)
	{
		cout<<"\n The num is Even";
	}
	else
	{
		cout<<"\n The num is odd";
	}
}
int main()
{
	int y;
	cout<<"\n Enter the number:";
	cin>>y;
	E.get(y);
	ans(EO);
	
	return 0;
}
