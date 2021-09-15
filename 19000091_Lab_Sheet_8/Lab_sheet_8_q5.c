//19000091

//Q5

#include<stdio.h>
#include<stdlib.h>

struct student{
	
	int studentID,age;
	char name[30];
}student[20];


void evenID(int n)
{
	int i;
	printf("\nStudents having even id numbers\n");
	for(i=0;i<n;i++)
	{
	if(student[i].studentID%2==0)
	{
		printf("%s\n",student[i].name);
		
		}	
    }	
}


void age(int n)
{
	int i;
	printf("\nStudents who is 14 years old\n");
	
	for(i=0;i<n;i++)
	{
		if(student[i].age==14)
		{
			printf("%s\n",student[i].name);
		}
	}
}


void searchid(int n)
{
	int Num,i,count=0;
	
	printf("\nEnter the id to search (include 4 numbers) \n");
	scanf("%d",&Num);
	
	for(i=0;i<n;i++)
	{
		if(student[i].studentID==Num)
		{
		printf("Student's name is %s\n",student[i].name);
		printf("Student age is %d",student[i].age);
		count++;
		}
    }
    if(count==0){
    printf("There is no matching Student ID number");}
}


void main()
{
	int n,i,id;
	printf("\n Enter the number of student in the class (between 10 and 20) : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\nEnetr the student %d detail:\n",i+1);
		printf("Student's ID no (with 4 numbers):");
		scanf("%d",&student[i].studentID);
		printf("First Name of the student:");
		scanf("%s",&student[i].name);
		printf("Age of the student (between 11-14):");
		scanf("%d",&student[i].age);		
	}
	
    age(n);
    evenID(n);
    searchid( n);
}

