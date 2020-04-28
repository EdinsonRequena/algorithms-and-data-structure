/*

Write a program that calculates the user's weight on other planets.

For example:

Enter your weight: 71.5
Your weight on Jupiter is: 179.114796 kg.
Your weight on the moon is: 11.83 kg.
Your weight on Mars is: 27.85 kg.
Your weight on Jupiter is: 188.76 kg.
Your weight on Saturn: is 92.95 kg.
Your weight in Neptune is: 57.20 kg.
Your weight in Mercury is: 100.10 kg.

*/

#include <stdio.h>

#define LUNA 0.1655
#define MARTE 0.3895
#define JUPITER 2.640
#define MILLER 1.3
#define PANDORA 0.8
#define VULCANO 1.4

int main() {
    double peso;

    printf("Introduce tu peso: ");
    scanf("%lf", &peso);
   
	printf("Tu peso en la Tierra es %.2lf kg.\n", peso);
	printf("Tu peso en la luna es %.2lf kg.\n", peso*LUNA);
	printf("Tu peso en Marte es %.2lf kg.\n", peso*MARTE);
	printf("Tu peso en Júpiter es %.2lf kg.\n", peso*JUPITER);
	printf("Tu peso en el planeta Miller es %.2lf kg.\n", peso*MILLER);
	printf("Tu peso en Pandora es %.2lf kg.\n", peso*PANDORA);
	printf("Tu peso en Vulcano es %.2lf kg.\n", peso*VULCANO);
    
    return 0;
}