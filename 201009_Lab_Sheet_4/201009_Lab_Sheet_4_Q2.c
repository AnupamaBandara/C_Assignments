//201162

//Q2

#include<stdio.h>
int count();
int i, counts=0;
void main()
{
	int no;
	printf("Enter a number : ");
	scanf("%d",&no);
	for(i=0;i<no;i++)
	{
		count();
	}
	printf("%d",count());
}
int count()
{
	if(i%9==0)
	counts=0;
	else
	counts++;
	return counts;
}
