//201009

//Q1

#include<stdio.h>
#include<conio.h>
int main()
{
	float a,b,c,d;
	a=1; b=2; c=3; d=4;
	printf("Answer for 1) a. =%.2f\n",(a+b)/(c+d));//answer is 0.43
	printf("Answer for 1) b. =%.2f\n",a+b/(c+d));//answer is 1.29
	printf("Answer for 1) c. =%.2f\n",(a+b)/c+d);//answer is 5.00
	printf("Answer for 1) d. =%.2f\n",a*b/c*d);//answer is 2.67
	return 0;
}

