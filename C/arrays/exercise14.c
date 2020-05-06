#include <stdio.h>
#include <string.h>

#define LON 256

int main() {
    char vector1[LON];
    char vector2[LON];

	printf("Introduce un string: ");
	fgets(vector1, LON, stdin);
	strcpy(vector2, vector1);

    printf("Lo almacenado en vector2 es: %s\n", vector2);

    printf("El valor de la comparacion es: %d\n", strcmp(vector1, vector2));

    return 0;
}