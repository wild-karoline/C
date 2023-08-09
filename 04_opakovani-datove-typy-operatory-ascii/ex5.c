#include <stdio.h>

int main(void) {
  int a = 5;
  int b = 2;
  int c = (b != 0) && (a / b);
  printf("%d\n", c);
}
