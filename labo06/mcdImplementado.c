#include "mcd.h" // incluir el archivo mcd.h donde se encuentra la declaración de la función mcd
#include <stdio.h>
// Acá se implementa la función mcd para ser utilizada en el archivo lab06.c
int mcd(int x, int y) {
    if (x < 0 || y < 0) { // validacion que los ingresos sean mayores a 
        printf("No se puede ejecutar, el programa solo acepta enteros positivos\n");
        return 1;
    }
    else if (x == 0 && y == 0) {
        printf("No se puede ejecutar, ambos números no pueden ser cero en este programa.\n");
        return 1;
    }
    if (y == 0) return x; // caso base
    return mcd(y, x % y); // llamada recursiva a la función mcd 
}