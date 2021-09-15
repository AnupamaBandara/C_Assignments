//201009

//Q5

#include<stdio.h>
#include<conio.h>
int main()
{
	float X,N;
	X=1.3,N=5;
	float result;
	result=1;
	int i=0;
	for(i=0;i<N;i++)
	{
		result=result*X;
	}
	
	printf("Answer is = %.2f",result);//Answer is 3.71
	return 0;
}
