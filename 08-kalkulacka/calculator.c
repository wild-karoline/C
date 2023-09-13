#include <stdio.h>

int scitani(int a, int b)
{
    return a + b;
}

int odecitani(int a, int b)
{
    return a - b;
}

int nasobeni(int a, int b)
{
    return a * b;
}

double deleni(int a, int b)
{
    if (b == 0)
    {
        printf("Chyba: deleni nulou!\n");
        return -1;
    }

    return (double) a / b;
}

int main(void)
{
    int a, b;
    char operace;

    printf("Prosim zvolte operaci (+, -, *, /): ");
    scanf("%c", &operace);

    printf("Prosim zadejte 2 cisla (oddelena mezerou): ");
    scanf("%d %d", &a, &b);

    double vysledek;

    switch (operace)
    {
    case '+':
        vysledek = scitani(a, b);
        break;
    case '-':
        vysledek = odecitani(a, b);
        break;
    case '*':
        vysledek = nasobeni(a, b);
        break;
    case '/':
        vysledek = deleni(a, b);
        break;
    default:
        printf("Neplatna operace!\n");
        return -1;
    }

    printf("Vysledek: %d %c %d = %.2f\n", a, operace, b, vysledek);
    return 0;
}
