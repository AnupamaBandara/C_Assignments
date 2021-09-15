//19000091

//Q3

#include<stdio.h>
#include<stdlib.h>

struct student
{
	int studentID;
	char name[20];
	float  chemistry_marks, maths_marks,physics_marks,percentage; 
	
}student[5];

int main()
{
	int i;
	printf("Enter the students details\n\n");
	
	for(i=0;i<5;i++)
	{
		printf("\nEnetr the student %d detail:\n\n",i+1);
		printf("Student ID no (with 4 numbers):");
		scanf("%d",&student[i].studentID);
		
		printf("Name of student:\n");
		scanf("%s",&student[i].name);
		
		printf("Chemistry Marks (Out of 100):\n");
		scanf("%f",&student[i].chemistry_marks);		
		
		printf("Maths Marks (Out of 100):\n");
		scanf("%f",&student[i].maths_marks);
		
		printf("Physics marks (Out of 100):\n");
		scanf("%f",&student[i].physics_marks);	
	}
	for(i=0;i<5;i++)
	{
		printf("\n\nPercentage of student %d\n",i+1);
		student[i].percentage=(student[i].maths_marks+student[i].physics_marks+student[i].chemistry_marks)/3;
		printf("%f\n\n",student[i].percentage);	
	}
}
