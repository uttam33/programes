#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,h;
cout<<"enter two numbers\n";
cin>>a>>b;
for(h=a<b?a:b;h>=1;h--)
if(a%h==0&&b%h==0)
break;
cout<<"HCF is:"<<h;
getch();
}