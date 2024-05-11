#include <stdio.h>
#include "operaciones_bit_to_bit.h"
// Implementación de las funciones declaradas en operaciones_bit_to_bit.h
int bitwise_and(int a, int b)
{
    return a & b;
};
int bitwise_or(int a, int b)
{
    return a | b;
};
int bitwise_xor(int a, int b)
{
    return a ^ b;
};
int bitwise_not(int a)
{
    return ~a;
};

void print_binary(int a)
{

    int listBinary[16];
    int contador = 0;
    // Para enteros positivos
    while (a > 0)
    {
        listBinary[contador] = a % 2;
        a = a / 2;
        contador++;
    }

    for (int i = contador - 1; i >= 0; i--)
    {
        printf("%d\t", listBinary[i]);
    }

    // Para enteros negativos
    if (a < 0)
    {
        a = ~a + 1;
        while (a > 0)
        {
            int binaryNumber = a % 2;
            listBinary[contador] = binaryNumber;
            a = a / 2;
            contador++;
        }
        for (int i = contador; i >=0 ; i--) // Invierte los valores del arreglo para que se muestre el número en binario correcto (complemento a 2)
        {   
            listBinary[i] =listBinary[i]==0?1:0; 
        }
        listBinary[0] = listBinary[0] + 1; // Suma 1 al número en binario

       

        for (int i = contador; i >= 0; i--) // Imprime el número en binario
        {
            printf("%d\t", listBinary[i]);
        }
    }
}
