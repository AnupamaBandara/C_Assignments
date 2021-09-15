//201009

//Q5

#include<stdio.h>
#include<conio.h>
void main()
{
	float x1,x2,y1,y2,slope;
	printf("Enter the X Coordinator of Endpoint 1 : ");
	scanf("%f",&x1);
	printf("Enter the Y Coordinator of Endpoint 1 : ");
	scanf("%f",&y1);
	printf("Enter the X Coordinator of Endpoint 2 : ");
	scanf("%f",&x2);
	printf("Enter the Y Coordinator of Endpoint 2 : ");
	scanf("%f",&y2);
	
	slope=(y2-y1)/(x2-x1);//slope of the line through the two points (x1,y1) and (x2,y2)
	
	if(x2-x1==0)//check whether slope is defined or undefined
	{
		printf("Slope is undefined");
	}
	else
	{
		printf("Slope is defined\n");
		printf("Slope is %.2f",slope);
	}	
}
