//201009

//Q8

#include<stdio.h>
#include<conio.h>
int main()
{
	float r,h;
	r=3.2; h=10.1;//We consider 'r' as base radius and 'h' as height of the cylider
	float x;//getting r^2
	x=1;
	int i=0;
	for(i=0;i<2;i++)
	{
		x=x*r;
	}
	float Volume=3.14*x*h;//volume of the cylinder
	printf("Volume of the cylinder is %.2f",Volume);//Answer is 324.75
	return 0;
}
