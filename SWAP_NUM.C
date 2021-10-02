#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
void swap(int*,int*);
int a,b;
printf("Enter two numbers\n");
scanf("%d%d",&a,&b);
printf("before swap a is =%d and b is = %d\n",a,b);
swap(&a,&b);
printf("after swap a is =%d and b is = %d",a,b);
getch();
}
void swap(int*x,int*y)
{
int c;
c=*x;
*x=*y;
*y=c;
}
