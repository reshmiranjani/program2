#include <stdio.h>
int main()
{
   int i, num, p = 0;
   scanf("%d",&num);
   if(num<=10000)
   {
   for(i=1;i<=num;i++)
   {
      if(num%i==0)
      {
         p++;
      }
   }
   if(p==2)
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
