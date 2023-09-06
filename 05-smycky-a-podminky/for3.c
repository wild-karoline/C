#include <stdio.h>

int main(void) {
    int factorial = 1;
    int n = 6;
    
    for ( ; --n; factorial *= n);

    printf("Faktorial cisla 5 je %d\n", factorial);

    return 0;
}
