#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,j;
printf("Enter the size of design\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
if(j<=i)
printf("* ");
else
printf(" ");
}
printf("\n");
}
getch();
}