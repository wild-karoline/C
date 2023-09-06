#include <stdio.h>

int main(void)
{
    int x = 10;
    int y = 15;

    printf("Posuzovana cisla: %d a %d\n", x, y);
    printf("Max je: %d\n", x > y ? x : y);

    return 0;
}
