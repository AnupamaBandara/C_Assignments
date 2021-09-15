//201009

//Q10

#include<stdio.h>
#include<conio.h>
int main()
{
	int years,days,minutes;
	printf("Enter no of years : ");
	scanf("%d",&years);
	printf("Enter no of days : ");
	scanf("%d",&days);
	
	minutes=(years*365+days)*24*60;
	printf("The amount of minutes = %d",minutes);
	return 0;
}
