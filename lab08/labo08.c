#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Laboratorio 08 
// Antony Medina Garcia
// C14600
typedef struct // definición de la estructura
{
    // se definen los campos de la estructura
   char nombre[20]; 
   char apellidos[50];
   int telefono;
   char carnet[10];
   char enfasis[30];

} datos_persona;

void setDatos(datos_persona *persona){ // función para ingresar los datos de la persona que recibe como parámetro un puntero a la estructura
    // Se validan los datos ingresados
    printf("Ingrese el nombre: ");
    scanf("%s", persona->nombre);
    if(strlen(persona->nombre) > 20){ 
        printf("El nombre no puede tener más de 20 caracteres\n");
        exit(1);
    }
    getchar(); 

    printf("Ingrese los apellidos: ");
    scanf("%s", persona->apellidos);
    if(strlen(persona->apellidos) > 50){
        printf("Los apellidos no pueden tener más de 50 caracteres\n");
        exit(1);
    }
    getchar(); 

    printf("Ingrese el telefono: ");
    scanf("%d", &persona->telefono);
    if(persona->telefono < 10000000 || persona->telefono > 99999999){
        printf("El telefono debe tener 8 dígitos\n");
        exit(1);
    }
    getchar(); 

    printf("Ingrese el carnet: ");
    scanf("%s", persona->carnet);
    if(strlen(persona->carnet) > 10){
        printf("El carnet no puede tener más de 10 caracteres\n");
        exit(1);
    }
    getchar(); 

    printf("Ingrese el enfasis: ");
    scanf("%s", persona->enfasis);
    getchar(); 
}
void print_struct(datos_persona *persona){ // función para imprimir los datos de la persona que aparecen en la estructura
    printf("\n");
    printf("Nombre: %s\n", persona->nombre);
    printf("Apellidos: %s\n", persona->apellidos);
    printf("Telefono: %d\n", persona->telefono);
    printf("Carnet: %s\n", persona->carnet);
    printf("Enfasis: %s\n", persona->enfasis);
}

int main(int argc, char const *argv[])
{
    datos_persona personas[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese los datos de la persona %d\n", i+1);
        setDatos(&personas[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Datos de la persona %d\n", i+1);
        print_struct(&personas[i]);
    }
    
    
    return 0;
}



