#include<stdio.h>
#include<conio.h>
void main()
{
int f;
clrscr();
printf("enter temp in farenhite:");
scanf("%d",&f);
printf("temp in celcius is %f",((float)f-32)*5/9);
getch();
}
