#include <stdio.h>

int main(void)
{
    int cislo = 11;

    if (cislo >= 0 && cislo <= 10) {
        printf("Zadane cislo %d je v intervalu 0-10!\n", cislo);
    }

    return 0;
}
