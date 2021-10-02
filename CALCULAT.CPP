#include<iostream.h>
#include<Cconio.h>
void main()
{int a,b;
char choice;
clrscr();
printf("enter 2 int:");
scanf("%d %d",&a,&b);
printf("select an operator:");
printf("1.add\n 2.sub\n 3.mult\n 4.div");
printf("\nenter your choice:");
fflush(stdlin);
scanf("%c",&choice);
switch(choice)
{
case 1:
printf("sum is %d",a+b);
break;
case 2:
printf("sub is %d",a-b);
break;
case 3:
printf("mult is %d",a*b);
break;
case 4:
printf("div is %d",a/b);
break;
default:
printf("invalid choice");
}
getch();
}

