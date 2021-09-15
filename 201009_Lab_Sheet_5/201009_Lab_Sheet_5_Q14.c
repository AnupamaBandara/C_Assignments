//201009

//Q14

#include<stdio.h>
#include<string.h>

int main()
{
char TextString[]="Cut your coat according to the cloth";
char StringToSearch[]="cord";
char *tmp;

tmp = strstr(TextString,StringToSearch);
if (tmp != NULL)
printf("word cord is presnt in the string\n");
else
printf("word cord is not presnt in the string\n");

return 0;}
