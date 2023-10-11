#include <stdio.h>

int main()
{
  int vek = -1;
  int *ukazatel = &vek;

  printf("--- 1 ---\n");
  printf("Adresa promenne: %p, hodnota: %d\n", ukazatel, *ukazatel);
  printf("To same jinak: %p, %d\n", &vek, vek);

  printf("Zadej prosim svuj vek.\n");
  printf("Vek: ");
  scanf("%d", &vek);

  printf("--- 2 ---\n");
  printf("Adresa promenne: %p, hodnota: %d\n", ukazatel, *ukazatel);
  printf("To same jinak: %p, %d\n", &vek, vek);

  *ukazatel = -3;

  printf("--- 3 ---\n");
  printf("Adresa promenne: %p, hodnota: %d\n", ukazatel, *ukazatel);
  printf("To same jinak: %p, %d\n", &vek, vek);

  printf("\n--- 4 ---\n");
  printf("Pro zajimavost: %d\n", *(&vek));
  printf("Adresa ukazatele: %p\n", &ukazatel);

  return 0;
}