#include <stdio.h>

#include <stdlib.h>
#include <time.h>

int hra();
int inputHrace();
int spravnyInput(int);
int inputPocitace();
int vysledekKola(int, int);
int prevodNaVelkePismeno(int);
void oznameniViteze(int, int);

int main(void) 
{
    int hrac = 0;
    int pocitac = 0;

    printf("Povolene prikazy: K, k (kamen), N, n (nuzky), P, p (papir), Q, q (konec)\n\n");
    printf("---------------------\n");

    for (int i = 1; i <= 3; i++) 
    {
        printf("\n");
        printf("Kolo: %d\tTvoje body: %d\tBody pocitac: %d\n\n", i, hrac, pocitac);

        int kolo = hra();

        if (kolo == 'Q')
        {
            return 0;
        } else if (kolo == 1)
        {
            hrac++;
        } else if (kolo == 2)
        {
            pocitac++;
        }
    }

    oznameniViteze(hrac, pocitac);

    return 0;
}

void oznameniViteze(int hrac, int pocitac)
{
    printf("\n---------------------\n");
    printf("Konec hry!\n");
    printf("VYSLEDEK\n");
    printf("Tvoje body: %d\n", hrac);
    printf("Body pocitace: %d\n", pocitac);

    if (hrac > pocitac)
    {
        printf("Gratuluju, vyhral jsi!\n");
    } else if (hrac < pocitac)
    {
        printf("Tentokrat to nevyslo...\n");
    } else 
    {
        printf("Nerozhodne.\n");
    }
}

int hra()
{
    int volba_hrace = inputHrace();

    if (volba_hrace == 'Q' || volba_hrace == 'q') {
        return volba_hrace;
    }

    int volba_pocitace = inputPocitace();

    return vysledekKola(volba_hrace, volba_pocitace);
}

int inputHrace()
{
    printf("Jakou taktiku zvolis?\n");

    while (1)
    {
        printf("~ ");
        int volba = getchar();
        volba = prevodNaVelkePismeno(volba);
        // zkuste si vynechat toto druhe getchar() a pozorujte, co se deje
        getchar();

        if (spravnyInput(volba))
        {
            return volba;
        } else
        {
            printf("Neplatna volba!\n");
        } 
    }
}

int spravnyInput(int volba)
{
    if (volba == 'K' || volba == 'N' || volba == 'P' ||
        volba == 'Q')
        {
            return 1;
        }
    
    return 0;
}

int prevodNaVelkePismeno(int volba)
{
    if (volba >= 97 && volba <=122)
    {
        return volba - 32;
    }
    return volba;
}

int inputPocitace()
{
    // inicializace generatoru nahodneho cisla
    srand(time(NULL));
    // cislo od 0 do 9;
    int volba = rand() % 3;

    switch (volba)
    {
    case 0:
        printf("Pocitac voli kamen!\n");
        return 'K';
    case 1:
        printf("Pocitac voli nuzky!\n");
        return 'N';
    case 2:
    printf("Pocitac voli papir!\n");
        return 'P';    
    default:
        printf("Error!\n");
        break;
    }

    return -1;
}

int vysledekKola(int volba_hrace, int volba_pocitace)
{
    if (volba_hrace == volba_pocitace)
    {
        printf("Nerozhodne!\n");
        return 0;
    } else if ((volba_hrace == 'K' && volba_pocitace == 'N') ||
        (volba_hrace == 'N' && volba_pocitace == 'P') ||
        (volba_hrace == 'P' && volba_pocitace == 'K'))
    {
        printf("Vyhral jsi!\n");
        return 1;
    } else 
    {
        printf("Tohle kolo jsi prohral.\n");
        return 2;
    }
}