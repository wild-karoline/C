#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    // inicializace generatoru nahodneho cisla
    srand(time(NULL));
    // cislo od 0 do 9;
    int nahodne_cislo = rand() % 10;
    
    int tip = -1;

    printf("Hadej, na jake cislo prave myslim! (od 0 do 9)\n");

    while (1)
    {
        printf("Muj tip: ");
        scanf("%d", &tip);
        
        if (tip == nahodne_cislo)
        {
            printf("Gratuluju! Presne tohle cislo jsem mel na mysli!\n");
            break;
        } else 
        {
            if (tip < nahodne_cislo)
            {
                printf("Tesne vedle. Ale poradim ti, moje cislo je o kousek vetsi.\n");
            } else
            {
                printf("Tak vysoko jsem ani nedopocital! Zkus to jeste jednou.\n");
            }
        }
    }

    return 0;
}