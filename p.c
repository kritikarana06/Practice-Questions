#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=5;i>=1;i--)
    {
        
       
        for(j=1;j<=i;j++)
        {
            if(i==j||j==1||i==5)
            {
                printf("*");
            }
            else
            printf(" ");
        }
        printf("\n");
    }
}