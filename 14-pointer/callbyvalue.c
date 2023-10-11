#include <stdio.h>

void dvojnasobek(int a)
{
  a *= 2;
  printf("a ve funkci dvojnasobek: %d\n", a);
}

int main()
{
  int a = 3;
  printf("a ve funkci main: %d\n", a);
  dvojnasobek(a);
  printf("a ve funkci main: %d\n", a);

  return 0;
}