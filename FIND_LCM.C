#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,L;
cout<<"enter two nmber\n";
cin>>a>>b;
for(L=1;L<=a*b;L++)
if(L%a==0&&L%b==0)
break;
cout<<"LCM is :"<<L;
getch();
}