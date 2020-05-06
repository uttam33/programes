#include<stdio.h>
#include<conio.h>>
main()
{
	int n,rev,rem,t;
	printf("All three digit pelidrome number is\n");
for(n=100;n<=1000;n++)
{
	rev=0;
	t=n;
while(t!=0){
rem=t%10;
rev=(rev*10)+rem;
t=t/10;
}
if(rev==n)
printf("%d\n",n);
}
printf("thanks:)");
getch();
}

