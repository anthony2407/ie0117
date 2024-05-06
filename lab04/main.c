#include<stdio.h>
#include <stdbool.h>
#include "bit_to_bit_impl.c"
// Ejercicio realizado por antony, utlicé una lógica nuy parecida a la del laboratorio anterior
int main() {
    int a, b;
    int resultado;
    bool condicion=true;
    int opcion;


    while (condicion){
        printf("Seleccione una operación:\n");
        printf("1. And\n");
        printf("2. OR\n");
        printf("3. XOR\n");
        printf("4. NOT\n");
        printf("5. Decimal a binario\n");
        printf("6. Salir\n");
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1:
            printf("Ingrese dos números enteros: ");
            scanf("%d %d", &a, &b);
            resultado = bitwise_and(a, b);
            printf("La operacion AND es: %d\n", resultado);
            break;
        case 2:
            printf("Ingrese dos números enteros: ");
            scanf("%d %d", &a, &b);
            resultado = bitwise_or(a, b);
            printf("La operacion OR es: %d\n", resultado);
            break;
        case 3:
            printf("Ingrese dos números enteros: ");
            scanf("%d %d", &a, &b);
            resultado = bitwise_xor(a, b);
            printf("La operacion XOR es: %d\n", resultado);
            break;
        case 4:
            printf("Ingrese un número entero: ");
            scanf("%d", &a);
            resultado = bitwise_not(a);
            printf("La operacion NOT es: %d\n", resultado);
            break;
        case 5:
            printf("Ingrese un número entero: ");
            scanf("%d", &a);
            print_binary(a);
            break;
        case 6:
            condicion=false;
            break;
    }
    }
    
    return 0;

}


