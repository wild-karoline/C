#include<stdio.h>

#define VELIKOST_POLE 5

void vytiskniPole(int* pole, int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("[%2d] ", *(pole+i));
  }
  printf("\n");
}

void zamena(int* a, int* b)
{
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

void bubbleSort(int* pole, int size)
{
  int serazeno = 1;
  do{
    serazeno = 1;

    for (int i = 0; i < size - 1; i++)
    {
      if (pole[i] > pole[i+1])
      {
        zamena(pole + i, pole + i + 1);
        serazeno = 0;
      }
    }
  } while(serazeno != 1);  
}

int main(void)
{
  int pole[VELIKOST_POLE] = { 12, 11, 13, 5, 6 };
  vytiskniPole(pole, VELIKOST_POLE);
  bubbleSort(pole, VELIKOST_POLE);
  vytiskniPole(pole, VELIKOST_POLE);

  return 0;
}