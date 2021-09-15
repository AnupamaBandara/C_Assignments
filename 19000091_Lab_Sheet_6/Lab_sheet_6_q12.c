//19000091

//Q12

#include<stdio.h>

void main() {
	int Array[100];
	int i,n,sum = 0;
	int *p;

	printf("Enter the number of element in the array(maximum 100) : ");
	scanf("%d",&n);
	
	printf("Enter the array elements :\n");
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &Array[i]);
	}
	
	p = Array;
	
	for (i = 0; i < n; i++) 
	{
		sum = sum + *p;
		p++;
	}
   
	printf("The sum of array elements : %d", sum);
   
}
