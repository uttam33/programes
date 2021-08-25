#include<stdio.h>
#include<conio.h>
void main()
{
int choice,length,breadth,radius;
clrscr();
printf("select figure:");
printf("\n1.circle\n2.rectangle\n3.triangle");
printf("enter a choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("enter radius:");
scanf("%d",&radius);
printf("area:%f",(float)3.14*radius*radius);
break;
case 2:
printf(enter length and breadth:");
scanf(%d %d",&length,&breadth);
printf("area:%d",length*breadth);
break;
case 3:
printf("enter base and height:");
scanf(%d %d",&length,&breadth);
printf("area:%f",(float)0.5*length*breadth);
break;
default:
printf("invalid choice");
}
grtch();
}