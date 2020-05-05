#include <stdio.h>
#include <string.h>

#define LON 8

int main() {
    int var;
    char vector[LON];

    printf("Escriba una palabra: ");
    scanf("%s", vector);
    printf("Longitud de la palabra: %d\n", strlen(vector));

    printf("Recorte la palabra con un entero: ");
    scanf("%d", &var);

    vector[var-1] = 0;
    printf("La palabra recortada es: %s\n", vector);
    printf("Nueva longitud: %d", var);


    return 0;
}