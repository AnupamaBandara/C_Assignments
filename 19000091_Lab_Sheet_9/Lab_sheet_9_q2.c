//19000091

//Q2

#include <stdio.h>
#include <stdlib.h>

struct data
{
    char EmpName[25];
    int EmpNo;
    float BasicSalary;
    int OT;
}emp[4];

float net_salary[4]; 
float OT_Amount[4];
float sum;
int i;

int TotalSalary(){
	for(i=0;i<4;i++){
	    OT_Amount[i]=emp[i].OT*15;
	    net_salary[i]=emp[i].BasicSalary+emp[i].BasicSalary*0.35+OT_Amount[i];
	    sum+=net_salary[i];	
	}
}

int main()
{

    FILE * fp;
    fp = fopen("data.txt","r");

    if(fp == NULL){
        printf("Error in reading file\n");
    }
	printf("Employee Name\tEmployee No\tBasic Salary\tOT Hours\n");
	
    for(i=0;i<4;i++){
        fscanf(fp,"%s %d %f %d\n",emp[i].EmpName,&emp[i].EmpNo,&emp[i].BasicSalary,&emp[i].OT);
        printf("%s\t\t00%d\t\t%.2f\t%d\n",emp[i].EmpName,emp[i].EmpNo,emp[i].BasicSalary,emp[i].OT);
    }
    
    printf("\n\n");
    
    TotalSalary();

    printf("Employee No\tBasic salary(Rs)\tOT Amount\tNet Salary\n");
    
    for(i=0;i<4;i++){

    printf("00%d\t\t%.2f\t\t%.2f\t\t%.2f\n",emp[i].EmpNo,emp[i].BasicSalary,OT_Amount[i],net_salary[i]);}
    printf("\n");
    printf("Total amount of money : %.2f",sum);

    fclose(fp);
    return 0;
}
