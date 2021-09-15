//19000091

//Q1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student
{
	
int Id;
char name[100];
int age;
char address[100];
float marks;	
}student[10];

void display()
{
	int i;
	for(i=0;i<5;i++)
	{
	printf("\n\nStudents detail\n\n");
	printf("\t Student %d",i+1);
	printf("\nStudent ID:%d",student[i].Id);
	printf("\nStudent Name:%s",student[i].name);
	printf("\nAge:%d",student[i].age);
	printf("\nAddress:%s",student[i].address);
	printf("\nMarks:%.1f",student[i].marks);	
		
		
	}
	
}
void main()

{  
int i;
printf("Enetr the following details of students\n");
 for(i=0;i<5;i++)
	{
		printf("\n student %d detail:\n\n",i+1);
		printf("ID no (with ten number):");
		scanf("%d",&student[i].Id);
		
		printf("Name (represent space with '_' ):");
		scanf("%s",&student[i].name);
		
		printf("Address (represent space with '_' ):");
		scanf("%s",&student[i].address);	
		printf("Age:");
		scanf("%d",&student[i].age);	
		
		printf("Marks:");
		scanf("%f",&student[i].marks);
		
	
	}
		
		display();
		
}

