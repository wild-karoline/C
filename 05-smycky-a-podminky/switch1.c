#include <stdio.h>

int main(void)
{
    // Ahoj uzivateli! Prosim zvol si jednu z nasledujicich moznosti:
    //   1: Rovne
    //   2: Leva
    //   3: Prava
    //   4: Zpet

    int volba = 3;

    if (volba == 1) 
    {
        printf("Pokracujes dal? OK!\n");
    } else if (volba == 2)
    {
        printf("Hura doleva!\n");
    } else if (volba == 3) 
    {
        printf("Prava je ta prava...\n");
    } else if (volba == 4)
    {
        printf("Jak jen to bylo... 1 krok dopredu a 2 dozadu?\n");
    } else 
    {
        printf("Nepodvadime! Vyber si jednu z nabizenych moznosti, jina neni.\n");
    }

    return 0;
} 
