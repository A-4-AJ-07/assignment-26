#include<iostream>
using namespace std;
class student{
	
	int standard,roll_no;
	char name[20];
	public:
		student()
		{
			cout<<"Enter the Details of student:\n";
		}
		void Detail()
		{
			cout<<"Enter the student Name:";
			cin>>name;
			cout<<"Enter the class of student:";
			cin>>standard;
			cout<<"Enter the roll number of student:";
			cin>>roll_no;
		}
		void showDetail()
		{
			cout<<"\nStudent name:"<<name;
			cout<<"\nStudent class:"<<standard;
			cout<<"\nStudent roll number:"<<roll_no;
			
		}
};
int main()
{
	student s;
	s.Detail();
	s.showDetail();
	
}