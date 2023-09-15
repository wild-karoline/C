#include <stdio.h>
#include <math.h>

int spocitejObvod(int, int);
int spocitejObsah(int, int);
float delkaPrepony(int, int);
void printVitej();
int userInput();

int main(void)
{
    printVitej();

    int a, b;

    printf("Delky stran\n");
    printf("a: ");
    a = userInput();
    printf("b: ");
    b = userInput();

    int obvod = spocitejObvod(a, b);
    int obsah = spocitejObsah(a, b);
    float prepona = delkaPrepony(a, b);

    printf("\n");
    printf("Obvod ctyruhelniku se stranami a = %d, b = %d: %d\n", a, b, obvod);
    printf("Obsah ctyruhelniku se stranami a = %d, b = %d: %d\n", a, b, obsah);
    printf("Delka prepony ctyruhelniku se stranami a = %d, b = %d: %.2f\n", a, b, prepona);

    return 0;
}

// Funkce, ktera uzivatele vyzve k zadani delky strany.
//   Vyzva se nachazi ve smycce, ktera se opakuje, pokud 
//   uzivatel nezada platne cislo.
int userInput()
{
    int input;

    while (1)
    {
        scanf("%d", &input);
        if (input < 1)
        {
            printf("Strana musi mit delku vetsi 0!\n");
        } else
        {
            return input;
        }
    }
}

// Funkce vracejici obvod ctyruhelniku se stranami a a b
int spocitejObvod(int a, int b)
{
    return 2 * a + 2 * b;
}

// Funkce vracejici obsah ctyruhelniku se stranami a a b
int spocitejObsah(int a, int b)
{
    return a * b;
}

// Funkce vracejici delku prepony ctyruhelniku se stranami a a b
float delkaPrepony(int a, int b)
{
    return sqrt(a * a + b * b);
}

// Funkce, ktera vytiskne na konzoli kratky uvitaci text
void printVitej()
{
    printf("--------------------------------\n");
    printf("Vitej u pocitani s ctyruhelniky!\n");
    printf("--------------------------------\n");
    printf("\n");
}
