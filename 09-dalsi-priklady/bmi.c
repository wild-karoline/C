#include <stdio.h>

// Funkce pro samotny vypocet BMI na zaklade vysky a vahy
float vypocetBmi(float vaha, float vyska)
{
    return vaha / (vyska / 100 * vyska / 100);
}

// Funkce, ktera na zaklade BMI vytiskne na konzoli odpovidajici kategorii
void vysledekKategorie(float bmi)
{
    printf("Kategorie: \n");
    if (bmi < 18.5)
    {
        printf("\tpodvaha\n");
    } else if (bmi < 24.9)  
    {
        printf("\tnorma\n");
    } else if (bmi < 29.9)
    {
        printf("\tnadvaha\n");
    } else if (bmi < 34.9)
    {
        printf("\tobezita 1. stupne\n");
    } else if (bmi < 39.9)
    {
        printf("\tobezita 2. stupne (zavazna)\n");
    } else
    {
        printf("\tobezita 3. stupne (tezka)\n");
    }
}

// Funkce, ktera na zaklade BMI vytiskne na konzoli odpovidajici
//   zdravotni rizika
void vysledekZdravotniRizika(float bmi)
{
    printf("Zdravotni rizika: \n");
    if (bmi < 18.5)
    {
        printf("\tvysoka\n");
    } else if (bmi < 24.9)  
    {
        printf("\tminimalni\n");
    } else if (bmi < 29.9)
    {
        printf("\tnizka az lehce vyssi\n");
    } else if (bmi < 34.9)
    {
        printf("\tzvysena\n");
    } else if (bmi < 39.9)
    {
        printf("\tvysoka\n");
    } else
    {
        printf("\tvelmi vysoka\n");
    }
}

// Kratka funkce na tisk uvitaciho textu na konzoli
void vitej()
{
    printf("--------------\n");
    printf("BMI KALKULACKA\n");
    printf("--------------\n");
}

int main(void)
{
    vitej();

    float vaha;
    printf("Vaha (v kg): ");
    scanf("%f", &vaha);

    float vyska;
    printf("Vyska (v cm): ");
    scanf("%f", &vyska);

    float bmi = vypocetBmi(vaha, vyska);

    printf("BMI:\n\t%.2f\n", bmi);
    vysledekKategorie(bmi);
    vysledekZdravotniRizika(bmi);

    return 0;
}