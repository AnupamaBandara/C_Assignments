//201009

//Q3

#include<stdio.h>
#include<conio.h>
int main()
{
	int m,n,o,p,a,b,c;
	m=40; n=20; o=20; p=30;
	a=(int)m>n&&m!=0;
	printf("result is %d\n",a);
	b=(int)o>p||p!=20;
	printf("result is %d\n",b);
	c=(int)!(m>n&&m!=0);
	printf("result is %d",c);
	return 0;
}

/* 3) I.Result is 1
   3) II.Result is 1
   3) III.Result is 0*/
