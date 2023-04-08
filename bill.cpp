#include<iostream>
using namespace std;
class Bill{
	char name[20];
	int bill_no,unit;
	public:
		void getDetail()
		{
			cout<<"Enter the Name of customer :";
			cin>>name;
			cout<<"Enter the Bill number:";
			cin>>bill_no;
			cout<<"Enter the Number of units:";
			cin>>unit;
		}
		void calculateBill(){
			float amount;
			if(unit<=100){
				amount=unit*1.20;
			}
			else if(unit>100&&unit<=200)
			{
				amount=unit*2;
			}
			else{
				amount=unit*3;
			}
			cout<<"Total amount of bill:"<<amount;
		}
};
int main()
{
	Bill b;
	b.getDetail();
	b.calculateBill();
}