#include <stdio.h>

int main(void) 
{
    int cislo = 5;

    printf("Cislo je sude: %s\n", (cislo % 2 == 0) ? "ANO" : "NE");

    return 0;
} 
