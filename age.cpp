#include<stdio.h>
main()
{
int age,bb=0,sch=0,adt=0,i;
for(i=0;i<20;i++)
{
	printf("Enter age %d: ",i+1);
	scanf("%d",&age);
	if(age<=7&&age>=0)
		bb++;
	else if(age<=18&&age>=8)
		sch++;
		else if(age>18)
			adt++;
}
printf("\nThe number of\nBabies = %d\nSchool kids = %d\nAdults = %d",bb,sch,adt);
}
