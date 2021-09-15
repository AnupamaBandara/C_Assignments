//201009

//Q9

#include<stdio.h>

int main()
{
	int x,y,z;
	int count=0;
	
	printf("Enter the first number in given range x=");
	scanf("%d",&x);
	printf("Enter the last number in given range x=");
	scanf("%d",&y);
	
	while(x<=y)
	{
		z=x;
		  while(z!=0)
		  {
		  	if(z%10==2)
		  	{
			  count ++;
			  }
		  	z/=10;
		  }
		x++;}
	
	
	printf("the number 2s in given range is %d",count);
	return 0;
}
