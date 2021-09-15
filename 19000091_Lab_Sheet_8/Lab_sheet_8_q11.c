//19000091

//Q11

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct item{
	char item[8];
	float unit;
	char title[30];
	char measure[2];
	float price;
	float stock;
}it[25];

void display()
{
	int i;
	printf("\n ItemCode");
	printf("\tUnit");
	printf("\t  price");
	printf("\t    Stock");
	printf("\tItem");
	printf("\n ---------------------------------------------------------------\n");
	for(i=0;i<25;i++)
	{
		if(it[i].price == 0)
			return;
	
		printf(" %s",it[i].item);
		printf("\t%3.1f%s",it[i].unit,it[i].measure);
		printf("\t  %3.1f",it[i].price);
		printf("\t    %3.1f",it[i].stock);
		printf("\t%s\n",it[i].title);
	}
}

int new_item()
{
	int i,j,k,flag=0,item_num;
	char b[3];
	for(j=400;j<425;j++)
	{
		for(k=0;k<25;k++)
		{
			for(i=0;i<3;i++)
			{
				b[i]=it[k].item[i+4];
			}
	
			item_num=atoi(b);

			if(j == item_num)
			{	
				flag=1;
				break;
			}
			else
				flag=0;
		}
		
		if(flag==0)
		{
			break;
		}
	}
	itoa(j,b,10);
	
	for(i=0;i<25;i++)
	{
		if(it[i].price == 0)
		{
			strcpy(it[i].item,"ITEM");
			strcat(it[i].item,b);
			return i;
			break;
		}
	}	
}
void bills()
{
	char bill[]="ITEM402,2/ITEM412,2.5 kg/ITEM404,2/ITEM419,1500 ml/";
	char i[7],q[8],m[2];
	int j=0,k;
	float qu,total=0,grand_total=0;
	
	printf("\n\n\n ******** BILL *********\n");
	printf("\n Item Code");
	printf("\tQuantity");
	printf("\tUnit Price");
	printf("\tTotal");
	printf("\n ---------------------------------------------------------------\n");
	
	while(j<strlen(bill))
	{
		k=0;
		strcpy(i," ");
		while(bill[j] != ',')
		{
			i[k]=bill[j];
			j++;
			k++;
		}
		
		j++;
		k=0;
		strcpy(q," ");
		while(bill[j] != ' ' && bill[j] != '/')
		{
			q[k]=bill[j];
			k++;
			j++;
		}
		
		qu = atof(q);
		k=0;
		strcpy(m," ");
		if(bill[j] == ' ')
		{
			j++;
			
			while(bill[j] != '/')
			{
				m[k]=bill[j];
				k++;
				j++;
			}
			
			j++;
		}
		else
			j++;
		
		for(k=0;k<25;k++)
		{
			if(strcmp(it[k].item,i) == 0)
			{
				printf(" %s",i);
				
				if(strcmp(it[k].measure,"kg")==0 && strcmp(m,"g")==0)
					qu=qu/1000;
				if(strcmp(it[k].measure,"g")==0 && strcmp(m,"kg")==0)
					qu=qu*1000;
				if(strcmp(it[k].measure,"L")==0 && strcmp(m,"ml")==0)
					qu=qu/1000;
				if(strcmp(it[k].measure,"ml")==0 && strcmp(m,"L")==0)
			    	qu=qu*1000;
					
				printf("\t%5.1f",qu);
				printf("\t         %3.1f",it[k].price);
				total= qu*it[k].price/it[k].unit;
				grand_total= grand_total + total;
				printf("\t         %5.1f\n",total);
				break;
			}
		}
	}
	
	printf("\n ---------------------------------------------------------------\n");
	printf("\t\tGRAND TOTAL: %.2f",grand_total);
	printf("\n ---------------------------------------------------------------\n");
	
}

void main()
{
	int n;
	
	strcpy(it[0].item,"ITEM400");
	strcpy(it[0].title,"Sunlight soap");
	it[0].unit = 1;
	strcpy(it[0].measure,"");
	it[0].price = 27;
	it[0].stock = 200;
	
	strcpy(it[1].item,"ITEM401");
	strcpy(it[1].title,"Anchor Packet(400g)");
	it[1].unit = 1;
	strcpy(it[1].measure,"");
	it[1].price = 170;
	it[1].stock = 50;
	
	strcpy(it[2].item,"ITEM404");
	strcpy(it[2].title,"Anchor Packet(1kg)");
	it[2].unit = 1;
	strcpy(it[2].measure,"");
	it[2].price = 550;
	it[2].stock = 25;
	
	strcpy(it[3].item,"ITEM412");
	strcpy(it[3].title,"Rice");
	it[3].unit = 1;
	strcpy(it[3].measure,"kg");
	it[3].price = 80;
	it[3].stock = 300.50;
	
	strcpy(it[4].item,"ITEM420");
	strcpy(it[4].title,"Dhal");
	it[4].unit = 500;
	strcpy(it[4].measure,"g");
	it[4].price = 65.50;
	it[4].stock = 200.75;
	
	strcpy(it[5].item,"ITEM419");
	strcpy(it[5].title,"Cordial Bottle");
	it[5].unit = 250;
	strcpy(it[5].measure,"ml");
	it[5].price = 225.50;
	it[5].stock = 10;
	
	strcpy(it[6].item,"ITEM411");
	strcpy(it[6].title,"Sun Flower oil");
	it[6].unit = 1;
	strcpy(it[6].measure,"L");
	it[6].price = 160;
	it[6].stock = 20;
	
	display();
	
	n = new_item();
	strcpy(it[n].title,"HP Pencil");
	it[n].unit = 1;
	strcpy(it[n].measure,"");
	it[n].price = 12.50;
	it[n].stock = 100;
	
	n = new_item();
	strcpy(it[n].title,"Sun Silk Shampoo");
	it[n].unit = 1;
	strcpy(it[n].measure,"");
	it[n].price = 38;
	it[n].stock = 30;
	
	n = new_item();
	strcpy(it[n].title,"Sugar");
	it[n].unit = 250;
	strcpy(it[n].measure,"g");
	it[n].price = 65;
	it[n].stock = 150;
	
	display();
	bills();
}
