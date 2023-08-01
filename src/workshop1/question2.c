#include <stdio.h>

int main(void)
{

  int int1;
  int int2;

  printf("Enter first number: ");
  scanf("%d", &int1);

  printf("Enter second number: ");
  scanf("%d", &int2);

  if (int1 % int2 == 0)
  {
    printf("divisible\n");
  }
  else
  {
    printf("not divisible\n");
  }

  return 0;
}
