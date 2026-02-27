#include <iostream>
using namespace std;

class student
{
	protected:
		int seatno;
		char nm[10];
	public:
		
		void get()
		{
			cout<<"\n Enter your name and seat no:";
			cin>>nm>>seatno;
		}
		void put()
		{
			cout<<"\n Name:"<<nm<<"\n Seat No:"<<seatno;
		}
}S;
class exam:public student
{
	protected:
		int cs,ele,math;
	public:
		
		void getdata()
		{
			seatno;
			cout<<"\n Enter marks of CS:";
			cin>>cs;
			cout<<"\n Enter marks of ELE:";
			cin>>ele;
			cout<<"\n Enter marks of MATH:";
			cin>>math;
		}
		void putdata()
		{
			cout<<"\n MARKS OF CS:"<<cs;
			cout<<"\n MARKS OF ELE:"<<ele;
			cout<<"\n MARKS OF MATH:"<<math;
		}
};
class evs
{
	protected:
		char grade;
	public:
		
		void getgrade()
		{
			//S.seatno;
			cout<<"\n Enter grades of enviromental science:";
			cin>>grade;
		}
		void putgrade()
		{
			cout<<"\n Grades are:"<<grade;
		}
};
class result:public evs,public exam
{
	protected:
		int total;
		float per;
	public:

		void display()
		{
			total=cs+ele+math;
			per=total/3;
			put();
			putdata();
			putgrade();
			cout<<"\n Total is:"<<total;
			cout<<"\n Persentage is:"<<per;
			
			if((cs>30)&&(ele>30)&&(math>30)||(grade=='A')||(grade=='B')||(grade=='C'))
			{
				cout<<"\n YOU ARE PASS";
			}
			else
			{
				cout<<"\n YOU ARE FAIL";
			}
		}
}r;
int main()
{
	r.get();
	r.getdata();
	r.getgrade();
	
	r.display();
	return 0;
}
