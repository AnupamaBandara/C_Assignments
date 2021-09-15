//201009

//Q7

#include<stdio.h>
int main(){
	int i,n = 10,j;
	float value;
	float median=0;
	float a[10] = {6.0, 4.4, 1.9, 2.9, 3.4, 2.9, 3.5, 2.3, 7.5, 4.8};
	for(i= 0; i< 10; i++) {
	    printf("%.2f  ", a[i]);
	}
	printf("\n\n");
	for(i=0;i<n-1;i++)
	{
	    for(j=0;j<n-i-1;j++)
	    {
	        if(a[j]>a[j+1])
	        {
	            value=a[j+1];
	            a[j+1]=a[j];
	            a[j]=value;
	        }
	    }
	}
	for(i= 0; i< 10; i++) {
	    printf("%.2f  ", a[i]);
	}
}
