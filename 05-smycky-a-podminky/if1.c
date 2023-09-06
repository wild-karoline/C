#include <stdio.h>

int main(void)
{
    int vek = 10;

    printf("Vek: %d\n", vek);

    if (vek >= 24)
    {
        printf("Splnujes vekovou hranici pro ridicske opravneni skupiny AM, A1, B1 a T, A2, B, B+E, C1 a C1+E, C, C+E, D1, D1+E, A, D, D+E.\n");
    } else if (vek >= 21)
    {
        printf("Splnujes vekovou hranici pro ridicske opravneni skupiny AM, A1, B1 a T, A2, B, B+E, C1 a C1+E, C, C+E, D1, D1+E.\n");
    } else if (vek >= 18)
    {
        printf("Splnujes vekovou hranici pro ridicske opravneni skupiny AM, A1, B1 a T, A2, B, B+E, C1 a C1+E.\n");
    } else if (vek >= 17)
    {
        printf("Splnujes vekovou hranici pro ridicske opravneni skupiny AM, A1, B1 a T.\n");
    } else if (vek >= 16)
    {
        printf("Splnujes vekovou hranici pro ridicske opravneni skupiny AM, A1.\n");
    } else if (vek >= 15)
    {
        printf("Splnujes vekovou hranici pro ridicske opravneni skupiny AM.\n");
    } else {
        printf("Nesplnujes vek pro zadne ridicske opravneni!\n");
    }

    return 0;
}
