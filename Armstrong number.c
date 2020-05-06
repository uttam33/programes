#include<stdio.h>
#include<conio.h>
main()
{
	int i,r,s,x;
	printf("Armstrong number are\n");
	for(i=1;i<=1000;i++)
	{
	s=0;
	x=i;
	while(x!=0)
	{
	r=x%10;
	s=s+(r*r*r);
	x=x/10;	
	}
	if(s==i)	
	printf("%d\n",i);
	}
	getch();
}
