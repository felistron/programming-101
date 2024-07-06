/*
gcc src/06-punteros.c -o build/06-punteros
./build/06-punteros
*/

#include <stdio.h>

int main() {
    int numero = 300;
    int *puntero = &numero;

    int *heap = malloc(4);

    free(heap);

    printf("numero = \n", numero);
    printf("puntero = %p\n", puntero);
    printf("*puntero = %d\n", *puntero);

    char *cadena1 = "Hola";
    char cadena2[] = "mundo";

    int numeros[] = { 0, 2, 4, 6};

    printf("numero = %d\n", numeros[100000]);

    printf("cadena1\n");
    for (int i = 0; i < 4; i++) {
        printf("%p -> %c\n", cadena1 + i, cadena1[i]);
    }

    printf("\ncadena2\n");
    for (int i = 0; i < 5; i++) {
        printf("%p -> %c\n", cadena2 + i, cadena2[i]);
    }

    printf("\nnumeros\n");
    for (int i = 0; i < 4; i++) {
        printf("%p -> %d\n", numeros + i, numeros[i]);
    }

    return 0;
}
