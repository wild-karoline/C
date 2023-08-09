#include <stdio.h>

int main(void) {
  int a = 0;
  int b = 1;
  int c = a || (a || b) && (a > b);
  printf("%d\n", c);
  return 0;
}
