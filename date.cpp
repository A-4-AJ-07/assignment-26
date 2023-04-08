#include<iostream>
using namespace std;
class Date{
	
	public:
		int MM,DD,YYYY;
		Date(int dd,int mm,int yyyy)
		{
	       	DD=dd;
	       	MM=mm;
	       	YYYY=yyyy;
		}
		void showDate(){
			cout<<"Date in format of DD-MM-YYYY:"<<DD<<"-"<<MM<<"-"<<YYYY;
		}
};
int main()
{
	Date d(05,1,23);
	d.showDate();
	return 0;
}