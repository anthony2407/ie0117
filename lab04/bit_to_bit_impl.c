#include<stdio.h>
#include "operaciones_bit_to_bit.h"
// Implementación de las funciones declaradas en operaciones_bit_to_bit.h
int bitwise_and(int a, int b){
    return a&b;
};
int bitwise_or(int a, int b){
    return a | b;
};
int bitwise_xor(int a, int b){
    return a^b;
};
int bitwise_not(int a){
    return !a;
};

void print_binary(int a){
   short binaryNumber[16];//se declara un arreglo de 16 elementos
   int contador=0;
   int aux=a;
   
   while(aux>0 && a!=1){ // mientras a sea mayor a 0 y diferente de 1
    binaryNumber[contador]=aux%2;// a cada posicion del arreglo se le asigna el residuo de la division de a entre 2
    aux=aux/2;// se divide a entre 2 que eventualmente sera 0
    contador++;
    }
    if(a==1) // si a es igual a 1
    {
        printf("El numero binario es \n");
        printf("\t 0     1");
    }
    else{  
        printf("El numero binario es \n");
        for (int j = contador-1; j >=0; j--) // recorre el arreglo de manera inversa
        {
            printf("\t%d",binaryNumber[j]); // imprime el valor de cada posicion diferente de laspor default del arreglo
        }
        }
  
};
