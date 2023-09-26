#include <stdio.h>

#define MAX 15

int main(void)
{
    char jmeno[MAX];

    printf("Jmeno: ");
    fgets(jmeno, MAX, stdin);

    printf("Zadane jmeno: %s", jmeno);

    printf("Znaky v poli 'jmeno': \n");

    for (int znak = 0; znak < MAX; znak++)
    {
        printf("%d ", jmeno[znak]);
    }
    printf("\n");

    return 0;
}