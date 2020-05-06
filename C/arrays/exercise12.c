#include <stdio.h>
#include <string.h>

#define LON 256

int main() {
    char vector1[LON];
    char vector2[LON];
    int dif;

	printf("Introduce un string: ");
	fgets(vector1, LON, stdin);
	printf("haz introdicido %s", vector1);

	printf("Introduce otro string: ");
    fgets(vector2, LON, stdin);
	printf("haz introdicido %s", vector2);

    dif=strcmp(vector1, vector2);
    printf("El valor devuelto por la comparación de las cadenas es: %d", dif);

    return 0;
}