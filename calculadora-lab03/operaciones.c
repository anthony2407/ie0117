// Antony
#include <math.h>
#include "operaciones.h"
// Ejercicio realizado por antony
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