#include <stdio.h>

#define FIL 2
#define COLUMNA 3

int main() {
    int fila, colum;
    char matriz[COLUMNA][FIL] = {{'X', 'O'}, {'O', 'X'}, {'X', 'X'}};

    printf("Elige una fila: ");
    scanf("%d", &fila);

    printf("Elige una columna: ");
    scanf("%d", &colum);

    printf("En la fila %d, columna %d, encontramos: %c\n", fila, colum, matriz[fila-1][colum-1]);

    printf("Elige una fila: ");
    scanf("%d", &fila);

    printf("Elige una columna: ");
    scanf("%d", &colum);

    printf("En la fila %d, columna %d, encontramos: %c\n", fila, colum, matriz[fila-1][colum-1]);

    return 0;
}