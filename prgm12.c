#include <stdio.h>

void main()
{
   int N,r=0,i,j;
   int flag;
   scanf("%d",&N);
   j=N;
   if(j<=1000)
   {
       while(j!=0)
       {
           i=j%10;
           r=r*10+i;
           j=j/10;
         
       }
       if(N==r)
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
