/*
gcc src/03-condiciones.c -o build/03-condiciones
./build/03-condiciones
*/

int main(void) {
    int numero = 10;

    if (numero > 0) {
        // codigo si cumple la primera condicion
    } else if (numero < 0) {
        // codigo si cumple la segunda condicion
    } else {
        // codigo si no se cumple ninguna condicion
    }

    int valor = (numero == 10) ? 1 : 0; // expresión ternaria

    if (numero == 10 || (numero > 0 && numero != 10)) {
        // codigo si es verdadero
    } else {
        // codigo si es falso
    }

    return 0;
}
