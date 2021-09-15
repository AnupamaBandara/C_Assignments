//201009

//Q1

#include<stdio.h>

void addition()
{
	int x,y,add;
	printf("Enter your first number : ");
	scanf("%d",&x);
	printf("Enter your second number : ");
	scanf("%d",&y);
	
	add=x+y;
	printf("The sum of two numbers you entered is %d",add);
}

int main()
{
	addition();
}
