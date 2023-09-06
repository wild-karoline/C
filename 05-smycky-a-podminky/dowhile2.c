#include <stdio.h>

int main(void) {
    int n = 5;
    int factorial = 1;

    do 
        factorial *= n;
    while (--n);

    printf("Faktorial cisla 5 je %d\n", factorial);

    return 0;
}
