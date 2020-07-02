/*

Tema: Definiendo tipos de datos.
Curso: Algoritmia
Plataforma: Platzi
Profesor: Ricardo Celis
Alumno: @edinsonrequena

*/

#include "stdlib.h"
#include "stdio.h"
#include "string.h"

struct client
{
    char name[50];
    char id[10];
    float credit;
    char address[100];
};

int main()
{
    struct client client1 = {0};
    strcpy(client1.name , "Andrea Vinas");
    strcpy(client1.id , "0000000001");
    client1.credit = 1000000;
    strcpy(client1.address , "Colombia, Boyaca");

    printf("The client name is: %s \n", client1.name);
    printf("The client Id is: %s \n", client1.id);
    printf("The client Credit is: %f \n", client1.credit);
    printf("The client Address is: %s \n", client1.address);


    return 0;
}
