//19000091

//Q2

#include<stdio.h>

int addition(int *, int *);

int main()
{
	int first,second,sum;
	
	printf("Enter two numbers to add\n");
	scanf("%d%d",&first,&second);
	
	sum = addition(&first, &second);
	
	printf("Sum of two numbers is %d",sum);
	
	return 0; 
}

int addition(int *p, int *q)
{
	int sum;
	sum = *p +*q;
	return sum;
}
