#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int max(int ,int);
int x=3 ,y=4;
printf("grater is %d",max(x,y));
getch();
}
int max(int a,int b)
{
return(a>b?(a):(b));
}