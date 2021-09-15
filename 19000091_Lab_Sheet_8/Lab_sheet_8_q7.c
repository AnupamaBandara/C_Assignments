//19000091

//Q7

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct date
{
 int day;
 int month;
 int year;
};
int main ()
{
 int i,flag=0;  struct date d[2];  
 for(i=0;i<2;i++)
 {
  printf("\nEnter the date %d\n",i+1);
  printf("\nEnter the day : ");
  scanf("%d",&d[i].day);

  printf("\nEnter the month (in numbers) : ");
  scanf("%d",&d[i].month);

  printf("\nEnter the year : ");
  scanf("%d",&d[i].year);
 }
 if(d[0].day==d[1].day)
 {
  if(d[0].month==d[1].month)
  {
   if(d[0].year==d[1].year)
   {
    flag=1;
   }
  }
 }
 if(flag==1)
  printf("\nThe dates are equal");
 else
  printf("\nThe dates are not equal");
}
