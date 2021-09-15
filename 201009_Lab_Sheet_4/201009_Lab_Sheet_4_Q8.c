//201009

//Q8

#include<stdio.h>
#include<conio.h>

int HCD(){
	
	int x, y, k;
	int i=1;
	
	printf("Enter a number:");
	scanf("%d", &x);
	printf("Enter a number:");
	scanf("%d", &y);
	while(i<=y){
		
		if (x%i==0 && x/i>0){
			if (y%i==0 && y/i>0){
				k=i;
			}		
		} 
	i++;	
	}	
	printf("The highest common devisor is %d", k);	
}
int main(){
	HCD();
}
