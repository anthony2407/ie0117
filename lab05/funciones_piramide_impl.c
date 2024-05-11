#include<stdio.h>
#include "funciones_piramides.h"

void piramide_normal(int numero,char simbolo){
    for (int i = 0; i <= numero; i++)
    {
        printf("\n");
        for (int x = 0; x < numero -i; x++) { // Este ciclo se repite para imprimir la cantidad de espacios empezando desde el numero máximo de espacios que puede tener que serían el valor ingresado -1 y reduciéndolos de uno en uno a medida que i crece
            printf(" ");
        }
        for (int j =0 ; j<i+1; j++){ // Este ciclo funciona de similar al de arriba solo que aumenta hasta alcanzar el valor de i+1 y asi vuelve a empezar el conteo para imprimir la cantida de ceros
            if(i%2==0){
                printf(" %c",simbolo);
            }
        }
       
    }
       
    }


//Función que imprime una pirámide invertida
void piramide_invertida(int numero,char simbolo){
     for (int i = 0; i <= numero; i++)
    {
        printf("\n");
        for (int x = 0; x <i+1; x++) { // Este ciclo se repite para imprimir la cantidad de espacios empezando desde el numero mínimo de espacios que puede tener que serían 0 y aumentándolos de uno en uno a medida que i+1 crece y x lo alcanza para reiniciar el ciclo
            printf(" ");
        }
        for (int j =0 ; j<=numero-i; j++){ // Este ciclo funciona de similar al de arriba solo que aumenta hasta alcanzar el valor de numero menos la cantidad que i ha aumentado en dicha iteración            
            if(i%2==0){ // Se verifica si i es par para imprimir el simbolo en repeticiones impares
                printf(" %c",simbolo);
            }
        }
       
    }
    

}