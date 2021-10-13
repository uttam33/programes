#include<stdio.h>
#include<conio.h>
int main()
{
	int a[50];
	int x,n,low=0,high=n-1,mid,i;
	printf("enter the array size\n");
	scanf("%d",&n);
	printf("enter %d elements in  array\n");
	for(i=0;i<=n;i++)
	{
		scanf("%d",a[i]);
	}
	printf("enter element that you want to find:)\n");
	scanf("%d",&x);
	while(low<=high)
	{
		mid=(low+high)/2;
		if(x<a[mid])
		{
		high=mid-1;
	}
		else if(x>a[mid])
	{
		low=mid+1;
		
		}
		else
		return mid;
	}
 return -1;
}