#include <stdio.h>

int main() {
    int fila, colum;
    char matriz[3][2] = {{'X', 'O'}, {'O', 'X'}, {'X', 'X'}};

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