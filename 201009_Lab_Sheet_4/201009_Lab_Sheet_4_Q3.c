//201009

//Q3

#include<stdio.h>

void Area(int x)
{
	int area=x*x*6;
	printf("Surface Area of cube is %d\n",area);
}

void Volume(int x)
{
	int volume=x*x*x;
	printf("Volume of the cube is %d\n",volume);
}

void main()
{
	int y;
	printf("Enter the length of a side of the cube : ");
	scanf("%d",&y);
	Area(y);
	Volume(y);
}
