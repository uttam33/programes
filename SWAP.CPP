#include<stdio.h>
#include<conio.h>
void  swap(int*,int*);
int a=20,b=30;
void main()
{
clrscr();
printf("%d\n%d\n",a,b);
swap(&a,&b);
printf("%d\n%d",a,b);
getch();

}
void swap(int *p,int *q)
{
int t;
t=*p;
*p=*q;
*q=t;
}
