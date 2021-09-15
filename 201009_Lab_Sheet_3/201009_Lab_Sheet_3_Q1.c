//201009

//Q1.a)

#include<stdio.h>
void main()
{
	int a, b;
	printf("Pattern (a)\n");
	for(a=1;a<=6;a++)
	{
		for(b=1;b<=10;b++)
		{
			printf("*");
		}
		printf("\n");
	}
	
//Q1.b)
	printf("\nPattern (b)\n");
		for(a=1;a<=6;a++)
	{
		for(b=a;b<6;b++)
		{
			printf(" ");
		}
		for(b=1;b<=a;b++)
		{
			printf("*");
		}
		printf("\n");
	} 

//Q1.c)
	printf("\nPattern (c)\n");
	for(a=1;a<=6;a++)
    {
    	for(b=1;b<=6;b++)
    	{
    		if(a==1 || b==1 || a==b || a==6 || b==6)
    		{
    			printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	
//Q1.d)
 	printf("\nPattern (d)\n");
 	for(a=1;a<=6;a++)
    {
    	for(b=1;b<=10;b++)
    	{
    		if(a==1 || b==1|| a==6 || b==10)
    		{
    			printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	
//Q1.e)
	printf("\npattern (e)\n");
	for(a=1;a<=6;a++)
    {
    	for(b=a;b<=6;b++)
    	{
    		printf("*");
		}
		printf("\n");
	}
	
//Q1.f)
	printf("\nPattern (f)\n");
	for(a=1;a<=6;a++)
    {
    	for(b=1;b<=a;b++)
    	{
    		printf("*");
		}
		printf("\n");
	}
}
