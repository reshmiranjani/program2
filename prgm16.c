#include <stdio.h>

int main ()
{
   int a,b, i, j,count;
   scanf("%d %d", &a, &b);
   for (i =a+ 1; i <b; ++i)
   {
      count= 0;
      for (j = 2; j <= i/2; ++j)
      {
         if (i % j == 0)
         {
            count = 1;
            break;
         }
      }
      if (count == 0) 
          printf("%d ", i);
   }
   return 0;
}
