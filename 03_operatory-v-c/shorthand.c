#include <stdio.h>

int main(void)
{
  int number = 2;
  number *= 3;
  printf("%d\n", number);

  int a = 3;
  int b = 4;
  b *= --a;
  printf("%d\n", b);
  return 0;
}