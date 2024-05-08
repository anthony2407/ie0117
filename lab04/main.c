#include<stdio.h>
#include <stdbool.h>
#include "bit_to_bit_impl.c"
int main() {
    // Ya que mi carné es c14600 voy a poner el 4 y el 6
    printf("Operacion binaria AND de 4 y 6\n");
    print_binary(bitwise_and(4,6));
    printf("\n");
    printf("Operacion binaria OR de 4 y 6\n");
    print_binary(bitwise_or(4,6));
    printf("\n");
    printf("Operacion binaria XOR de 4 y 6\n");
    print_binary(bitwise_xor(4,6));
    printf("\n");
    printf("Operacion binaria NOT de 4\n");
    print_binary(bitwise_not(4));
    printf("\n");
    printf("Operacion binaria NOT de 6\n");
    print_binary(bitwise_not(6));
    
    return 0;

}


