//201009

//Q7

#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("Insert a charactor :");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z')
	{
		printf("Uppercase");
	}
	else if(ch>='a' && ch<='z')
	{
		printf("Lowercase");
	}
	else
	{
		printf("Not a letter");
	}
	return 0;
}
