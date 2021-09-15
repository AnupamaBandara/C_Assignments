//19000091

//Q4

#include<stdio.h>

#define max 100 // maximum array size 

int main()
{
	int arr[max];
	int n,i,search;
	int *p=arr;
	
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	
	printf("Enter the elements of the array : \n");
	for(i=0; i<n; i++)
	{
		scanf("%d",p);
		p++;
	}
	p=arr;
	
	printf("Array elements are   ");
	for(i=0; i<n; i++)
	{
		printf("%d   ",*p);
		p++;
	}
	
	int search(int * arr, int n, int search)
	{
		int * arrEnd = (arr + n-1);
		while(arr<=arrEnd && *arr != search)arr+;
		
		if(arr <= arrEnd)
		return (arrEnd - arr) / sizeof(int)+1;
	}
	
	return 0;
}
