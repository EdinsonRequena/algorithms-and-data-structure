#include <stdio.h>
#include <string.h>

int main() {
    char vector1[256];
    char vector2[256];

	printf("Introduce un string: ");
	fgets(vector1, 256, stdin);
	strcpy(vector2, vector1);

    printf("Lo almacenado en vector2 es: %s\n", vector2);

    printf("El valor de la comparacion es: %d\n", strcmp(vector1, vector2));

    return 0;
}