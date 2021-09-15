//201009

//Q7

#include<stdio.h>
#include<string.h>

void getbday(int,int);
float main()
{
	char idno[12],yr[2],mn[3];
	int m,year,i,x=0;
	printf("Enter your ID number : ");
	scanf("%s",idno);
	
	for(i=0;i<2;i++)
	{
		yr[i] = idno[i];
	}
	for(i=2;i<5;i++)
	{
		mn[x] = idno[i];
		x++;
	}
	m=atoi(mn);
	year=atoi(yr);
	
	if(m>=500)
	m=m-500;
    getbday(year,m);
}
void getbday(int y, int x)
{
	int day,month;
	float answer;
	if(x<=31)
	{
		month=1;
		day=x;
	}
	else if(x>31 && x<=60)
	{
		month=2;
		day=x-31;
	}
	else if(x>60 && x<=91)
	{
		month=3;
		day=x-60;
	}
	else if(x>91 && x<=121)
	{
		month=4;
		day=x-91;
	}
	else if(x>121 && x<=152)
	{
		month=5;
		day=x-121;
	}
	else if(x>152 && x<=182)
	{
		month=6;
		day=x-152;
	}
	else if(x>182 && x<=213)
	{
		month=7;
		day=x-182;
	}
	else if(x>213 && x<=244)
	{
		month=8;
		day=x-213;
	}
	else if(x>244 && x<=274)
	{
		month=9;
		day=x-244;
	}
	else if(x>274 && x<=305)
	{
		month=10;
		day=x-277;
	}
	else if(x>305 && x<=335)
	{
		month=11;
		day=x-305;
	}
	else
	{
		month=12;
		day=x-335;
	}
	
	printf("Yur Birthday = 19%d.%d.%d",y,month,day);
}
