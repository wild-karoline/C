#include <stdio.h>

int main(void) {
    int stop = 1;
    int number = 5;

    printf("Licha cisla v internvalu [%d, %d] jsou: ", stop, number);
    for ( ; number >= stop; number--) {
        if (number % 2 == 0)
            continue;
        printf(" %d", number);
    }
    printf("\n");

    return 0;
}
