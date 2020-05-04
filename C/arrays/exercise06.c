#include <stdio.h>

int main() {
    int fila, colum;
    char mat[3][2];

    mat[0][0] = 'X';
	mat[0][1] = 'O';
		
	mat[1][0] = 'O';
	mat[1][1] = 'X';

	mat[2][0] = 'X';
	mat[2][1] = 'X';

    printf("Elige una fila: ");
    scanf("%d", &fila);

    printf("Elige una columna: ");
    scanf("%d", &colum);

    printf("En la fila %d, columna %d, encontramos: %c\n", fila, colum, mat[fila-1][colum-1]);

    printf("Elige una fila: ");
    scanf("%d", &fila);

    printf("Elige una columna: ");
    scanf("%d", &colum);

    printf("En la fila %d, columna %d, encontramos: %c\n", fila, colum, mat[fila-1][colum-1]);

    return 0;
}