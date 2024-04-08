#include <stdio.h>

int main() {

    printf("hola mundo\n");

    int variable = 10;
    int *puntero = &variable;

    printf("1. Contenido del puntero: %d\n", *puntero);
    printf("2. Direccion de memoria almacenada por el puntero: %d\n", puntero);
    printf("3. Direccion de memoria de la variable: %d\n", &variable);
    printf("4. Direccion de memoria del puntero: %d\n", &puntero);
    printf("5. Tamano de memoria usado por la variable: %d\n", sizeof(variable));

    return 0;
}