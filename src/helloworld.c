#include <stdio.h>

#define MAX_INPUT_SIZE 100

int main(void)
{
  char input[MAX_INPUT_SIZE];

  printf("Enter an integer: ");

  /* reads and stores input */
  scanf("%s", input);

  /* displays output */
  printf("You entered: %s", input);

  return 0;
}
