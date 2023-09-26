#include <stdio.h>

int main(int argc, char* argv[])
{
  if (argc != 2)
  {
    printf("Spust prosim program a udej pritom sve jmeno.\n");
    return -1;
  }

  char* program = argv[0];
  char* jmeno = argv[1];

  printf("Vitej, %s!\n", jmeno);
  printf("Nazev programu: %s\n", program);
  
  return 0;
}