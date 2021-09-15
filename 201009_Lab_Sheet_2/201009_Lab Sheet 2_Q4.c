//201009

//Q4

#include<stdio.h>
#include<conio.h>
void main()
{
	char C='B';
	int i,j,k;
	i=3; j=3; k=3;
	double x,y;
	x=0.0; y=2.3;
	
	printf((i&&j&&k) ? "Answer is True\n" : "Answer is False\n" );//Answer is True
	printf((x||i&&j-3) ? "Answer is True\n" : "Answer is False\n" );//Answer is False
	printf((i<j&&x<y) ? "Answer is True\n" : "Answer is False\n" );//Answer is False
	printf((i<j||x<y) ? "Answer is True\n" : "Answer is False\n" );//Answer is True
	printf(('A'<=C&&C<='Z') ? "Answer is True\n" : "Answer is False\n" );//Answer is True
	printf((C-1=='A'||C+1=='Z') ? "Answer is True\n" : "Answer is False\n" );//Answer is True
	
}
