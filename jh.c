#include<stdio.h>
float fact(int)


void main()
{
    int n,r,a,b,c;
    float ans;
    printf("enter the value of n and r");
    scanf("%d%d",&n,&r);
    a=fact(n);
    b=fact(r);
    c=fact(n-r);
    ans=a/(b*c);
    printf("the ans is %f",ans);
}
float fact(int p)
{
    int ans=1;
    int i;
    for(i=1;i<=p;i++)
    {
        ans=ans*i;
        
    }
    return ans;

}