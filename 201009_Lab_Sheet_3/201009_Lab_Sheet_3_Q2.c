//201009

//Q2

#include<stdio.h>
int main()
{
	int number;
	printf("Enter the page number : ");
	scanf("%d",&number);
	if(number%2 == 0)
	{
		printf("It is a left side page");
	}
	else
	{
		printf("It is a right side page");
	}
	return 0;
}
