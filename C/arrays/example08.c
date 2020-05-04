/*

Cadena de caracteres en arrays

*/

#include <stdio.h>

#define TAM 8

int main() {
    char nombre[TAM] = {'A', 'n', 'a'}; // Elemento a elemento
    char nombre1[TAM] = "Eddy"; // Conjunto

//  todos los del array que no se especifican automaticamente con el codigo ASCII 0 (NULL)

    printf("Hola, %s.\n", nombre);
    printf("Hola, %s.", nombre1);

    return 0;
}