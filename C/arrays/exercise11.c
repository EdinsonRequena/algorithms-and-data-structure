#include <stdio.h>
#include <string.h>

#define LON 256

int main() {
    char vector1[LON];
    char vector2[LON];

	printf("Introduce un string: ");
	fgets(vector1, LON, stdin);
	printf("haz introdicido %s", vector1);

	printf("Introduce otro string: ");
    fgets(vector2, LON, stdin);
	printf("haz introdicido %s", vector2);

    printf("%d", strcmp(vector1, vector2));

    return 0;
}