#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       sum=sum+i;
       i=i+2;
    }
    printf("%d",sum);


    return 0;
}