//19000091

//Q10

#include<stdio.h>
#include<string.h>
void add_books();
void display_all_books();

void author();
void title();
void count();

struct book
{
int acc_num,flag;
char name[30],title[30];
float price;
}b[100];


int d,issue=0;

void main()
{
int i,n,c;
printf("Enter number of book\n");
scanf("%d",&n);
issue=issue+n;
for(i=0;i<n;i++){
printf("\nEnter information of book no. %d\n",i+1);
printf("Accession number ");
scanf("%d",&b[i].acc_num);
printf("Name of author ");
scanf("%s",b[i].name);
printf("Title of book ");
scanf("%s",b[i].title);
printf("Price (Rs) ");
scanf("%f",&b[i].price);
printf("Issue status yes(1)/no(0): ");
scanf("%d",&b[i].flag);
if(b[i].flag==1)
{
issue ++;
}

else
{
issue=issue;
}
}
d=i;
printf("\n****menu*****");

printf("\n1. Add book information\n2. Display book information\n3. List all books of given author\n4. list the title of specified book\n5. List the count of books in the library\n6. Exit\n\n");
printf("Choose an option\n");
scanf("%d",&c);
while(c!=6){
if(c==1)
add_books();
if(c==2)
display_all_books();
if(c==3) 
author();
if(c==4) 
title();
if(c==5) 
count();
if(c!=1 && c!=2 && c!=3 && c!=4 && c!=5)
printf("Invalid Input\nPlease enter valid input\n");
printf("\n1. Add book information\n2. Display book information\n3. List all books of given author\n4. list the title of specified book\n5. List the count of books in the library\n6. Exit\n\n");
printf("Choose an option\n");
scanf("%d",&c);
}
}

void add_books(){
int i,n;
printf("\nEnter number of book added\n");
scanf("%d",&n);
for(i=d;i<n+d;i++){
printf("\nEnter information of additional book no. %d\n",i-d+1);
printf("Accession number ");
scanf("%d",&b[i].acc_num);
printf("Name of author ");
scanf("%s",b[i].name);
printf("Title of book ");
scanf("%s",b[i].title);
printf("Price (Rs) ");
scanf("%f",&b[i].price);
printf("Issue status yes/no: ");
scanf("%d",&b[i].flag);
if(b[i].flag==1)
{
	issue ++;
}

else
{
	issue=issue;
}
}
d=d+n;
}
void display_all_books(){
int j;
printf("\nAll the books in library with details\n");
for( j=0;j<d;j++)
printf("\nAccession number : %d\nName : %s\nTitle : %s\nPrice : Rs %f\nIssue : %d\n",b[j].acc_num,b[j].name,b[j].title,b[j].price,b[j].flag);
}

void author()
{
char A[30],j,c;
int i;
printf("\nEnter author name\n");
scanf("%s",A);

for(j=0;j<d;j++){
c=strcmp(A,b[j].name);
if(c==0){
printf("\nAccession number : %d\nName : %s\nTitle : %s\nPrice : Rs %f\nIssue : %d\n",b[j].acc_num,b[j].name,b[j].title,b[j].price,b[j].flag);}
}
}

void title()
{
char t[30];
int c,i,j;
printf("\nEnter Title of a book ");
scanf("%s",&t);
for(j=0;j<d;j++)
{
c=strcmp(t,b[j].title);
if(c==0){
printf("\nAccession number : %d\nName : %s\nTitle : %s\nPrice : Rs %f\nIssue : %d\n",b[j].acc_num,b[j].name,b[j].title,b[j].price,b[j].flag);
}
}
}

void count()
{
printf("\n\nNo. of books in libarary is %d\n",d);
printf("\nNo of books issued:%d\n",issue-d);
}
