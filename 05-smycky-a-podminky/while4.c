#include <stdio.h>

int main(void) {
    int n = 0;
    int factorial = 1;

    while (n++ <= 5) {
        factorial *= n;
    }

    printf("Faktorial cisla 5 je %d\n", factorial);
    return 0;
}
