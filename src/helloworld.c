#include <stdio.h>
#include <stdlib.h>

#define MAX_INPUT_SIZE 100

int scanInt(char *message)
{
  int input = 0;

  printf("%s", message);
  scanf("%d", &input);

  return input;
}

char *scanStr(char *message)
{
  char *input = (char *)malloc(MAX_INPUT_SIZE * sizeof(char));

  if (input == NULL)
  {
    printf("Failed to allocate memory.\n");
    exit(1);
  }

  printf("%s", message);
  scanf("%99s", input);

  return input;
}

int main(void)
{
  char *input1 = scanStr("Enter a string: ");
  int input2 = scanInt("Enter a number: ");

  /* displays output */
  printf("[input1] 's' You entered: %s\n", input1);
  printf("[input1] 'p' Address of input1: %p\n", (void *)input1);

  printf("[input2] 'd' You entered: %d\n", input2);
  printf("[input2] 'p' You entered: %p\n", (void *)input2);

  free(input1); /* remember to free the dynamically allocated memory */

  return 0;
}
