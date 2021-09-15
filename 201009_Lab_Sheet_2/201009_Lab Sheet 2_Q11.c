//201009

//Q11

#include<stdio.h>
#include<conio.h>
int main()
{
	float feet,inches,centimeters;
	printf("Enter your height below\n");
	printf("Feet : ");
	scanf("%f",&feet);
	printf("Inches : ");
	scanf("%f",&inches);
	
	centimeters=(feet*12+inches)*2.54;
	printf("Your height in centimeters : %.2f\n",centimeters);
	return 0;
}
