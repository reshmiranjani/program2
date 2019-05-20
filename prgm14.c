#include <stdio.h>
void  main()
{
  int a,b,i;
  scanf("%d%d",&a,&b);
  if(a<=10000&&b<=10000)
{
  for(i=a+1;i<b;i++)
  {
      if(i%2==1)
      {
          printf("%d ", i);
      }
  }
}
  else
  {
      printf("invalid");
  }
}
