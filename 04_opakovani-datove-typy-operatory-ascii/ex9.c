#include <stdio.h>

int main(void) {
    int a = 1;
    int b = 1;
    int c = 1;
    printf("a = %d, b = %d, c = %d\n", a, ++b, c++);
    printf("c = %d\n", c);
    return 0;
}
