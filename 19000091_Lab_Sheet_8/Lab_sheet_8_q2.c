//19000091

//Q2

#include<stdio.h>
#include<stdlib.h>
struct distance
{
	int feet;
   float inch;
	
	
}dis1, dis2, sum;

void main()
{
	
	printf("Enter 1st the distance\n");
	printf("Enter the feet:");
	scanf("%d",&dis1.feet);
	printf("Enter the inch:");
	scanf("%f",&dis1.inch);
	printf("\nEnter 2nd the distance\n");
	printf("Enter the feet:");
	scanf("%d",&dis2.feet);
	printf("Enter the inch:");
	scanf("%f",&dis2.inch);
	
	sum.feet=dis1.feet+dis2.feet;
	sum.inch=dis1.inch+dis2.inch;
	
	if(sum.inch>=12)
	{
		sum.inch=(sum.inch-12);
		sum.feet=sum.feet+1;
	}
	
	printf("\nSum is %d feet %f inch",sum.feet,sum.inch);
	
}

