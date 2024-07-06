/*
gcc src/02-variables.c -o build/02-variables
./build/02-variables
*/

//#include <stdbool.h>

int main(void) {
    short entero_corto = 1; // 2 bytes
    int entero = 0; // 4 bytes
    long entero_largo = 500; // 8 bytes

    float punto_flotante = 1.5f; // 4 bytes
    double doble_precision = 3.14159265f; // 8 bytes

    char caracter = 1; // 1 byte
    //bool booleano; // 1 byte

    signed int entero_con_signo = -12; // 4 bytes
    unsigned int entero_sin_signo = 2; // 4 bytes

    double arreglo[6] = { 1, 2, 3, 4, 5, 6 }; // 8 * 6 = 48 bytes

    int *puntero = &entero; // 8 bytes

    return 0;
}
