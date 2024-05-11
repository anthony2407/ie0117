#include<stdio.h>

int main(int argc, char const *argv[])
{
    FILE *file; // puntero que hace referencia al archivo a abrir
    char fileName[]="ejemplos.txt"; // nombre del archivo
    file = fopen(fileName, "r");
    if (file == NULL) {
        printf(stderr,"Error al abrir el archivo\n"); // si no lo encuentra no crea una nuevo gracias al stderr
        return 1;
    }
    //fprintf(file, "Hola mundo en el archivo de nombre %s\n",fileName);
    printf(fscanf(file,"%s"));
    fclose(file);
    return 0;
}
