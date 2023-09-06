#include <stdio.h>

int main(void) {
    int factorial = 1;
    for (int n = 5; n > 0; n--) {
        factorial *= n;
    }

    printf("Faktorial cisla 5 je %d\n", factorial);

    return 0;
}
