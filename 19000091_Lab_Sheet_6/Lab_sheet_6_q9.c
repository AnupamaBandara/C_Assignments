//19000091

//Q9

#include<stdio.h>
#include<string.h>
void swap(char *a, char *b) 
{ 
    char temp; 
    temp = *a; 
    *a = *b; 
    *b = temp; 
} 
  

void permute(char *p, int l, int r) 
{ 

   int i; 
   if (l == r) 
     printf("  %s\n", p); 
   else
   { 
       for (i = l; i <= r; i++) 
       { 
          swap((p+l), (p+i)); 
          permute(p, l+1, r); 
          swap((p+l), (p+i));
       } 
   } 
} 
  

int main() 
{ 
    char str[10]  ;
    printf("Enetr the string Using upto 10 Characters\n");
    scanf("%s",str);
    int n = strlen(str); 
    printf("Permutations of a given string \n");
    permute(str, 0, n-1); 
    return 0; 
} 

