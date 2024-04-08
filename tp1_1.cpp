#include <stdio.h>

int main() {

    printf("hola mundo\n");

    int variable = 10;
    int *puntero = &variable;

    printf("Contenido del puntero: %d\n", *puntero);
    printf("Direccion de memoria almacenada por el puntero: %d\n", puntero);
    printf("Direccion de memoria de la variable: %d\n", &variable);
    printf("Direccion de memoria del puntero: %d\n", &puntero);
    printf("Tamano de memoria usado por la variable: %d\n", sizeof(variable));

    return 0;
}