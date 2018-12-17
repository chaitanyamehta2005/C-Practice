#include <stdio.h>
int main()
{
  int a,output,i,square;
  printf("Enter the input number");
  scanf("%d",&a);
  for (i=1;i<=a;i++)
  {
      if (i%2 == 0)
      {
          square=i*i;
          printf("%d^%d=%d\n",i,i,square);
      }

  }
return 0;
}
