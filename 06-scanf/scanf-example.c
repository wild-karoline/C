#include <stdio.h>

int main(void)
{
    unsigned int pin = 9999;
    unsigned int user_input = 0;

    int try = 0;

    do
    {
        printf("Zadejte Vas PIN prosim: ");
        scanf("%u", &user_input);

        if (user_input != pin) 
        {
            printf("Nespravny PIN.\n");
        } 
        try++;
    } while (pin != user_input && try < 3);

    if (try < 3) 
    {
        printf("Vitejte!\n");
    }
    else 
    {
        printf("Pristup zablokovan.\n");
    }
    
    return 0;
}
