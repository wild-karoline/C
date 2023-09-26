#include <stdio.h>
#include <string.h>

void stringReverse(char string[])
{
  int len = strlen(string);

  for (int pismeno = 0; pismeno < len / 2; pismeno++)
  {
    // temp abysme neztratili to, co je na prvnim miste, protoze to na dalsim radku prepiseme
    char temp = string[pismeno];
    string[pismeno] = string[len - 1 - pismeno];
    string[len - 1 - pismeno] = temp;
  }
}

int main(int argc, char* argv[])
{
  if (argc != 2)
  {
    printf("Spust prosim program a udej pritom slovo, ktere chces otocit.\n");
    return -1;
  }

  char* slovo = argv[1];

  printf("Zadane slovo: %s\n", slovo);
  stringReverse(slovo);
  printf("Slovo pozpatku: %s\n", slovo);

  return 0;
}