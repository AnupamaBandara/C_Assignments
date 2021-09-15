//201009

//Q4

#include<stdio.h>

int Max(int array[]){
	int i;
	int max=array[0];
	for(i=0;i<5;i++){
		if(max<array[i]){
			max=array[i];
		}
	}
	return max;
}

int main(){
	int arr[5];
	int i;
	printf("Enter the marks of the 5 students (Out of 100)\n");
    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }
    Max(arr);
    int Bscore=Max(arr);
   	for(i=0; i<5; i++)
    {
        if(arr[i]>=Bscore-10){
        	printf("Student %d's grade is A\n",i+1);
		}
		else if(arr[i]>=Bscore-20){
        	printf("Student %d's grade is B\n",i+1);
		}
		else if(arr[i]>=Bscore-30){
        	printf("Student %d's grade is C\n",i+1);
		}
		else if(arr[i]>=Bscore-40){
        	printf("Student %d's grade is D\n",i+1);
		}
		else{
			printf("Student %d has failed the exam\n",i+1);
		}
    }
}
