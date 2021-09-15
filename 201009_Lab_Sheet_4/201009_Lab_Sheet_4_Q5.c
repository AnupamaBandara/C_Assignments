//201009

//Q5

#include<stdio.h>
int main()
{
	int choice;
	while(choice==1 || choice==2 || choice==3)
	{
	printf("\nWelcome to the Game\n");
	printf("Enter your choice(by using given numbers) : ");
	printf("\n1.Rock\n");
	printf("2.Paper\n");
	printf("3.Scissor\n");
	scanf("%d",&choice);
	
	int computer=rand()%3+1;
	if(choice == 1)
	{
		if(computer==1)
		{
			printf("Game Draw\n");
		}
		else if(computer==2)
		{
			printf("Computer wins\nPaper covers Rock\n");
		}
		else if(computer==3)
		{
			printf("You win\nRock break Scissor\n");
		}
	}
	if(choice==2)
	{
		if(computer==1)
		{
			printf("You win\nPaper covers Rock\n");
		}
		else if(computer==2)
		{
			printf("Game Draw\n");
		}
		else if(computer==3)
		{
			printf("Computer wins\nScissor cuts Paper\n");
		}
	}
	if(choice==3)
	{
		if(computer==1)
		{
			printf("Computer wins\nRock break Scissor\n");
		}
		else if(computer==2)
		{
			printf("You win\nScissor cuts Paper\n");
		}
		else if(computer==3)
		{
			printf("Game Draw\n");
		}
	}
    }
}
