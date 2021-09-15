//201009

//Q12

#include<stdio.h>
#include<conio.h>
int main()
{
	float cen,fahr;
	printf("Enter the temperature in Celsius : ");
	scanf("%f",&cen);
	fahr=cen*9/5+32;
	printf("Temperature in Farenheit : %.2f",fahr);
	return 0;
}
