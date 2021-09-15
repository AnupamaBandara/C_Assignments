//201009

//Q6

#include<stdio.h>

int factorial(int i){
	if(i<=1){
		return 1;
	}
	return i*factorial(i-1);
}

int main()
{
	int n,r,nCr;
	printf("Enter number n : ");
	scanf("%d",&n);
	printf("Enter number r : ");
	scanf("%d",&r);
	
	nCr=factorial(n)/(factorial(r)*factorial(n-r));
	
	printf("Value of %dC%d is = %d",n,r,nCr);
}
