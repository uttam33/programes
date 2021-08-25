#include<iostream>
using namespace std;
class box
{
	double length;
	double breadth;
	 double height;
	public:
	static int objectcount;
	box(double l,double b,double h)
	{
	cout<<"constructor called"<<endl;
	length=l;
	breadth=b;
	height=h;
	objectcount++;	
	}	
	double volume()
	{
	return length*breadth*height;	
	}
	static int getcount()
	{
	return objectcount;	
	}
};
int box::objectcount=0;
int  main()
{
cout<<"\ninitial stage count:"<<box::getcount()<<endl;
box box1(2,5,6);
box box2(9,8,7);
cout<<"\nfinal stage count:"<<box::getcount<<endl;	
return 0;
}


