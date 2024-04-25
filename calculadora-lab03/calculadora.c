#include<stdio.h>
#include "operaciones.h"
#include <math.h>
#include <stdbool.h>
// Ejercicio realizado por antony
int main() {
    int a, b;
    int resultado;
    float resultado_division;
    long resultado_potencia;
    bool condicion=true;
    int opcion;


    while (condicion){
        printf("Seleccione una operación:\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multiplicación\n");
        printf("4. División\n");
        printf("5. Módulo\n");
        printf("6. Potencia\n");
        printf("7. Par o impar\n");
        printf("8. Salir\n");
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1:
            printf("Ingrese dos números enteros: ");
            scanf("%d %d", &a, &b);
            resultado = suma(a, b);
            printf("La suma es: %d\n", resultado);
            break;
        case 2:
            printf("Ingrese dos números enteros: ");
            scanf("%d %d", &a, &b);
            resultado = resta(a, b);
            printf("La resta es: %d\n", resultado);
            break;
        case 3:
            printf("Ingrese dos números enteros: ");
            scanf("%d %d", &a, &b);
            resultado = multiplicacion(a, b);
            printf("La multiplicación es: %d\n", resultado);
            break;
        case 4:
            printf("Ingrese dos números enteros: ");
            scanf("%d %d", &a, &b);
            resultado_division = division(a, b);
            printf("La división es: %f\n", resultado_division);
            break;
        case 5:
            printf("Ingrese dos números enteros: ");
            scanf("%d %d", &a, &b);
            resultado = modulo(a, b);
            printf("El módulo es: %d\n", resultado);
            break;
        case 6:
            printf("Ingrese dos números enteros: ");
            scanf("%d %d", &a, &b);
            resultado_potencia = potencia(a, b);
            printf("La potencia es: %ld\n", resultado_potencia);
            break;
        case 7:
            printf("Ingrese un número entero: ");
            scanf("%d", &a);
            resultado = par_impar(a);
            if (resultado == 1)
            {
                printf("El número es par\n");
            }
            else
            {
                printf("El número es impar\n");
            }
            break;
        case 8:
            condicion = false;
            break;

        default:
            break;
        }
    }
    
    return 0;
}

// Antony
int par_impar(int a){
    if (a%2==0){
        return 1;
    }else{
        return 0;
    }
}
int suma(int a, int b){
    return a+b;
}
int resta(int a, int b){
    return a-b;
}
int multiplicacion(int a, int b){
    return a*b;
}
float division(int a, int b){
    return (float) a/b;
}
int modulo(int a, int b){
    return a%b;
}
long potencia(int a, int b){
    return pow(a,b);
}
