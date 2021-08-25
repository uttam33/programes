#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,n;
int*p;
cout<<"how many no. do you like:"<<endl;
cin>>n;
p=new int[n];
if(p==NULL)
cout<<"Error:memory cloold no allocate"<<endl;
else
{
for(i=0;i<n;i++)
{
cout<<"Enter number:";
cin>>p[i];
}
cout<<"you have entered:"<<endl;
for(i=0;i<n;i++)
cout<<p[i]<<", ";
delete []p;
}
getch();
}