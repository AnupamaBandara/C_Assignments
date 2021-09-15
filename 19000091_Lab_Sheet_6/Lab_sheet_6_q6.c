//19000091

//Q6

#include<stdio.h>

int main() {
  char string[100], *ptr;
  int count = 0;
  printf("Enter Any string [below 100 chars] : ");
  gets(string);
  ptr = string;
  while (*ptr != '\0') {
    count++;
    ptr++;
  }
  printf("Length of String : %d", count);

  return 0;
}


