//201009

//Q9

#include<stdio.h>
 int SumOfSqrs()
{
    int n,i,sum;
    sum=0;
    printf("Enter Minimum Value:");
    scanf("%d",&i);
    printf("Enter Maximum Value:");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i*i;
        ++i;
    }
    printf("Sum of squares of numbers is :%d ",sum);
}
int main(){
	SumOfSqrs();
}
