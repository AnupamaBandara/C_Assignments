//19000091

//Q4

#include<stdio.h>
struct word{
	char check[30];
	int a_count;
	int e_count;
	int i_count;
	int o_count;
	int u_count;
	int total_count;
}word[10];

int main()
{
	int i,j,n,len;
	
	FILE *fp;
	fp=fopen("myword.txt","w");
	
	fprintf(fp,"Word \t\t\t a\t e\t i\t o\t u\t other\t total");
	
	printf("Enter the number of words\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
	printf("Enter the word:");
	scanf("%s",word[i].check);
}
		
    for(i=0;i<n;i++)
	{
		len=strlen(word[i].check);
		fprintf(fp,"\n%s",word[i].check);
			
	  for(j=0;j<len;j++)
	  {
		
		if(word[i].check[j]=='a'||word[i].check[j]=='A')
		{
		    word[i].a_count++;	
		}
		
		else if(word[i].check[j]=='e'||word[i].check[j]=='E')
		{
			word[i].e_count++;	
		}
		
		else if(word[i].check[j]=='i'||word[i].check[j]=='I')
		{
			word[i].i_count++;		
		}
		
		else if(word[i].check[j]=='o'||word[i].check[j]=='O')
		{
			word[i].o_count++;		
		}
		
		else if(word[i].check[j]=='u'||word[i].check[j]=='U')
		{
			word[i].u_count++;
		}
	
	if(j==len-1)
	{
		word[i].total_count=word[i].a_count+word[i].e_count+word[i].i_count+word[i].o_count+word[i].u_count;
		 
        fprintf(fp,"\t\t\t%d\t%d\t%d\t%d\t%d\t%d\t%d",word[i].a_count,word[i].e_count,word[i].i_count,word[i].o_count,word[i].u_count,len-word[i].total_count,len);	
	}		
      }
	}
	fclose(fp);
	return 0;
}
