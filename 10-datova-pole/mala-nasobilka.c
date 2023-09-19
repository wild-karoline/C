#include <stdio.h>

int main(void)
{
    int nasobilka[10][10];

    for (int radek = 0; radek < 10; radek++)
    {
        for (int sloupecek = 0; sloupecek < 10; sloupecek++)
        {
            nasobilka[radek][sloupecek] = (radek + 1) * (sloupecek + 1);
        }
    }

    for (int radek = 0; radek < 10; radek++)
    {
        for (int sloupecek = 0; sloupecek < 10; sloupecek++)
        {
            printf("%2d ", nasobilka[radek][sloupecek]);
        }
        printf("\n");
    }

    return 0;
}