#include<stdio.h>
void main()
{
    int n,a,r,sum=0,temp=0;
    scanf("%d",&n);
    a=n;
    if(n<=10000)
    {
    while(n>0)
    {
        r=n%10;
       temp=r*r*r;
         n=n/10;
        sum=sum+temp;
    }
    if(sum==a)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    }
    else
    {
        printf("invalid");
    }
}
