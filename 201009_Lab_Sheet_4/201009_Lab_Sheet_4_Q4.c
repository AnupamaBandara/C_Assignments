//201009

//Q4

#include<stdio.h>

int main(){
	int overs,hRR1,hRR2,hRR3,scrC,scrCp,scr1,scr2,scr3;
	float cRR;
	printf("Enter the Number of overs played : ");
	scanf("%d",&overs);
	printf("Enter the Current Run Rate : ");
	scanf("%f",&cRR);
	
	scrC = cRR*overs;//current score
	scrCp = cRR*20;//Projected score at current run rate
	printf("Projrcted score at Current run rate : %d\n",scrCp);
	
	hRR1 = cRR + 1;
	scr1 = scrC + (20-overs)*hRR1;
	hRR2 = cRR + 2;
	scr2 = scrC + (20-overs)*hRR2;
	hRR3 = cRR + 3;
	scr3 = scrC + (20-overs)*hRR3;
	
	printf("Projected score at %d runs per over : %d\n",hRR1,scr1);
	printf("Projected score at %d runs per over : %d\n",hRR2,scr2);
	printf("Projected score at %d runs per over : %d\n",hRR3,scr3);
}

