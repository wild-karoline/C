#include <stdio.h>

int main(void) {
  // operace s celými čísly
  int operand = 1;

  float result = operand / 2;
  printf("%f\n", result);

  result = operand / 2.0;
  printf("%f\n", result);

  int sum = 1 + 0.5;
  printf("%d\n", sum);
  
  sum = 1 - 0.5;
  printf("%d\n", sum);

  printf("\n");

  // závorky
  int a = 2;
  int b = 3;

  float average = a + b / 2.0;
  printf("%f\n", average);

  average = (a + b) / 2;
  printf("%f\n", average);

  average = (a + b) / 2.0;
  printf("%f\n", average);

  return 0;
}