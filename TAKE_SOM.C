#include<stdio.h>
#include<conio.h>
void main()
{
void multiplication(int,int);
clrscr();
int x,y;
printf("Enter the value of x and y\n");
scanf("%d%d",&x,&y);
multiplication(x,y);
getch();
}
void multiplication(int a,int b)
{
int c;
c=a*b;
printf("multiple is = %d",c);
}
