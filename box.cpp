#include<iostream>
using namespace std;
class Box{
	int length,breadth,height;
	public:
		Box()
		{
			cout<<"Enter the details of boox:";
		
		}
		void setData()
		{
			cout<<"\nEnter the length of box:";
			cin>>length;
			cout<<"Enter the breadth of box:";
			cin>>breadth;
			cout<<"Enter the height of box: ";
			cin>>height;
		}
		void volume()
		{
			int v=length*breadth*height;
			cout<<"\nVolume of box:"<<v;
		}
};
int main()
{
	Box b;
	b.setData();
	b.volume();
}