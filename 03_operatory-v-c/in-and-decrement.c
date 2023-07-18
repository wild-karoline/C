#include <stdio.h>

int result = 0;
int number = 2;

int main(void)
{
  result = number++;
  printf("Post increment:	%d, %d \n", result, number);
  result = ++number;
  printf("Pre increment:	%d, %d \n", result, number);
  result = number--;
  printf("Post decrement:	%d, %d \n", result, number);
  result = --number;
  printf("Pre decrement:	%d, %d \n", result, number);
  return 0;
}