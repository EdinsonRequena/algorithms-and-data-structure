#include <stdio.h>

#define TABLE 3

int main() {
    int datos[TABLE];

    datos[0] = 5;

    printf("Enter a number: ");
    scanf("%d", &datos[1]);

    datos[2] = (datos[0] + datos[1])*2;

    printf("The first element on the array is: %d\n", datos[0]);
    printf("The thrid element on the array is: %d\n", datos[2]);
    printf("The number entered by the user was: %d", datos[1]);

    return 0;
}