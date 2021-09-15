//201009

//Q13

#include<stdio.h>
#include<string.h>

int main()
{
	int i;
	int num;
	int first_guess_num=50;
	int guess_num;
	int answer;
	int guess_count=0;
	
	//Start of the game
	printf("Think of a number in 0 to 100. We'll guess the number.\n\n");
	printf("We'll give you few seconds to think\n\n");
	getch();
	
	printf("Is your number is %d ?\n",first_guess_num);//Starting the guessing
	printf("It is correct enter -1\nIt is too high enter 1\nIt is too low enter 0\n");
	guess_count++;
	scanf("%d",&answer);
	
	if(answer != -1)
	{
		//if number is in 0 - 50 range
		if(answer == 1)
		{
			guess_num = first_guess_num/2;
			printf("\nIs your number is %d ?\n",guess_num);
			printf("It is correct enter -1\nIt is too high enter 1\nIt is too low enter 0\n");
			guess_count++;
			scanf("%d",&answer);
			
			//if number is in 0 - 25 range
			if(answer == 1)
			{
				guess_num=first_guess_num/4;
				printf("\nIs your number is %d ?\n",guess_num);
				printf("It is correct enter -1\nIt is too high enter 1\nIt is too low enter 0\n");
			    guess_count++;
			    scanf("%d",&answer);
			    
			    //if number is in 0 - 12 range
			    if(answer == 1)
			    {
			    	for(i = 0; i < 12; i++)
			    	{
			    		guess_num = i;
			    		printf("\nIs your number is %d ?\n",guess_num);
			    		printf("It is correct enter -1\nIt is too low enter 0\n");
			            guess_count++;
			            scanf("%d",&answer);
			            if(answer == -1)
			            {
			            	printf("I won. Computer has been done %d guessing to be won. Thank you!!",guess_count);
			            	break;
						}
						else if(answer == 0)
						{
							continue;
						}
						else
						{
							printf("Invalid answer");
							break;
						}
					}
				}
				//if number is in 12 - 25 range
				else if(answer == 0)
				{
					for(i = 13; i < 25; i++)
			    	{
			    		guess_num = i;
			    		printf("\nIs your number is %d ?\n",guess_num);
			    		printf("It is correct enter -1\nIt is too low enter 0\n");
			            guess_count++;
			            scanf("%d",&answer);
			            if(answer == -1)
			            {
			            	printf("I won. Computer has been done %d guessing to be won. Thank you!!",guess_count);
			            	break;
						}
						else if(answer == 0)
						{
							continue;
						}
						else
						{
							printf("Invalid answer");
							break;
						}
					}
				}
				else if(answer == -1)
				{
					printf("I won. Computer has been done %d guessing to be won. Thank you!!",guess_count);
				}
				else
				{
					printf("Invalid answer");
				}
			}
			//if number is in 26 - 50
			else if(answer == 0)
			{
				guess_num=first_guess_num/2 + first_guess_num/4;
				printf("\nIs your number is %d ?\n",guess_num);
				printf("It is correct enter -1\nIt is too high enter 1\nIt is too low enter 0\n");
			    guess_count++;
			    scanf("%d",&answer);
			    
			    //if number is 25 - 37 range
			    if(answer == 1)
			    {
			    	for(i = 26; i < 37; i++)
			    	{
			    		guess_num = i;
			    		printf("\nIs your number is %d ?\n",guess_num);
			    		printf("It is correct enter -1\nIt is too low enter 0\n");
			            guess_count++;
			            scanf("%d",&answer);
			            if(answer == -1)
			            {
			            	printf("I won. Computer has been done %d guessing to be won. Thank you!!",guess_count);
			            	break;
						}
						else if(answer == 0)
						{
							continue;
						}
						else
						{
							printf("Invalid answer");
							break;
						}
					}
				}
				//if number is 37 - 50 range
				else if(answer == 0)
				{
					for(i = 38; i < 50; i++)
			    	{
			    		guess_num = i;
			    		printf("\nIs your number is %d ?\n",guess_num);
			    		printf("It is correct enter -1\nIt is too low enter 0\n");
			            guess_count++;
			            scanf("%d",&answer);
			            if(answer == -1)
			            {
			            	printf("I won. Computer has been done %d guessing to be won. Thank you!!",guess_count);
			            	break;
						}
						else if(answer == 0)
						{
							continue;
						}
						else
						{
							printf("Invalid answer");
							break;
						}
					}
				}
				else if(answer == -1)
				{
					printf("I won. Computer has been done %d guessing to be won. Thank you!!",guess_count);
				}
				else
				{
					printf("Invalid answer");
				}
			}
			else if(answer == -1)
			{
				printf("I won. Computer has been done %d guessing to be won. Thank you!!",guess_count);
			}
			else
			{
				printf("Invalid answer");
			}	
		}
		//if number is in 50 - 100 range
		else if(answer == 0)
		{
			guess_num = first_guess_num + first_guess_num/2;
			printf("\nIs your number is %d ?\n",guess_num);
			printf("It is correct enter -1\nIt is too high enter 1\nIt is too low enter 0\n");
			guess_count++;
			scanf("%d",&answer);
			
			//if number is in 50 - 75 range
			if(answer == 1)
			{
				guess_num=first_guess_num + first_guess_num/4;
				printf("\nIs your number is %d ?\n",guess_num);
				printf("It is correct enter -1\nIt is too high enter 1\nIt is too low enter 0\n");
			    guess_count++;
			    scanf("%d",&answer);
			    
			    //if number is in 50 - 62 range
			    if(answer == 1)
			    {
			    	for(i = 51; i < 62; i++)
			    	{
			    		guess_num = i;
			    		printf("\nIs your number is %d ?\n",guess_num);
			    		printf("It is correct enter -1\nIt is too low enter 0\n");
			            guess_count++;
			            scanf("%d",&answer);
			            if(answer == -1)
			            {
			            	printf("I won. Computer has been done %d guessing to be won. Thank you!!",guess_count);
			            	break;
						}
						else if(answer == 0)
						{
							continue;
						}
						else
						{
							printf("Invalid answer");
							break;
						}
					}
				}
				//if answer is in 62 - 75 range
				else if(answer == 0)
				{
					for(i = 63; i < 75; i++)
			    	{
			    		guess_num = i;
			    		printf("\nIs your number is %d ?\n",guess_num);
			    		printf("It is correct enter -1\nIt is too low enter 0\n");
			            guess_count++;
			            scanf("%d",&answer);
			            if(answer == -1)
			            {
			            	printf("I won. Computer has been done %d guessing to be won. Thank you!!",guess_count);
			            	break;
						}
						else if(answer == 0)
						{
							continue;
						}
						else
						{
							printf("Invalid answer");
							break;
						}
					}
				}
				else if(answer == -1)
				{
					printf("I won. Computer has been done %d guessing to be won. Thank you!!",guess_count);
				}
				else
				{
					printf("Invalid answer");
				}
			}
			//if number is in 75 - 100 range
			else if(answer == 0)
			{
				guess_num=first_guess_num + 3*first_guess_num/4;
				printf("\nIs your number is %d ?\n",guess_num);
				printf("It is correct enter -1\nIt is too high enter 1\nIt is too low enter 0\n");
			    guess_count++;
			    scanf("%d",&answer);
			    
			    //if number is in 75 - 87 range
			    if(answer == 1)
			    {
			    	for(i = 76; i < 87; i++)
			    	{
			    		guess_num = i;
			    		printf("\nIs your number is %d ?\n",guess_num);
			    		printf("It is correct enter -1\nIt is too low enter 0\n");
			            guess_count++;
			            scanf("%d",&answer);
			            if(answer == -1)
			            {
			            	printf("I won. Computer has been done %d guessing to be won. Thank you!!",guess_count);
			            	break;
						}
						else if(answer == 0)
						{
							continue;
						}
						else
						{
							printf("Invalid answer");
							break;
						}
					}
				}
				//if number is in 87 - 100 range
				else if(answer == 0)
				{
					for(i = 88; i <= 100; i++)
			    	{
			    		guess_num = i;
			    		printf("\nIs your number is %d ?\n",guess_num);
			    		printf("It is correct enter -1\nIt is too low enter 0\n");
			            guess_count++;
			            scanf("%d",&answer);
			            if(answer == -1)
			            {
			            	printf("I won. Computer has been done %d guessing to be won. Thank you!!",guess_count);
			            	break;
						}
						else if(answer == 0)
						{
							continue;
						}
						else
						{
							printf("Invalid answer");
							break;
						}
					}
				}
				else if(answer == -1)
				{
					printf("I won. Computer has been done %d guessing to be won. Thank you!!",guess_count);
				}
				else
				{
					printf("Invalid answer");
				}
			}
			else if(answer == -1)
			{
				printf("I won. Computer has been done %d guessing to be won. Thank you!!",guess_count);
			}
			else
			{
				printf("Invalid answer");
			}
		}
		else
		{
			printf("Invalid answer");
		}
	}
	else
	{
		printf("I won. Computer has been done %d guessing to be won. Thank you!!",guess_count);
	}
}
