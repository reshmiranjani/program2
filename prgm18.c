#include<stdio.h>
int main()
{
  int a, b, i, temp,sum,r;
  scanf("%d %d",&a,&b);
  for(i=a+1;i<b;++i)
  {
      temp=i;
      sum=0;
      while(temp!=0)
      {
        r=temp%10;
        sum=sum+r*r*r;
        temp=temp/10;
      }
      if(i==sum)
      {
   printf("%d ",i);
      }
  }
  return 0;
} 
