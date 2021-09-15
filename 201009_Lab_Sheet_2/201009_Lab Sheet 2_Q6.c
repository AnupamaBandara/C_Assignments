//201009

//Q6

#include<stdio.h>
#include<conio.h>

int main()
{
	float r;
	r=5.4;
	float y;//getting of r^2
	y=1;
	int i=0;
	for(i=0;i<2;i++)
	{
		y=y*r;
	}
	float result;//Area of disk
	result=3.14*y;
	printf("Answer is =%.2f",result);//Answer is 91.56
	return 0;
}
