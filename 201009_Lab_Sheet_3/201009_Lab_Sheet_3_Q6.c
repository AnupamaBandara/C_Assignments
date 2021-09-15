//201009

//Q6

#include<stdio.h>
#include<conio.h>
int main()
{
	float Unt,Untpr,Rev;//Quantity of product as Unt,Unit price as Untpr,Revenue as Rev
	
	printf("Enter the unit price of the product : ");
	scanf("%f",&Untpr);
	printf("Enter the quantity of the product : ");
	scanf("%f",&Unt);
	
	if(Unt<120)
	{
		Rev=Unt*Untpr;
		printf("The revenue is Rs.%.2f", Rev);
	}
	else if(120<=Unt && Unt<=160)
	{
		Rev=Unt*Untpr*85/100;
		printf("The revenue is Rs.%.2f", Rev);
	}
	else
	{
		Rev=Unt*Untpr*80/100;
		printf("The revenue is Rs.%.2f", Rev);	
	}
}
