//Obtaining total marks
#include <iostream>
using namespace std ;

int main()
{
	int phy,che,maths,Totle,Pre;
	cout<<"\n Enter the marks of phy,che,maths:";
	cin>>phy>>che>>maths;
	
	Totle=phy+che+maths;
	cout<<"\n Totle marks are:"<<Totle;
	
	Pre=Totle/3;
	cout<<"\n Presentage is:"<<Pre;
	
	return 0;
}
