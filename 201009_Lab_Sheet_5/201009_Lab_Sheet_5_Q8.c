//201009

//Q8

#include <stdio.h>

int dig_max(int);

void num_max(int * , int * );

int main() {
    
    int arr[5], sort_arr[5];
    
    int n = 6,i,j,z;
    
    int temp,a,b = 0;
    
    printf("Enter 5 non negative numbers with a space: ");
	// Inserting 5 positive integers with space
	scanf("%d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
	
    
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1; j++) {
            if (dig_max(arr[j]) < dig_max(arr[j + 1])) //comparing entered numbers' left most digit
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            } //swapping done between arr[i] &amp;amp; arr[i+1]
            else if (dig_max(arr[j]) == dig_max(arr[j + 1])) //comparing entered numbers' left most digit
            {
                a = arr[j];
                b = arr[j + 1];
                num_max( & a, & b);
                arr[j] = a;
                arr[j + 1] = b;
            } else {}
        }
    }
    printf( "\nThe largest number formed combining entered 5 non negative numbers is: ");
    for (z = 0; z < n-1; z++)
        printf("%d",arr[z]);
        
    printf("\n");
    
    return 0;
}
int dig_max(int x) //this function returns left most digit of argument
    {
        int n = 0;
        while (x > 0) {
            n = x % 10;
            x = x / 10;
        }
        return (n);
    }
void num_max(int * m, int * n) {
    int s = 1, k, c = 0, num1, num2, p, q;
    p = * m;
    q = * n;
    k = q;
    for (; k > 0; c++) {
        k = k / 10;
    } //counting no.of digit in integer number
    for (; c > 0; c--) {
        s = s * 10;
    }
    num1 = p * s + q; //number formed combining two array elements
    k = p;
    c = 0;
    for (; k > 0; c++) {
        k = k / 10;
    } //counting no. of digit in integer number
    s = 1;
    for (; c > 0; c--) {
        s = s * 10;
    }
    num2 = q * s + p; //number formed combining two array elemnets
    if (num1 > num2) //two formed numbers get compared
    { * m = p; * n = q;
    } else { * m = q; * n = p; //swapping done between two elements of array
    }
}
