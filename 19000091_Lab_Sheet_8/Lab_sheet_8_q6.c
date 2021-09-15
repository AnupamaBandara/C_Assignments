//19000091

//Q6

#include<stdio.h>
struct bank
{
     int account_no;
     char name[20];
     int balance;
}b[20];


void check(struct bank b[],int n)
{
     int i,count=0;
     printf("\nCustomer Details whose Balance < 200 Rs. \n\n");
     for(i=0;i<n;i++)
     {
          if(b[i].balance<200)
          {
               printf("Account Number : %d\n",b[i].account_no);
               printf("Name           : %s\n",b[i].name);
               printf("Balance        : %d\n",b[i].balance);
               count++;
          }
     }
     if(count==0){
     printf("\nThere are no customers who have balance < 200 ");}
}


void add(struct bank b[],int n)
{
	int i,count=0;
     printf("\n\nCustomer Details whose Balance > 1000 with total Balance Rs. \n");
     for(i=0;i<n;i++)
     {
          if(b[i].balance>=1000)
          {
               printf("Account Number : %d\n",b[i].account_no);
               printf("Name           : %s\n",b[i].name);
               printf("Balance        : %d\n",b[i].balance+100);
               count++;
          }
     }
	if(count==0)
	{
		printf("There are no customers who have balance > 1000 \n");
	}
}


int main()
{
	
	int n;
	printf("Number of customers in bank : ");
	scanf("%d",&n);
     int i;
     for(i=0;i<n;i++)
     {
          printf("\nEnter Details of Customer %d\n\n",i+1);
          printf("Enter Account Number (with 8 numbers) : ");
          scanf("%d",&b[i].account_no);
          printf("Enter Name           : ");
          scanf("%s",b[i].name);
          printf("Enter Balance        : ");
          scanf("%d",&b[i].balance);
          printf("\n");
     }
     check(b,n);
	 add(b,n) ;     
     return 0;
}
