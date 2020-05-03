#include <stdio.h>

#define JUGADORES 3
#define PARTIDAS 5

int main() {
    float matriz[JUGADORES][PARTIDAS] = {{123.77, 88.9, 110.05, 70, 45.01}, {88.77, 95.9, 265.05, 100, 200.01}, {200.77, 255.9, 10.05, 8, 300.01}};
    float op1 = (matriz[0][0] + matriz[0][1] + matriz[0][2] + matriz[0][3] + matriz[0][4]) / PARTIDAS;
    float op2 = (matriz[1][0] + matriz[1][1] + matriz[1][2] + matriz[1][3] + matriz[1][4]) / PARTIDAS;
    float op3 = (matriz[2][0] + matriz[2][1] + matriz[2][2] + matriz[2][3] + matriz[2][4]) / PARTIDAS;

    printf("Your average wiht player1 is: %f\n", op1);
    printf("Your average wiht player2 is: %f\n", op2);
    printf("Your average wiht player3 is: %f\n", op3);

    return 0;
}