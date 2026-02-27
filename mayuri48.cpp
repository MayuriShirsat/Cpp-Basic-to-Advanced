//assi--area of circle,triangle,square and factorial
#include<iostream>
using namespace std;

class rectriangle
{
	int l,b,area;
	public:
		rectriangle();
		void display();
		
}r;				//default co__er fun (rec__ler)is called
rectriangle::rectriangle()
		{
			cout<<"\n Enter the length and bredth of rectriangle:";
			cin>>l>>b;
			area=l*b;
		}
void rectriangle::display()
{
	cout<<"\n Area of rectriangle is:"<<area;
}
int main()
{
	r.display();			//fun call
	return 0;
}
