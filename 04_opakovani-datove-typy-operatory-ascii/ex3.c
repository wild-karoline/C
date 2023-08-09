#include <stdio.h>

int main(void)
{
  int a1 = 0x41;	// 0x znamena, ze se nejedna o decimal, ale o hexadecimal
  int a2 = 0150;	// 0 na zacatku znaci oktal
  int a3 = 111;
  int a4 = a2 + 2;
  int a5 = '!';

  printf("%c%c%c%c%c\n", a1, a2, a3, a4, a5);

  return 0;
}
