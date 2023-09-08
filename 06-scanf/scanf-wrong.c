#include <stdio.h>

int main(void)
{
    unsigned int pin = 987654321;
    unsigned int user_input = 0;

    printf("Zadejte Vas PIN prosim: ");
    scanf("PIN: %u", &user_input);

    if (user_input == pin) 
    {
        printf("Welcome!\n");
    } else 
    {
        printf("Nespravny PIN.\n");
    }

    return 0;
}
