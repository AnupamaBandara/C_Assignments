//201009

//Q9

#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	int con_count = 0;//consecutive '1' count as con_count
	int max_count = 0;//maximum consecutive '1' count as max_count
	char num_string[100];//number string with 0's and 1's
	
	printf("Enter string of 0's and 1's : ");
	scanf("%s",&num_string);
	
	while(i<strlen(num_string))
	{
		if(num_string[i] == '1')
		{
			con_count++;
		}
		else
		{
			if(con_count > max_count)
			{
				max_count=con_count;
			}
			else
			{
				max_count=max_count;
			}
			con_count=0;
		}
		i++;
	 } 
	
	if(con_count > max_count)
			{
				max_count=con_count;
			}
			else
			{
				max_count=max_count;
			}
	
	printf("Maximun consecutive 1's is : %d",max_count);		 
}
