#include <stdio.h>

int main(void) {
    int n = 5;
    int factorial = 1;

    while (n > 0) {
        factorial *= n;
        n--;
    }

    printf("Faktorial cisla 5 je %d\n", factorial);
    return 0;
}
