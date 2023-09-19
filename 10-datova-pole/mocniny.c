#include <stdio.h>
#include <math.h>

int main(void)
{
    int cislo;
    printf("Zvol si cislo od 2 do 5: ");
    scanf("%d", &cislo);

    int mocniny[5];

    for (int i = 0; i < 5; i++)
    {
        mocniny[i] = pow(cislo, i);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d. mocnina cisla %d je %d\n", i, cislo, mocniny[i]);
    }

    return 0;
}