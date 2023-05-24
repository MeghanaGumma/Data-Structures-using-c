#include<stdio.h>
main()
{
	int i,j=0,n1,n2;
	printf("Enter size of array 1 and 2: ");
	scanf("%d%d",&n1,&n2);
	int a[n1],b[n2],c[n1+n2];
	printf("Enter elements of first array: ");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter elements of second array: ");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n1;i++)
	{
		c[i]=a[i];
		j++;
	}
	for(i=0;i<n2;i++)
	{
		c[j]=b[i];
		j++;
	}
	printf("Merged array: ");
	for(i=0;i<n1+n2;i++)
	{
		printf("%d ",c[i]);
	}
}

