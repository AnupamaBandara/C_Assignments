//19000091

//Q15

#include <stdio.h>

int main()
{
    char alphebet[27];
    int i;
    char *p;
    p = alphebet;     

    for(i=0;i<26;i++)
    {
        *p=i+'A';
        p++;
    }
    p = alphebet;

    printf(" The Alphabets are : \n");
    for(i=0;i<26;i++)
    {
       printf(" %c ", *p);
        p++;
    }
    return(0);
}

