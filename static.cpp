#include<iostream>
using namespace std;
class staticCount{
	 static int b;
	public:
		
		void staticVariable()
		{
			b++;
		}
		void Display(){
			cout<<"The function is called "<<b<<" times";
		}
};
int staticCount::b=0;
int main()
{
	staticCount s,s1;
	s.staticVariable();
	s.staticVariable();
	s.staticVariable();
	s.Display();
	
}