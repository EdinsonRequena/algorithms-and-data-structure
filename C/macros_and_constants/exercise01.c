/*

Write a program that calculates the user's weight on other planets.

For example:

Enter your weight: 71.5
Your weight on Earth is: 71.50 kg.
Your weight on the moon is: 11.83 kg.
Your weight on Mars is: 27.85 kg.
Your weight on Jupiter is: 188.76 kg.
Your weight on the planet Miller: is 92.95 kg.
Your weight in Pandora is: 57.20 kg.
Your weight in Vulcano is: 100.10 kg.

*/

#include <stdio.h>

int main() {
    double jupiter = 24.55, venus = 8.87, urano = 8.887, marte = 3.71, mercurio = 3.7, tierra = 9.8,saturno = 10.44, neptuno = 11.15;
    double peso, masa;

    printf("--------Know your weight in another planets-------\n");

    printf("What's your weight on earth?: \n");
    scanf("%lf", &masa);

    peso = (masa * jupiter) / tierra;
    printf("Your weight in jupiter is:%lf\n", peso);

    peso = (masa * venus) / tierra;
    printf("Your weight in jupiter is:%lf\n", peso);

    peso = (masa * urano) / tierra;
    printf("Your weight in urano is:%lf\n", peso);

    peso = (masa * marte) / tierra;
    printf("Your weight in mars is:%lf\n", peso);

    peso = (masa * mercurio) / tierra;
    printf("Your weight in mercury is:%lf\n", peso);

    peso = (masa * saturno) / tierra;
    printf("Your weight in saturn is:%lf\n", peso);

    peso = (masa * neptuno) / tierra;
    printf("Your weight in neptune is:%lf\n", peso);

    return 0;
}