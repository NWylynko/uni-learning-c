#include <stdio.h>

int main(void)
{
  int number;

  printf("Enter an integer: ");

  /* reads and stores input */
  scanf("%d", &number);

  /* displays output */
  printf("You entered: %d", number);

  return 0;
}
