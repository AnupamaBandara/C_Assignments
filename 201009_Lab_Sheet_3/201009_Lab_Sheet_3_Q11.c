//201009

//Q11

#include<stdio.h>
#include<conio.h>
void main()
{
	float height,weight,BMI;
	//get height and weight from the user
	printf("Enter your weight(In kilograms) : ");
	scanf("%f",&weight);
	printf("Enter your height(In meters) : ");
	scanf("%f",&height);
	
	BMI=weight/(height*height);
	printf("Your BMI is %.2f\n",BMI);
	
	if(BMI<18.5)
	{
		printf("Underweight");
	}
	else if(BMI>=18.5 && BMI<25.0)
	{
		printf("Normal weight");
	}
	else if(BMI>=25.0 && BMI<30.0)
	{
		printf("Overweight");
	}
	else
	{
		printf("Obesity");
	}
}
