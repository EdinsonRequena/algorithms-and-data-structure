#include <stdio.h>

#define PLAYER1 5
#define PLAYER2 5
#define PLAYER3 5

int main() {
    float vector1[PLAYER1] = {123.77, 88.9, 110.05, 70, 45.01};
    float operacion1 = (vector1[0] + vector1[1] + vector1[2] + vector1[3] + vector1[4]) / 5;

    float vector2[PLAYER2] = {88.77, 95.9, 265.05, 100, 200.01};
    float operacion2 = (vector2[0] + vector2[1] + vector2[2] + vector2[3] + vector2[4]) / 5;

    float vector3[PLAYER3] = {200.77, 255.9, 10.05, 8, 300.01};
    float operacion3 = (vector3[0] + vector3[1] + vector3[2] + vector3[3] + vector3[4]) / 5;

    printf("Your average wiht player1 is: %f\n", operacion1);
    printf("Your average wiht player2 is: %f\n", operacion2);
    printf("Your average wiht player3 is: %f\n", operacion3);

    return 0;
}