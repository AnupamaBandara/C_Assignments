//201009

//Q12

#include<stdio.h>
int main()
{
	int N,M,Z;
	int count=0;
	printf("Enter the given integer range first number : ");
	scanf("%d",&N);
	printf("Enter the given integer range last number : ");
	scanf("%d",&M);
	while(N<=M)
	{
		Z=N;
		while(Z!=0)
		{
			if(Z%10==2)
			{
				count++;
			}
			Z /= 10;
		}
		N++;
	}
	printf("The number of 2s in given range of integers is %d",count);
	return 0;
}
