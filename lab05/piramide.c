#include <stdio.h>
#include"funciones_piramide_impl.c"
#include<stdbool.h>
//Ejercicios de pirámides, laboratorio05, Antony Medina Garcia, C14600
int main(int argc, char const *argv[])
{
    //Variables a usar
    int numero;
    char simbolo;
    bool continuar = true;
    int opcion;
    int contador=0;
    while (continuar)
    {
       
        //Solicitamos los datos al usuario
        printf("%s","Bienvenido a la pirámide de simbolos\n");
        printf("%s","Opciones:\n");
        printf("%s","1. Pirámide normal\n");
        printf("%s","2. Pirámide invertida\n");
        printf("%s","Ingrese la opción que desea: \n");
        scanf("%d",&opcion);
        //Switch para seleccionar la opción
        switch (opcion) {
            case 1:
            printf("%s","Ingrese el simbolo que quiere que tenga la pirámide: \n");
            getchar();
            scanf("%c",&simbolo);
            printf("%s","Ingrese la cantidad de pisos que quiere que tenga la pirámide: \n");
            scanf("%d",&numero);
            piramide_normal(numero,simbolo);
            break;
            case 2:
            printf("%s","Ingrese el simbolo que quiere que tenga la pirámide: \n");
            getchar();
            scanf("%c",&simbolo);
            printf("%s","Ingrese la cantidad de pisos que quiere que tenga la pirámide: \n");
            scanf("%d",&numero);
            piramide_invertida(numero,simbolo);
            break;
            default: //En caso de que la opción no sea ni uno ni dos
            printf("%s","Opción no válida\n");
            break;
        }
        contador++; //Contador para saber si se ha ejecutado al menos una vez el programa
        
        if (contador>=1) // Si se ha ejecutado al menos una vez el programa se pregunta si se desea continuar
        {
            printf("%s","\nDesea continuar?\n");
            printf("%s","1. Si\n");
            printf("%s","2. No\n");
            scanf("%d",&opcion);
            if(opcion==2){
                continuar = false;
            }
        }

    }
    
   
    return 0;
}
