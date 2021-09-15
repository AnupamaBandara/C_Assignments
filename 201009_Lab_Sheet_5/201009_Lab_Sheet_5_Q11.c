//201009

//Q11

#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>
# define max 100
int main()
{
	int i,j,count,count1,num,y,flag=0,flag1=0,flag2=0,flag3=0,flag4=0;
	char id[max],a[2],array[10];	
	char x ='/';
	
	printf("Enter your Registation No:");
	scanf("%s",&id);
	
	printf("\n\n\t\t***************VALIDATING REGISTRATION NUMBER : %s***************\n\n",id);
	
	count = 0; 
	count1=0;
  while (id[count] != '\0') {
    count++;}
    
    for(i=0;i<count;i++)
    {
    	if (id[i]==x)
    	 count1++;
		 }
	if(count==8)
	{printf("Condition 01:There are exacly 8 characters\n \t First condition satisfies\n");
	flag=1;}
	else
		printf("Condition 01:There are exacly 8 characters\n\tFirst condition is not satisfy\n\t There is not 8 characters");
 
 	
 if(id[0]=='S')
 	{	printf("Condition 02:First letter should be 'S'\n\tSecond condition is satisfy\n");
	 flag1=1;
 }
else
printf("Condition 02:First letter should be 'S'\n\tSecond  condition is not satisfy\n\tFirst letter is not 'S'\n ");
	
	if(count1==2)
	{	printf("Condition 03:There should be exactly two '/'s \n \t Third condition satisfies\n"); 
	flag2=1;}
 	 
 	 else
 	   printf("Condition 03:There should be exactly two '/'s\n\tThird condition is not satisfy\n\t there is no two '/' 's \n ");
 	 
 	 
    if( isdigit(id[2]) != 0 && isdigit(id[3]) != 0 && (id[1]=='/')&& (id[4]=='/'))
{	printf("Condition 04:The year is represented by two digits in between two '/'s \n \t Forth condition satisfies\n");
  flag3=1;}
  else
  printf("Condition 04:The year is represented by two digits in between two '/'s\n\tForth condition is not satisfy\n \tThe year is not represented by two digits in between two '/'s\n");
	
if(isdigit(id[count-1]) != 0 && isdigit(id[count-2]) != 0 && isdigit(id[count-3]) != 0 && (id[4]=='/'))
{printf("Condition 05:Last three digits immetiadtly after the second slash represents the student number '/'s \n \t Fifth condition satisfies\n");
flag4=1;}
		 else
		 printf("Condition 05:Last three digits immetiadtly after the second slash represents the student number '/'s\n\tFifth condition is not satisfy\n\tLast three digits immetiadtly after the second slash not represents the student number '/'s\n ");
if(flag==1 && flag1==1 && flag2==1 && flag3==1 &&  flag4==1 )
{

	printf("\n\n\t\t\t***************Valid Registation number***************");
}

	 else
	 {
	 
	 		printf("\n\n\t\t\t****************Invalid Registation Number***************");
	 }
 
	
}
