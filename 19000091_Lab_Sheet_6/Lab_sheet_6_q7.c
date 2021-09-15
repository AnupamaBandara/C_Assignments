#include <stdio.h>
int swap(int *a,int *b,int *c);
int main()
{
    int n1,n2,n3;
	
    printf(" Input the value of 1st element : ");
    scanf("%d",&n1);
	printf(" Input the value of 2nd element : ");
    scanf("%d",&n2);
	printf(" Input the value of 3rd element : ");
    scanf("%d",&n3);
	
	
    printf("\n The value before swapping are :\n");
    printf(" element 1 = %d\n element 2 = %d\n element 3 = %d\n",n1,n2,n3);
    swap(&n1,&n2,&n3);
    printf("\n The value after swapping are :\n");
    printf(" element 1 = %d\n element 2 = %d\n element 3 = %d\n\n",n1,n2,n3);
    return 0;
}
int swap(int *a,int *b,int *c)
{
    int tmp;
    tmp=*b;
    *b=*a;
    *a=*c;
    *c=tmp;
    return 0;
}

