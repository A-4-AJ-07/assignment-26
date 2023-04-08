#include<iostream>
using namespace std;
class cube{
   public :
   int a;
   cube(int s)
   {
   	a=s;
	   }
	void volume()
	{ 
	  int v;
	  v=a*a*a;
	  cout<<"Volume of cube="<<v;
		}	
};
int main()
{
	cube s(10);
	s.volume();
	
}
