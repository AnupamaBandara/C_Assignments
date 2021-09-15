//19000091

//Q4

#include<stdio.h>
#include<stdlib.h>

struct complex{
	
	int real,imaginary;
	
} A[3];


int addition()
{
    A[3].real=A[1].real+A[2].real;
	A[3].imaginary=A[1].imaginary+A[2].imaginary;
	
	if(A[3].imaginary>0){
		printf("\n\nAddition of the above complex number = %d+%di",A[3].real,A[3].imaginary);
	}	
	else
		printf("\n\nAddition of the above complex number = %d%di",A[3].real,A[3].imaginary);
}


int subustraction(){
	
	A[3].real=A[1].real-A[2].real;
	A[3].imaginary=A[1].imaginary-A[2].imaginary;
	
	if(A[3].imaginary>0){
		printf("\n\nSubstraction of the above complex numbers = %d+%di",A[3].real,A[3].imaginary);
	}	
	else
		printf("\n\nSubstraction of the above complex numbers = %d%di",A[3].real,A[3].imaginary);
	
	
	
	
}
int multiplication()
{
	A[3].real = A[1].real*A[2].real - A[2].imaginary*A[2].imaginary;
      A[3].imaginary= A[1].imaginary*A[2].real + A[1].real*A[2].imaginary;

      if (A[3].imaginary >= 0)
        printf("\n\nMultiplication of the complex numbers = %d+%di\n", A[3].real,A[3].imaginary);
      else
        printf("\n\nMultiplication of the complex numbers = %d%di\n", A[3].real,A[3].imaginary);
	
}

void main()
{
	printf("Enter the 1st complex number\n");
	printf("Real part:");
	scanf("%d",&A[1].real);
	printf("Imaginary part:");
	scanf("%d",&A[1].imaginary);
		
	printf("\nEnter the 2nd complex number\n");
	printf("Real part:");
	scanf("%d",&A[2].real);
	printf("Imaginary part:");
	scanf("%d",&A[2].imaginary);
	
	addition();
	
	subustraction();
	
	multiplication();
}
