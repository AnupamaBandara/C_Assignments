//201009

//Q10

#include<stdio.h>
#include<conio.h>
int main()
{
	int year;
	printf("Enter the year :");
	scanf("%d",&year);
	
	if(year%400==0)
	{
		printf("This is a leap year");
	}
	else if(year%4==0 && year%100!=0)
	{
		printf("This is a leap year");
	}
	else
	{
		printf("This is not a leap year");
	}
	return 0;
}
