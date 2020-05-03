#include <stdio.h>

int main() {
    float matriz[3][5];

    matriz[0][0] = 200.0;
    matriz[0][1] = 67.05;
    matriz[0][2] = 145.60;
    matriz[0][3] = 100.45;
    matriz[0][4] = 88.50;

    matriz[1][0] = 300.0;
    matriz[1][1] = 799.05;
    matriz[1][2] = 10.60;
    matriz[1][3] = 5.45;
    matriz[1][4] = 8.50;

    matriz[2][0] = 55.0;
    matriz[2][1] = 345.05;
    matriz[2][2] = 148.60;
    matriz[2][3] = 110.45;
    matriz[2][4] = 88.50;

    float op1 = (matriz[0][0] + matriz[0][1] + matriz[0][2] + matriz[0][3] + matriz[0][4]) / 5;
    float op2 = (matriz[1][0] + matriz[1][1] + matriz[1][2] + matriz[1][3] + matriz[1][4]) / 5;
    float op3 = (matriz[2][0] + matriz[2][1] + matriz[2][2] + matriz[2][3] + matriz[2][4]) / 5;

    printf("Your average wiht player1 is: %f\n", op1);
    printf("Your average wiht player2 is: %f\n", op2);
    printf("Your average wiht player3 is: %f\n", op3);

    return 0;
}