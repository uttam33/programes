#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,t1=0,t2=1,next;
printf("Enter the size of fibonacci series\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%d ",t1);
next=t1+t2;
t1=t2;
t2=next;
}
getch();
}
