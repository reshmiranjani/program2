
 #include <stdio.h>
void main()
{
    int a,b,result = 1;;
  scanf("%d %d", &a,&b);

    while (b != 0)
    {
        result=result*a;
        b--;
    }

    printf("%d", result);
}
