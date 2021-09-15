//19000091

//Q5

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num,i;
	float *ptr;
	
	printf("Enter the total number of elements : ");
	scanf("%d",&num);
	
	ptr=(float *)calloc(num,sizeof(float));
	
	if(ptr == NULL)
	{
		printf("Error! Out of memory. Memory not allocated.");
		exit(0);
	}
	
	else{
		for(i=0; i<num; i++)
		{
			printf("Enter Number %d :",i+1);
			scanf("%f",ptr + i);
		}
		
		for(i=1; i<num; i++)
		{
			if(*ptr<*(ptr+i))
			*ptr=*(ptr+i);
		}
	}
	printf("The largest element is : %.2f\n\n",*ptr);
	return 0;
}
