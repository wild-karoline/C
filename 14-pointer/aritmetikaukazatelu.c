#include <stdio.h>

void ukazPole(int pole[])
{
  printf("Velikost pole: %lu\n", sizeof(pole));
  // printf("Pole: %d\n", pole);
  printf("Pole: %p\n", pole);
  printf("Pole*: %d\n", *pole);
}

int main()
{
  int pole[] = {3, 2, 1};
  printf("Velikost pole v main: %lu\n", sizeof(pole));
  printf("Adresa prvniho elementu v main: %p\n", &pole[0]);
  ukazPole(pole);


  return 0;
}

