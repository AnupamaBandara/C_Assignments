//19000091

//Q8


#include <stdio.h>
struct Date {
	int date;
    int month;
    int year;

}d1,d3;

int main(){
        printf("Enter the current date\n");
        printf("Date: ");
        scanf("%d", &d1.date);
        printf("Month: ");
        scanf("%d",&d1.month);
        printf("Year: ");
        scanf("%d",&d1.year);
        printf("\n");
      
      	d3.date=d1.date;
        
        if(d1.month==3 || d1.month==5 || d1.month==7 || d1.month==8 || d1.month==10 || d1.month==12){
        	d3.date=d3.date+14;
        	d3.month=d1.month+1;
        	
        	if(d3.date>31){
        		if(d1.month==7 || d1.month==12){
        		d3.date=d3.date-31;
        		d3.month=d3.month+1;}
				else
				{
					d3.date=d3.date-30;
        		    d3.month=d3.month+1;}
				}	
			}
	    else if(d1.month==4 || d1.month==6 || d1.month==9 || d1.month==11){
			d3.date=d3.date+15;
        	d3.month=d1.month+1;
        	
        	if(d3.date>30){
        		d3.date=d3.date-31;
        		d3.month=d3.month+1;	
			}
		}
		else if(d1.month==1){
			d3.date=d3.date+14;
        	d3.month=d1.month+1;
        	
        	if(d3.date>28){
        		if ((d1.year%4==0 && d1.year%100 !=0) || d1.year%400==0){
        			if(d3.date==29){
        				d3.date = d3.date;
        				d3.month = d3.month;
					}
					else{
        			d3.date=d3.date-29;
        		    d3.month=d3.month+1;}
				}
				else{
        		d3.date=d3.date-28;
        		d3.month=d3.month+1;}	
			}
		}
		else if(d1.month==2){
			if ((d1.year%4==0 && d1.year%100 !=0) || d1.year%400==0){ //for leap years
		
			d3.date=d3.date+16;
        	d3.month=d1.month+1;
        	
        	if(d3.date>29){
        		d3.date=d3.date-31;
        		d3.month=d3.month+1;	
			}
        }
        else{
			d3.date=d3.date+17;
        	d3.month=d1.month+1;
        	
        	if(d3.date>28){
        		d3.date=d3.date-31;
        		d3.month=d3.month+1;	
			}
		}
		}
		
		if(d3.month>12){
			d3.month=d3.month-12;
			d3.year=d1.year+1;
		}
		else{
			d3.year=d1.year;
		}
		
		printf("\nThe final date (after add 45 day) is %d/%d/%d",d3.date,d3.month,d3.year);
		
}
