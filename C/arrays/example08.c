/*

Cadena de caracteres en arrays

*/

#include <stdio.h>

#define TAM 8

int main() {
    char nombre[TAM] = {'A', 'n', 'a'};
    char nombre1[TAM] = "Eddy";

    printf("Hola, %s.\n", nombre);
    printf("Hola, %s.", nombre1);

    return 0;
}