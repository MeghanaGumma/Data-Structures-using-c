#include<stdio.h>
main()
{
	int temp,sum=0,r,i,fact,n;
	printf("Enter the number: ");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		r=n%10;
		fact=1;
		for(i=1;i<=r;i++)
		{
			fact*=i;
		}
		sum+=fact;
		n/=10;
	}
	if(sum==temp)
	{
		printf("Strong number");
	}
	else
	{
		printf("Not strong number");
	}
}
