//19000091

//Q3

#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,*max,*x,*y;
	
	printf("\t\t----Find the largest number between two numbers----\n");
	printf("Enter the two numbers\n");
	scanf("%d%d",&a,&b);
	
	x=&a;
	y=&b;
	
	if(*x>*y){
		max = x;
	}
	else if(*y>*x){
		max = y;
	}
	else{
		printf("The two numbers are equal");
	}
	
	printf("The largest number is %d",*max);
}
