/*
gcc src/05-funciones.c -o build/05-funciones
./build/05-funciones
*/

#include <stdio.h>

int sumar(int a, int b) {
    return a + b;
}

int restar(int a, int b);

void saludar(char *nombre) {
    printf("Hola %s!\n", nombre);
}

int main(void) {
    int numero = sumar(10, 40);
    numero = restar(numero, 7);

    saludar("Fernando");

    return 0;
}

int restar(int a, int b) {
    return a - b;
}
