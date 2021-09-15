//19000091

//Q1

#include<stdio.h>

int main()
{
	int first,second,*a,*b,sum;
	
	printf("Enter two numbers to add\n");
	scanf("%d%d",&first,&second);
	
	a=&first;
	b=&second;
	
	sum= *a+*b;
	
	printf("Sum of two numbers are %d\n",sum);
	
	return 0;
}
