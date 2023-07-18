#include <stdio.h>

int main(void) {
  int max = 20;
  int order = 3;
  int amount_ok = !((order < 0) || (order > max));
  printf("%d\n", amount_ok);
  amount_ok = !(order < 0) && !(order > max);
  printf("%d\n", amount_ok);
  amount_ok = (order >= 0) && (order <= max);
  printf("%d\n", amount_ok);
}