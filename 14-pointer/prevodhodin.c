#include <stdio.h>

#define HODIN_ZA_DEN 24
#define DNU_V_TYDNU 7

void prevodHodin(int casovy_udaj, int *tydny, int *dny, int *hodiny)
{
  *tydny = casovy_udaj / (DNU_V_TYDNU * HODIN_ZA_DEN);
  *dny = casovy_udaj / HODIN_ZA_DEN - *tydny * DNU_V_TYDNU;
  *hodiny = casovy_udaj % HODIN_ZA_DEN;
}

int main()
{
  int casovy_udaj = 0;
  printf("Zadej pocet hodin: ");
  scanf("%d", &casovy_udaj);
  
  int tydny, dny, hodiny;
  prevodHodin(casovy_udaj, &tydny, &dny, &hodiny);

  printf("\n%d hodin je %d tydny, %d dny a %d hodin\n", casovy_udaj, tydny, dny, hodiny);

  return 0;
}