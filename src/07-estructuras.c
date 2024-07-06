/*
gcc src/07-estructuras.c -o build/07-estructuras
./build/07-estructuras
*/

#include <stdio.h>
#include <math.h>

#define PI 3.14159265

struct Punto {
    float x;
    float y;
};

void print_punto(struct Punto punto) {
    printf("[%.2f, %.2f]\n", punto.x, punto.y);
}

void escalar_punto(struct Punto *punto, float escalar) {
    // snake case
    // camel mase

    // si queremos editar la variable debemos pasarlo por
    // medio de un puntero
    punto->x = punto->x * escalar;
    punto->y = punto->y * escalar;
}

int main(void) {
    struct Punto p1 = { .x = 10.f, .y = 2.5f };

    print_punto(p1);

    escalar_punto(&p1, 2.f);

    print_punto(p1);

    return 0;
}
