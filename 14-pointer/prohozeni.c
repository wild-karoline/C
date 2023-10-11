#include <stdio.h>

void prohozeni(int* x, int *y)
{
  printf("Ve funkci 'prohozeni'\n");
  printf("x: %d, y: %d\n", *x, *y);
  
  int tmp = *x;
  *x = *y;
  *y = tmp;
  printf("Pro prohozeni\n");
  printf("x: %d, y: %d\n", *x, *y);
}

int main()
{
  int x = 3;
  int y = 5;

  printf("V main\n");
  printf("x: %d, y: %d\n", x, y);

  prohozeni(&x, &y);

  printf("V main po prohozeni\n");
  printf("x: %d, y: %d\n", x, y);

  return 0;
}
