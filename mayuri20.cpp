#include <iostream>
using namespace std;

int main()
{
	int i=5;
	while(i<=50)
	{
		cout<<"\n i="<<i;
		i+=5;						// i+=5 is i=i+5
	}								// i=+5 has another meaning ie. i=5
	return 0;
}
