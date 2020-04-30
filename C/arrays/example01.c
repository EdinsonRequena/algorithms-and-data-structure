/*

Inicializando tablas

*/

#include <stdio.h>

#define TABLE1 3
#define TABLE2 5

int main() {

    int datos[TABLE1] = {5, 10, 8}; // La dimension de datos contiene 3 elementos donde el elemento 0 es el entero 5
                                    // el elemento 1 es el 10 y el elemento 2 es el 8
    
    int datos1[] = {5, 10, 8} // Si la dimension de la tabla no se especifica al inicializarla el compilador calculara la dimension 
                              //segun el numero de inicializadores. Es decir datos1 contiene 3 elementos donde el elemento 0 es el
                              //entero 5, el elemento 1 es el 10 y el elemento 2 el el 8
    
    int datos2[TABLE2] = {5, 10, 8} // Si el numero de inicializadores es inferior a la dimension de la tabla el compilador interpreta
                                    // que estos inicializadores son los primeros elementos de la tabla y el restante se ponen a 0
                                    // {5, 10, 8, 0, 0}

    return 0;
}