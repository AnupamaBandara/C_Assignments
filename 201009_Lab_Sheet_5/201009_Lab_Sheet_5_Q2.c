//201009 

//Q2 

#include<stdio.h>
 int M1[3][3] = {{3,5,7},{1,6,5},{4,9,8}};
 int M2[3][3] = {{6,0,2},{4,7,1},{7,2,1}};
 int sum[3][3];
 int sub[3][3];
 int mul[3][3];
 
 int Addition(){
 	int i,j;
 	printf("Sum of 2 matrixes\n");
 	for(i=0;i<3;i++)
 	{
 		for(j=0;j<3;j++)
 	    {
 			sum[i][j] = M1[i][j]+M2[i][j];
 			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
 }
 
 int Substraction(){
 	int i,j;
 	printf("Difference of 2 matrixes\n"); 
 	for(i=0;i<3;i++)
 	{
 		for(j=0;j<3;j++)
 		{
 			sub[i][j]=M1[i][j]-M2[i][j];
 			printf("%d\t",sub[i][j]);
		 }
		 printf("\n");
	 }
 }
 
 int Multiplication(){
 	int i,j;
 	
 	mul[0][0] = M1[0][0]*M2[0][0]+M1[0][1]*M2[1][0]+M1[0][2]*M2[2][0];
 	mul[0][1] = M1[0][0]*M2[0][1]+M1[0][1]*M2[1][1]+M1[0][2]*M2[2][1];
	mul[0][2] = M1[0][0]*M2[0][2]+M1[0][1]*M2[1][2]+M1[0][2]*M2[2][2];
	
	mul[1][0] = M1[1][0]*M2[0][0]+M1[1][1]*M2[1][0]+M1[1][2]*M2[2][0];
	mul[1][1] = M1[1][0]*M2[0][1]+M1[1][1]*M2[1][1]+M1[1][2]*M2[2][1];
	mul[1][2] = M1[1][0]*M2[0][2]+M1[1][1]*M2[1][2]+M1[1][2]*M2[2][2];
	
	mul[2][0] = M1[2][0]*M2[0][0]+M1[2][1]*M2[1][0]+M1[2][2]*M2[2][0];
	mul[2][1] = M1[2][0]*M2[0][1]+M1[2][1]*M2[1][1]+M1[2][2]*M2[2][1];
	mul[2][2] = M1[2][0]*M2[0][2]+M1[2][1]*M2[1][2]+M1[2][2]*M2[2][2];
	
	printf("Muliplication of 2 matrixes\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	  }  
 }
 
 int main()
 {
    Addition();
    printf("\n");
    Substraction();
    printf("\n");
    Multiplication();
 }
