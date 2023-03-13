#include<stdio.h>
#include<string.h>
//C PROGRAM TO CONCATENATE TWO STRINGS
int main()
{ int len1,len2,i;
    char s1[30];
    char s2[8];
    printf("enter the string 1\n");
    gets(s1);
    printf("enterthe string 2\n");
    gets(s2);
    len1=strlen(s1);
    len2=strlen(s2);
    printf("\nsize of s1 is %d",len1);
    printf("\nsize of s2 is %d",len2);
    for(i=0;i<=4;i++)
    {
        s1[len1+i+1]=s2[i];

    }
    printf("\nThe concatenated string is %s\n",s1);
    
    
    
}
    