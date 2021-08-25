#include<iostream.h>
#include<conio.h>
class circle
{
public:
double radius;
double compute_area()
{
return 3.14*radius*radius;
}
};
void main()
{
clrscr();
circle obj;
obj.radius=5.5;
cout<<"Radius is: "<<obj.radius<<"\n";
cout<<"Area is: "<<obj.compute_area()<<endl;
getch();
}