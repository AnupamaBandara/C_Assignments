//201009

//Q14

#include<stdio.h>
#include<conio.h>
int main()
{
	int A,B,C;
	printf("Enter the Number A : ");
	scanf("%d",&A);
	printf("Enter the Number B : ");
	scanf("%d",&B);
	printf("Enter the Number C : ");
	scanf("%d",&C);
	
	if(A>B && A>C)
	{
		printf("A is the largest number");
	}
	else if(B>C)
	{
		printf("B is the largest number");
	}
	else
	{
		printf("C is the largest number");
	}
	return 0;
}
