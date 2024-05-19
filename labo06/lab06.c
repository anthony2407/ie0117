#include <stdio.h>
#include <stdlib.h>
#include "mcdImplementado.c" // incluir el archivo mcdImplementado.c



int main(int argc, char *argv[]) {
    if (argc==1)
    {
        printf("Error en la ejecución, el programa necesita dos entradas de numeros enteros positivos\n");// validación de argumentos
        exit(1); // terminar el programa
    }
    else if (argc >3) {
        printf("Error en la ejecución, el programa solo acepta dos entradas\n");// validación de argumentos
        exit(1); // terminar el programa
    }
    
    int x = atoi(argv[1]); // convertir de string a entero
    int y = atoi(argv[2]); // convertir de string a entero
    int resultado = mcd(x, y); // llamada a la función mcd
    
    printf("El máximo común divisor de %d y %d es: %d\n", x, y, resultado);
    return 0;
}
