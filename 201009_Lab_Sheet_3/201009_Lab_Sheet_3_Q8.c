//201009

//Q8

#include<stdio.h>
#include<conio.h>
int main()
{
	int x,i;
	i=1;
	
	printf("Enter the number : ");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		if(x%i==0){
			printf("%d is divible by %d\n",x,i);
		}
	}
	return 0;
}
