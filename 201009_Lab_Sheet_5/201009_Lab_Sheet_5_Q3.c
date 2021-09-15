//201009 

//Q3

#include<stdio.h>

int tot(float array[]){
	int i; 
	float sum=0.0;
	for(i=0;i<15;i++)
	{
		sum=sum+array[i];
	 } 
	printf("Sum of the values = %.2f\n",sum); 
}

int Avg(float array[]){
	int i;
	float avg,sum=0.0;
	for(i=0;i<15;i++)
	{
		sum=sum+array[i];
	}
	avg=sum/15;
	printf("Average of the values = %.2f\n",avg);
}

int Max(float array[]){
	int i;
	float max=array[0];
	for(i=1;i<15;i++)
	{
		if(array[i]>max){
			max=array[i];
		}
	}
	printf("Maximum value = %.2f\n",max);
}

int Min(float array[]){
	int i;
	float min=array[0];
	for(i=1;i<15;i++)
	{
		if(array[i]<min){
			min=array[i];
		}
	}
	printf("Minimum value = %.2f\n",min);
}

int Count(float array[]){
	int freq[15];
	//float freq[15] if we call Max function then freq should be declared as a float array
	float x;
	int i,j,count;
	for(i=0;i<15;i++){
		freq[i] = -1;
	}
	for(i=0;i<15;i++)
	{
		count = 1;
		for(j=i+1;j<15;j++)
		{
			if(array[i]==array[j]){
				count++;
				freq[j]=0;
			}
		}
		if(freq[i] != 0){
			freq[i] = count;
		}
	}
	int max=freq[0];
	for(i=1;i<15;i++){
	if(freq[i]>max){
		max=freq[i];
		x=array[i];}
	}
	printf("%.2f is the element which appears a maximum number of times. It appears %d times\n",x,max);
}

int main(){
	
	float array[15]={34.5,56.7,12.6,98.4,54.21,89.55,54.2,98.4,73.2,21.45,34.5,98.4,21.45,98.4,9.3};
	tot(array);
	Avg(array);
	Max(array);
	Min(array);
	Count(array);
}
