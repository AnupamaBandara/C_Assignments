//201009

//Q5

#include <stdio.h>

void distinct_elements(int a[]);
int main()
{
    int  i, arr[10];
    printf("Enter 10 elements\n");
    for(i=0; i<10; i++){
        scanf("%d", &arr[i]);
    }
    distinct_elements(arr);
    return 0;
}

void distinct_elements(int a[]){
    int i, j;
    int C=0;
    printf("\nThe distinct elements are ");
    for (i=0; i<10; i++){
        for (j=0; j<i; j++){
            if (a[i] == a[j]){
				break;
			}	
        }
        if (i == j){
			C++; 
            printf("%d ", a[i]);
		}    
    }
    printf("\nThere are %d distinct elements", C);
}

