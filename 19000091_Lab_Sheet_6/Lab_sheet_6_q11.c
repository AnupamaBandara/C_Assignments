//19000091

//Q11

#include <stdio.h> 

void sort(int n, int* ptr) 
{ 
	int i, j, tmp; 
	for (i = 0; i < n; i++) { 

		for (j = i + 1; j < n; j++) { 

			if (*(ptr + j) < *(ptr + i)) { 

				tmp = *(ptr + i); 
				*(ptr + i) = *(ptr + j); 
				*(ptr + j) = tmp; 
			} 
		} 
	} 

	for (i = 0; i < n; i++) 
		printf("%d ", *(ptr + i)); 
} 

int main() 
{ 
	int num,i;
	int arr[100];
	int *p=arr;
	printf("Enter the number of element in the array :");
	scanf("%d",&num);
	printf("Enter the elements of the array :\n");
	for(i=0;i<num;i++)
	{
		scanf("%d",p);
		p++;
	 } 

	sort(num, arr); 

	return 0; 
} 

