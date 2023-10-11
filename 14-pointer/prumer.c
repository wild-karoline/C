#include <stdio.h>

double prumer1(int pole[], int velikost)
{
  double soucet = 0;
  for (int i = 0; i < velikost; i++)
  {
    soucet += pole[i];
  }

  return soucet / velikost;
}

double prumer2(int* pole, int velikost)
{
  double soucet = 0;
  for (int i = 0; i < velikost; i++)
  {
    soucet += pole[i];
  }

  return soucet / velikost;
}

double prumer3(int* pole, int velikost)
{
  double soucet = 0;
  for (int i = 0; i < velikost; i++)
  {
    soucet += *(pole + i);
  }

  return soucet / velikost;
}

int main()
{
  int pole[] = { 1, 3, 5, 7, 3 ,8 };
  printf("Data: ");
  for (int i = 0; i < sizeof(pole) / sizeof(int); i++)
  {
    printf("%d ", pole[i]);
  }
  printf("\n");

  printf("Prumer1: %.2f\n", prumer1(pole, sizeof(pole)/sizeof(int)));
  printf("Prumer2: %.2f\n", prumer2(pole, sizeof(pole)/sizeof(int)));
  printf("Prumer3: %.2f\n", prumer1(pole, sizeof(pole)/sizeof(int)));

  return 0;
}

