#include <stdio.h>

int main(void)
{
  int a = 5;
  int b = 2;

  printf("a = %d, b = %d\n\n", a, b);

  printf("%d\n", a / b);
  printf("%d\n", a % b);
  printf("%d\n", a += b);
  printf("%d\n", a /= b);

  printf("\na = %d, b = %d\n", a, b);

  return 0;
}
