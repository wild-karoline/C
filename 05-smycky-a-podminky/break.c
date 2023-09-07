#include <stdio.h>

int main(void) {
    int number = 5;
    int stop = 1;

    while (1) {
        if (number % 2 == 0) 
            printf("Pong\n");
        else 
            printf("Ping\n");

        number--;
        if (number == stop) 
            break;
    }

    return 0;
}
