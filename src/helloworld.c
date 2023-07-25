#include <stdio.h>

#define MAX_INPUT_SIZE 100

int main(void)
{
  char input1[MAX_INPUT_SIZE];
  int input2 = 0;

  printf("Enter a string: ");
  scanf("%s", input1);

  printf("Enter a number: ");
  scanf("%d", &input2);

  /* displays output */
  printf("[input1] 's' You entered: %s\n", input1);
  printf("[input1] 'd' You entered: %d\n", input1);
  printf("[input1] 'p' Address of input1: %p\n", (void *)input1);

  printf("[input2] 'd' You entered: %d\n", input2);

  return 0;
}
