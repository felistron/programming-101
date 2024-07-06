/*
gcc src/04-bucles.c -o build/04-bucles
./build/04-bucles
*/

#include <stdbool.h>

int main(void) {
    for (int i = 0; i < 10; i++) {
        // este codigo se repetira 10 veces
    }

    int i = 0;

    while (i < 10) {
        // este codigo se repetira 10 veces
        i++;
    }

    while (true) {
        // este codigo se repetira indefinidamente
        break; // o hasta que se le obligue a detenerse
    }

    for (;;) {
        break;
    }

    do {
        // este codigo se ejecutara por lo menos una vez
    } while (0); // 1 = true; 0 = false

    return 0;
}
