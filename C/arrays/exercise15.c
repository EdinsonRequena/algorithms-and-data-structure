/*

Vamos a escribir un programa más complejo que nos permita jugar con cadenas de caracteres. Para ello, vamos a solicitar al usuario una cadena de caracteres, que vamos a copiar en otra variable, para después comparar ambas variables.


-----------------------------resuelto por pasos------------------------------

1) Definir una constante a la cual le pasaremos por valor la longitud de los vectores que crearemos mas adelante (opcional)

2) Crear dos vectores, en uno de ellos almacenaremos la cadena de texto que ingresara el usuario y en el otro copiaremos esa cadena de texto
	a) ejemplo de codigo
		*) char vector1[10]
		*) char vector2[10]

3) Copiar al segundo vector la cadena que el usuario a ingresado en el primero.
	a) ejemplo de codigo.
		*) printf("Introduce un string: ");
		*) fgets(vector1, 10, stdin);
		*) strcpy(vector1, vector2);
	
	b) mostrar por pantalla lo que se ha compiado en el segundo vector
		*) printf("vector2=%s", vector2)

4) Mostrar por pantalla el valor numerico de la comparacion. Si todo esta ok el valor deberia de ser 0
	a) Ejemplo de codigo
		*) printf("%d", strcmp(vector1, vector2));

*/

#include <stdio.h>
#include <string.h>

int main() {
    char vector1[256];
    char vector2[256];

	printf("Introduce un string: ");
	fgets(vector1, 256, stdin);
	strcpy(vector2, vector1);

    printf("Lo almacenado en vector2 es: %s\n", vector2);

    printf("El valor de la comparacion es: %d\n", strcmp(vector1, vector2));

    return 0;
}