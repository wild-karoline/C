#include <stdio.h>

int main(void) {
    unsigned char a = 0;
    a -= 1;
    printf("%d\n", a);

    char b = 127;
    printf("%d\n", b + 1);

    char c = 567;
    printf("%d\n", c);

    return 0;
}
