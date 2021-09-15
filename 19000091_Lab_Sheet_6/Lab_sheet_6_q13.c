//19000091

//Q13

#include <stdio.h>
void main() 
{
   int num, i, arr1[30];
   int *ptr;
	
   printf(" Input the number of elements to store in the array (max 30) : ");
   scanf("%d",&num);
   ptr = &arr1[0]; 
   printf(" Input the elements in the array : \n");
   for(i=0;i<num;i++)
      {
	  scanf("%d",ptr);
	  ptr++;
	  } 	
	
   ptr = &arr1[num - 1];

   printf("\n The elements of array in reverse order are :");

   for (i = num; i > 0; i--) 
   {
      printf("\n%d",*ptr);
      ptr--;
   }
}

