#include <stdio.h>
int findfactorial(int,int*);
int main()
{
    int factorial;
    int number;
	
		printf(" Input a number : ");
		scanf("%d",&number);		 

         findfactorial(number,&factorial);
         printf(" The Factorial of %d is : %d \n\n",number,factorial);
         return 0;
        }

int findfactorial(int n,int *f)
		{
        int i;

       *f =1;
       for(i=1;i<=n;i++)
       *f=*f*i;
       return 0;
       }

