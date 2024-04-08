#include <stdio.h>

int cuadrado(int n) {

    int resultado;
    resultado = n * n;

    return resultado;
}

void cuadradoVoid(int n) {

    int resultado;
    resultado = n * n;

    printf("%d\n", resultado);
}

void mostrarVariable(int variable) {

    printf("Direccion: %d\n", &variable);
    printf("Contenido: %d\n", variable);
}

void invertir(int a, int b) {

    int aux;
    aux = a;
    a = b;
    b = aux;

    printf("a = %d, b = %d\n", a, b);
}

void orden(int a, int b) {

    if (b > a)
    {
        
        int aux;
        aux = a;
        a = b;
        b = aux;

    }
    
    printf("mayor: %d, menor: %d", a, b);
}

int main() {

    int a = 5, b = 7;

    printf("funcion cuadrado: %d\n", cuadrado(a));
    printf("\nfuncion cuadradoVoid: ");
    cuadradoVoid(a);

    printf("\nfuncion mostrar variable:\n");
    mostrarVariable(a);

    printf("\nfuncion invertir: ");
    invertir(a, b);

    printf("\nfuncion orden: ");
    orden(a, b);

    return 0;
}