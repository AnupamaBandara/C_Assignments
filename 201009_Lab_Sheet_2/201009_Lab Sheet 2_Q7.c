//201009

//Q7

#include<stdio.h>
#include<conio.h>
int main()
{
	float r,R;
	r=5; R=7; 
	float x=1;//getting r^2
	float y=1;//getting R^2
	int i=0;
	for(i=0;i<2;i++)
	{
		x=x*r;
		y=y*R;
	}
	float a,A ;
	a=3.14*x;
	A=3.14*y;
	printf("Area of disk is %.2f",A-a);//Answer is 75.36
	return 0;
}
    //We consider outer circle's radius is 'R' area is 'A'
	//We consider inner circle's radius is 'r' area is 'a'
