//vowel finding
#include <iostream>
using namespace std;

int main()
{
	int v;
	cout<<"\n Enter any character:";
	cin>>v;
	if(v=='a'||v=='e'||v=='i'||v=='o'||v=='u')
	{
		cout<<"\n This is a vowel";
	}
	else
	{
		cout<<"\n This is not a vowel";
	}
	return 0;
}
