#include<stdio.h>
#include<conio.h>
 main()
{

int n,i,d=0;
printf("Enter any number\n");
scanf("%d",&n);
for(i=0;i<=n;i++)
d=d+(1<<i);
printf("sum of series of power of 2^0 to 2^%d=%d",n,d);
getch();
}
