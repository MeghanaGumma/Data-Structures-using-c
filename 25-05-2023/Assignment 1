#include<stdio.h>
main()
{
	char a[100]; int i=0,lower=0,spl=0,temp=0;
	printf("Enter the string: ");
	scanf("%s",a);
	while(a[i]!='\0')
	{
		if(a[i]>='a'&&a[i]<='z')
		{
			lower++;
		}
		else if(a[i]>='A'&&a[i]<='Z')
		{
			temp++;
		}
			else if(a[i]>='0'&&a[i]<='9')
			{
				temp++;
			}
				else
				{
					spl++;
				}
		i++;
	}
	printf("The number of lowercase characters = %d and special characters = %d",lower,spl);
}
