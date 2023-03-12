#include<stdio.h>
#include<string.h>
//C PROGRAM TO FIND THE LENGTH OF A STRING
int main()
{
    int i=0,count=0;
    char name[5];
    printf("Enter the string:\n");
    gets(name);
    while(name[i]!='\0'){
        count++;
        i++;
    }

    printf("\nthe size of the string is : %d",count);
    return 0;
}