//19000091

//Q3

#include <stdio.h>
#include <stdlib.h>

struct household
{
  int IDno;
  int income;
  int no_mem; 
}house[6];

int i,sum,median;
float avg;


int Totalmembers(){
	for(i=0;i<6;i++){
	    sum+=house[i].no_mem;	
	}
}

int HouseholdAvgIncome(){
	int total;
	for(i=0;i<6;i++){
	    total+=house[i].income;	
	}
	avg=total/5;
}

int Median(){
	int temp=0;
	int x=sum/2;
	for(i=0;i<6;i++){
	    temp+=house[i].no_mem;
		if(temp<x && (temp+house[i+1].no_mem>x || temp+house[i+1].no_mem==x)){
			median=house[i+1].income;
		}
	}
}

int main()
{
	int x;
    FILE * fp;
    fp = fopen("readme.txt","r");

    if(fp == NULL){
        printf("Error in reading file\n");
    }
    printf("________________________________________________________________\n");
	printf("ID number  |  Annual Income ($) |  No of members|  (x i-1 +xi)\n");
    printf("________________________________________________________________\n");
    
    for(i=0;i<5;i++){
        fscanf(fp,"%d %d %d\n",&house[i].IDno,&house[i].income,&house[i].no_mem);
        x+=house[i].no_mem;
        printf("%d\t   |  %d\t\t|  %d\t        |  %d\t\n",house[i].IDno,house[i].income,house[i].no_mem,x);
        printf("________________________________________________________________\n");
    }
    Totalmembers();
    printf("Total\t   |  \t\t\t|  %d\t        |  \t\n",sum);
    printf("________________________________________________________________\n");
    printf("\n\n");
    
    printf("ID number\tAnnual Income ($)\tNo of members\n\n");
    
    for(i=0;i<5;i++){
        printf("%d\t\t%d\t\t\t%d\n",house[i].IDno,house[i].income,house[i].no_mem);
    }
    
    HouseholdAvgIncome();
    Median();
    
    printf("\nAverage household Income ($)- %.2f\n\n",avg);
    printf("Total number of members in the town- %d\n\n",sum);
    printf("Median Annual Income ($)- %d\n\n",median);

    fclose(fp);
    return 0;
}
