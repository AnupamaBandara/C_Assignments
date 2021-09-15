//19000091

//Q10

#include <stdio.h>
int main()
{
    char str1[50];
    char *pt;
    int  vowel,consonant;
  
    printf(" Input a string(without spaces): ");
    fgets(str1, sizeof str1, stdin);
     
    //assign address of str1 to pt
    pt=str1;
     
    vowel=consonant=0;
    while(*pt!='\0')
    {
        if(*pt=='A' ||*pt=='E' ||*pt=='I' ||*pt=='O' ||*pt=='U' ||*pt=='a' ||*pt=='e' ||*pt=='i' ||*pt=='o' ||*pt=='u')
            {	vowel++;
        }
        
        else
            consonant++;
        pt++; //pointer is increasing for searching the next character
    }
     
    printf(" Number of vowels : %d\n Number of consonants : %d\n",vowel,consonant-1);        
    return 0;
}

