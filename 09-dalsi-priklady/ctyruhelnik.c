#include <stdio.h>
#include <math.h>

int spocitejObvod(int, int);
int spocitejObsah(int, int);
float delkaPrepony(int, int);
void printVitej();

int main(void)
{
    printVitej();

    int a, b;

    printf("Prosim zadej delky stran: ");
    scanf("%d %d", &a, &b);

    int obvod = spocitejObvod(a, b);
    int obsah = spocitejObsah(a, b);
    float prepona = delkaPrepony(a, b);

    printf("\n");
    printf("Obvod ctyruhelniku se stranami a = %d, b = %d: %d\n", a, b, obvod);
    printf("Obsah ctyruhelniku se stranami a = %d, b = %d: %d\n", a, b, obsah);
    printf("Delka prepony ctyruhelniku se stranami a = %d, b = %d: %.2f\n", a, b, prepona);

    return 0;
}

int spocitejObvod(int a, int b)
{
    return 2 * a + 2 * b;
}

int spocitejObsah(int a, int b)
{
    return a * b;
}

float delkaPrepony(int a, int b)
{
    return sqrt(a * a + b * b);
}

void printVitej()
{
    printf("--------------------------------\n");
    printf("Vitej u pocitani s ctyruhelniky!\n");
    printf("--------------------------------\n");
    printf("\n");
}
