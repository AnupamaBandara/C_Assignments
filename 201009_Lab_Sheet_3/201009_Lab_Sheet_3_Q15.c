//201009

//Q15

#include<stdio.h>
#include<math.h>
void main()
{
	int A,B,C;
	float disc,deno,x1,x2;
	
	printf("Enter the number A : ");
	scanf("%d",&A);
	printf("Enter the number B : ");
	scanf("%d",&B);
	printf("Enter the number C : ");
	scanf("%d",&C);
	
	disc=(B*B)-(4*A*C);
	deno=2*A;
	
	if(disc>0)
	{
		printf("THE ROOTS ARE REAL ROOTS\n");
		x1=(-B/deno)+(sqrt(disc)/deno);
		x2=(-B/deno)-(sqrt(disc)/deno);
		printf("Roots are %f , %f ",x1,x2);
	}
	else if(disc==0)
	{
		printf("THE ROOTS ARE REPEATED ROOTS\n");
		x1=(-B/deno);
		printf("Roots are %f , %f",x1,x1);
	}
	else
	{
		printf("THE ROOTS ARE IMAGINARY ROOTS\n");
	}
}
