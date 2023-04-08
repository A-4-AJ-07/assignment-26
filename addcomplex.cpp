#include <iostream>
using namespace std;

class complex{
	 public:
	 	int a,b;
	 void setdata(int x,int y)
	 {
	 	a=x;
	 	b=y;
		 }	
	void showData(){
		 cout<<"sum="<<a<<"+"<<b<<"i";
	}
	complex add(complex c)
	{ 
	  complex temp;
	  temp.a=a+c.a;
	  temp.b=b+c.b;
	  return temp;
	}
};
 int main()
 {
 	complex c1,c2,c3;
 	c1.setdata(10,20);
 	c2.setdata(5,5);
 	c3=c1.add(c2);
 	c3.showData();
 }