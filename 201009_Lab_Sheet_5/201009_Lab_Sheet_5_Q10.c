//201009

//Q10

#include<stdio.h>
#define max 20
int main()
{

	int i,j;
 char array[max];
	
	printf("Enter the word\n");
	scanf("%s",&array);
	
int	count=0;
	 while (array[count] != '\0') {
    count++;}
    
    if(count<3)
{
	printf("%s",array);
	}    
    else 
{
		if (( array[count-1]=='g') && (array[count-2]=='n')&& (array[count-3]=='i'))
	{
		array[count]='l';
		array[count+1]='y';
	
          printf("%s", array);
	
			
		}
     else
  {
  		array[count]='i';
		array[count+1]='n';
		array[count+2]='g';
	
	  	
		  printf("%s",array);
	
}
	 }
	}
