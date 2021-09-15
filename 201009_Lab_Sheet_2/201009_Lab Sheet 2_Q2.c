//201009

//Q2

#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	a=1;
	printf("a = %d\n",a);//answer is 1
	printf("a++ = %d\n",a++);//answer is 1
	printf("++a = %d\n",++a);//answer is 3
	printf("a-- = %d\n",a--);//answer is 3
	printf("--a = %d\n",--a);//answer is 1
	return 0;
}

/*In the postfix increment operation process,the integer increse after the operation assigns(after the semiclone)
  but in the prefix increment opeartion process,the integer decreses before the operation assigns(before the semiclone)
  In the decrement opearation process we can explain that as the increment operation process  */


