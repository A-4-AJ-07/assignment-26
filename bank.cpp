#include<iostream>
using namespace std;
class Bank{
	int p,r,t;
	public:
		Bank(int pl,int rate,int time){
			p=pl;
			r=rate;
			t=time;
		}
		void Si(){
			int simple_intrest=p*r*t/100;
			cout<<"Simple intreast:"<<simple_intrest;
		}
};
int main(){
	int p,r,t;
	cout<<"Enter the principal amount:";
	cin>>p;
	cout<<"Enter the rate of interest: ";
	cin>>r;
	cout<<"Enter the time in years:";
	cin>>t;
	Bank b(p,r,t);
	b.Si();
}
