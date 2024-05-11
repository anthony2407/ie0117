#include <stdio.h>
#include"funciones_piramide_impl.c"
#include<stdbool.h>
int main(int argc, char const *argv[])
{
    int numero;
    char simbolo;
    bool continuar = true;
    int opcion;
    int contador=0;
    while (continuar)
    {
       
        
        printf("%s","Bienvenido a la pirámide de simbolos\n");
        printf("%s","Opciones:\n");
        printf("%s","1. Pirámide normal\n");
        printf("%s","2. Pirámide invertida\n");
        printf("%s","Ingrese la opción que desea: \n");
        scanf("%d",&opcion);
        
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
            default:
            printf("%s","Opción no válida\n");
            break;
        }
        contador++;
        
        if (contador>=1)
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
