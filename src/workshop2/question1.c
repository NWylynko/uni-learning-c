#include <stdio.h>

int powOfTwo(void)
{
  static int result = 1;
  result = result * 2;
  return result;
}

int main(void)
{

  int i;
  for (i = 0; i < 10; i++)
  {
    printf("%d\n", powOfTwo());
  }

  return 0;
}
