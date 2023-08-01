#include <stdio.h>
#include "question2.h"

int intBoundCheck(int low, int high, int value)
{
  printf("low: %d, high: %d, value: %d, answer: ", low, high, value);
  return BOUND_CHECK(low, high, value);
}

int floatBoundCheck(float low, float high, float value)
{
  printf("low: %f, high: %f, value: %f, answer: ", low, high, value);
  return BOUND_CHECK(low, high, value);
}

int charBoundCheck(char low, char high, char value)
{
  printf("low: %s, high: %s, value: %s, answer: ", &low, &high, &value);
  return BOUND_CHECK(low, high, value);
}

int main(void)
{
  printf("%d\n", intBoundCheck(3, 9, 1));
  printf("%d\n", intBoundCheck(3, 9, 6));
  printf("%d\n", intBoundCheck(3, 9, 10));

  printf("%d\n", floatBoundCheck(3.5, 9.5, 1.5));
  printf("%d\n", floatBoundCheck(3.5, 9.5, 6.5));
  printf("%d\n", floatBoundCheck(3.5, 9.5, 10.5));

  printf("%d\n", charBoundCheck('b', 'f', 'a'));
  printf("%d\n", charBoundCheck('b', 'f', 'd'));
  printf("%d\n", charBoundCheck('b', 'f', 'x'));
}
