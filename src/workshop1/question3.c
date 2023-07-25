#include <stdio.h>

int factorial(int n);

int main(void)
{
  int input = 1;

  while (input >= 0)
  {
    printf("Give me a number: ");
    scanf("%d", &input);

    printf("Factorial: %d\n", factorial(input));
  }
}

int factorial(int n)
{
  int sum = 1;
  int i;
  for (i = 1; i < n + 1; i++)
  {
    sum = sum * i;
  }
  return sum;
}
