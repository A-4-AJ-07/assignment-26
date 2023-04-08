#include<iostream>
using namespace std;
class Time{
	public:
		int hr,min,sec;
		void setTime(int hh,int mm,int ss)
		{
			hr=hh;
			min=mm;
			sec=ss;
		}
		void showTime()
		{
			cout<<"Time="<<hr<<":"<<min<<":"<<sec;
		}
		void normalize()
		{
			min=min+sec/60;
			sec=sec%60;
			hr=hr+min/60;
			min=min%60;
		}
		Time add(Time t)
		{
			Time temp;
			temp.hr=hr+t.hr;
			temp.min=min+t.min;
			temp.sec=sec+t.sec;
			return temp;
		}
};
int main()
{
	Time t1,t2,t3;
	t1.setTime(22,25,63);
	t2.setTime(2,50,2);
	t3=t1.add(t2);
	t3.normalize();
	t3.showTime();
}