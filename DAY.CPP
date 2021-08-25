#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("enter any int:");
scanf("%d",&a);
switch(a)
{
case 1:
printf("monday");
break;
case 2:
printf("tuesday");
break;
case 3:
printf("wednwesday");
break;
case 4:
printf("thursday");
break;
case 5:
printf("friday");
break;
case 6:
printf("saturday");
break;
printf("sunday");
break;
default;
printf("wrong choice");
}
getch();
}
