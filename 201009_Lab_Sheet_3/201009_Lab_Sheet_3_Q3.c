//201009

//Q3

#include<stdio.h>
int main()
{
	int x;
	printf("Enter the number : ");
	scanf("%d",&x);
	if(x%2 == 0)//checking entered number is odd or even
	{
		printf("%d is a even number",x);
	}
	else
	{
		printf("%d is an odd number",x);
	}
	return 0;
}
