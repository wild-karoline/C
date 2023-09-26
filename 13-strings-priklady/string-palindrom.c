#include <stdio.h>
#include <string.h>

int stringPalindrom(char string[])
{
  // nezapomente, ze index bez od 0 -> na indexu strlen(string) uz jste o jedno misto za slovem!
  int konec = strlen(string) - 1;
  
  for (int i = 0; i < konec; i++, konec--)
  {
    if (string[i] != string[konec])
    {
      return 0;
    }
  }

  return 1;
}

int main(int argc, char* argv[])
{
  printf("-----\nPalindrome check\n-----\n\n");
  if (argc != 2)
  {
    printf("Spust prosim program a udej pritom slovo, ktere chces otestovat.\n");
    return -1;
  }

  char* slovo = argv[1];

  printf("Zadane slovo: %s\n", slovo);

  if (stringPalindrom(slovo))
  {
    printf("Slovo je palindrom!\n");
  }
  else 
  {
    printf("Slovo neni palindrom.\n");
  }
  
  return 0;
}