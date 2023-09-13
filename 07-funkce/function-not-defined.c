#include <stdio.h>

int main(void)
{
    int x = 10;
    int y = 15;
    int max = getMax(x, y);

    printf("Vetsi z cisel x = %d a y = %d je %d\n", x, y, max);
    printf("Funkci muzeme pouzit i primo v printf: %d\n", getMax(10, 15));

    return 0;
}

int getMax(int nr1, int nr2)
{
    if (nr1 > nr2) 
    {
        return nr1;
    } 
    
    return nr2;
}
