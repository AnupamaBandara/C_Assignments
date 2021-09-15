//19000091

//Q14

#include <stdio.h> 
#include <string.h> 

void reverse(char* str) 
{ 
	int l, i; 
	char *begin, *end, tmp; 

	l = strlen(str); 

	begin = str; 
	end = str; 

	for (i = 0; i < l - 1; i++) 
		end++; 

	for (i = 0; i < l / 2; i++) { 

		tmp = *end; 
		*end = *begin; 
		*begin = tmp; 
 
		begin++; 
		end--; 
	} 
} 

int main() 
{ 
 
	char str[100];
	printf("Enter a string (represent space with '_'): %s\n", str); 
	scanf("%s",&str);

	// Reverse the string 
	reverse(str); 

	// Print the result 
	printf("Reverse of the string: %s\n", str); 

	return 0; 
} 

