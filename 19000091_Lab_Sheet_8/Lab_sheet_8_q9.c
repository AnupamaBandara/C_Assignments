//19000091

//Q9

#include<stdio.h>
#include<stdlib.h>
struct employee{
char name[20];
int salary;
int hours;
}employee[20];


void salary(struct employee employee[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
	
	if(employee[i].hours<8)
	{
		printf("\nName:%s",employee[i].name);
	printf("\tTotal Salary:Rs.%d",employee[i].salary);
	}
else if(employee[i].hours>=8 && employee[i].hours<10)
{
	printf("\nName:%s",employee[i].name);
	printf("\tTotal Salary:Rs.%d",employee[i].salary+500);
	
	}	
else if(employee[i].hours>=10 && employee[i].hours<12)
{
	printf("\nName:%s",employee[i].name);
	printf(" \tTotal Salary:Rs.%d",employee[i].salary+1000);
}
	
	else if(employee[i].hours>=12)
{
	printf("\nName:%s",employee[i].name);
	printf("\tTotal Salary:Rs.%d",employee[i].salary+1500);
}
}
}

	
int main()
{
	int n,i;
	
	printf("How many employees in the company\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n Enter the name of employee:");
		scanf("%s",employee[i].name);
	    
		printf(" Enter the salary:Rs");
		scanf("%d",&employee[i].salary);
		
		printf(" Enter the hours he/she works per day:");
		scanf("%d",&employee[i].hours);
	}
	salary(employee,n);
}
