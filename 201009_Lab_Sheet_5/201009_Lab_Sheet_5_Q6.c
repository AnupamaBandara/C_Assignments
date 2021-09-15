//201009

//Q6

#include <stdio.h> 
  
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
void selectionSort(int arr[], int n)
{
    int i, j, max_idx;
    for (i = n - 1; i >0; i--)

    {
        max_idx = i;
        for (j = i - 1; j >= 0; j--) 
            if (arr[j] > arr[max_idx]) 
                max_idx = j;

        swap(&arr[max_idx], &arr[i]); 
    }
}

void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
  
int main() 
{ 
    int arr[10]; 
    int i;
    printf("Enter 10 Integers\n");
    for(i=0; i<10; i++)
	{
        scanf("%d", &arr[i]);
    }
    int n = sizeof(arr)/sizeof(arr[0]); 
    selectionSort(arr, n); 
    printf("Sorted array: \n"); 
    printArray(arr, n); 
    return 0; 
}
