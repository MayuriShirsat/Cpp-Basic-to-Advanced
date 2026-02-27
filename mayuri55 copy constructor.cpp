//copy  constructor
#include<iostream>
using namespace std;

class copycon
{
	private:
		int x;
	public:
		copycon()		//default cons
		{
			x=10;
		}
		copycon(copycon &obj);		//copy cons
		
		void display()
		{
			cout<<"\n Value is:"<<x;
		}
};
copycon::copycon(copycon &obj)
		{
			x=obj.x;
		}
int main()
{
	copycon C1;					//call default con
	copycon C2(C1);				//call copy con
	copycon C3=C1;				//assining 1 con to other
	copycon C4=C2;				//re-copping con
	
	C1.display();
	C2.display();
	C3.display(); 
	C4.display();			
	return 0;
}
