//19000091

//Q1

#include<stdio.h>

struct student{
	char reg_no[20];
	char name[50];
	int age;
}stu[50];

int main()
{
	
int n,i;	
printf("Enter the number of student\n");
scanf("%d",&n);
	
	 FILE *fp;
      fp=fopen("student.txt","w");
		fprintf(fp,"StRe_no\t St_Name\t St_age\n");
	
for(i=0;i<n;i++)	
{
	printf("\nEnter reg no of student %d:",i+1);
	scanf("%s",stu[i].reg_no);
	printf("\nEnter the name of student %d:",i+1);
	scanf("%s",stu[i].name);
	printf("\nenter the age:");
	scanf("%d",&stu[i].age);	
	
	 fprintf(fp,"%s\t %s \t%d\t\n",stu[i].reg_no,stu[i].name,stu[i].age);
      printf("\nRecord stored in file...");
	
	
}
	fclose(fp);
	
	
	
	return 0;
}
