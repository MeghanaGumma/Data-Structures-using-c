#include<stdio.h>
main()
{
	char a[100],b[100]; int i=0,len=0;
	printf("Enter a string: ");
	scanf("%s",a);
	while(a[i]!='\0')
	{
		len++;
		i++;
	}
	for(i=0;i<len;i++)
	{
		b[i]=a[len-i-1];
	}
	b[len] = '\0';
	printf("Original string: %s\nReversed string: %s",a,b);
}
