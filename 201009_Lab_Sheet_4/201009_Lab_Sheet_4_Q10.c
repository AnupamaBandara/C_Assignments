//201009

//Q10

#include<stdio.h>

int factorial(int n){
	
	if(n!=1){
		return n*factorial(n-1);
	}
	else{
		return 1; 
	}	
}
int main(){
	int i=1;
	printf("Factorial of 1:= 1\n");
	for(i<10;i++;){ 
		if(i>=1 && i<=10){	
			printf("Factorial of %d:= %ld\n", i, factorial(i));
		}
	}
}
