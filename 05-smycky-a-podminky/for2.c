#include <stdio.h>

int main(void) {
    int factorial = 1;
    for (int n = 6; --n > 0; ) {
        factorial *= n;
    }

    printf("Faktorial cisla 5 je %d\n", factorial);

    return 0;
}
