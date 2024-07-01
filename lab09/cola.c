#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Definición de la estructura nodo que almacena un entero y un puntero al siguiente nodo.
typedef struct nodo
{
    int dato; // Valor almacenado en el nodo.
    struct nodo *sgte; // Puntero al siguiente nodo en la cola.
} nodo;

// Definición de la estructura cola que almacena punteros al frente y al final de la cola.
typedef struct
{
    nodo *frente; // Puntero al primer nodo de la cola.
    nodo *final; // Puntero al último nodo de la cola.
} cola;

// Función para crear un nuevo nodo con un dato específico.
// Parámetro: dato - el valor a almacenar en el nodo.
// Retorna: un puntero al nuevo nodo creado.
nodo *nodonuevo(int dato)
{
    nodo *nuevoNodo = (nodo *)malloc(sizeof(nodo)); // Asignación dinámica de memoria para el nuevo nodo.
    nuevoNodo->dato = dato; // Establece el valor del dato.
    nuevoNodo->sgte = NULL; // El siguiente nodo es NULL, ya que es el último nodo actualmente.
    return nuevoNodo; // Retorna el nuevo nodo.
}

// Función para crear una cola vacía.
// Retorna: un puntero a la cola recién creada.
cola *crearcola()
{
    cola *nuevaCola = (cola *)malloc(sizeof(cola)); // Asignación dinámica de memoria para la cola.
    nuevaCola->frente = nuevaCola->final = NULL; // Inicializa la cola vacía.
    return nuevaCola; // Retorna la nueva cola.
}

// Función para agregar elementos al final de la cola (enqueue).
// Parámetros: cola - un puntero a la cola donde se agregará el elemento.
//             dato - el valor a agregar a la cola.
void enqueue(cola *cola, int dato)
{
    nodo *new_node = nodonuevo(dato); // Crea un nuevo nodo con el dato.
    if (cola->frente == NULL) // Si la cola está vacía.
    {
        cola->frente = new_node; // El nuevo nodo es ahora el frente y el final de la cola.
        cola->final = new_node;
    }
    else
    {
        cola->final->sgte = new_node; // Enlaza el nuevo nodo al final de la cola.
        cola->final = new_node; // Actualiza el final de la cola al nuevo nodo.
    }
}

// Función para quitar elementos del frente de la cola (dequeue).
// Parámetro: cola - un puntero a la cola de la cual se quitará el elemento.
void dequeue(cola *cola)
{
    if (cola->frente == NULL) // Si la cola está vacía.
    {
        printf("La cola esta vacía\n");
    }
    else
    {
        nodo *tmp = cola->frente; // Temporalmente guarda el nodo frente para liberarlo.
        cola->frente = cola->frente->sgte; // Avanza el frente al siguiente nodo.
        free(tmp); // Libera el nodo que estaba al frente.

        if (cola->frente == NULL) // Si la cola queda vacía después de quitar el elemento.
        {
            cola->final = NULL; // Ajusta el final a NULL también.
        }
    }
}

// Función para imprimir todos los elementos de la cola.
// Parámetro: cola - un puntero a la cola que se imprimirá.
void imprimirCola(cola *cola)
{
    if (cola->frente == NULL) // Si la cola está vacía.
    {
        printf("La cola está vacía.\n");
        return;
    }
    nodo *tmp = cola->frente; // Comienza desde el frente de la cola.
    while (tmp != NULL) // Mientras haya nodos en la cola.
    {
        printf("%d ", tmp->dato); // Imprime el valor del nodo.
        tmp = tmp->sgte; // Avanza al siguiente nodo.
    }
    printf("\n"); // Nueva línea al final de imprimir todos los elementos.
}

// Función principal del programa.
int main()
{
    int option;
    bool salir = false;
    cola *nueva_cola=crearcola(); // Crea una nueva cola vacía.

    while (!salir) // Mientras no se elija la opción de salir.
    {
        printf("1. Agregar elemento a la cola\n");
        printf("2. Quitar elemento de la cola\n");
        printf("3. Imprimir cola\n");
        printf("4. Salir\n");
        printf("Ingrese una opción: ");
        scanf("%d", &option); // Lee la opción elegida por el usuario.

        switch (option) // Según la opción elegida.
        {
        case 1: // Si se elige la opción 1.
            printf("Ingrese el valor a agregar a la cola: ");
            int valor;
            scanf("%d", &valor); // Lee el valor a agregar.
            enqueue(nueva_cola, valor); // Agrega el valor a la cola.
            break;
        case 2: // Si se elige la opción 2.
            dequeue(nueva_cola); // Quita el elemento del frente de la cola.
            break;
        case 3: // Si se elige la opción 3.
            imprimirCola(nueva_cola); // Imprime todos los elementos de la cola.
            break;
        case 4: // Si se elige la opción 4.
            salir = true; // Sale del bucle y finaliza el programa.
            break;
        default: // Si se elige una opción no válida.
            printf("Opción no válida. Intente de nuevo.\n");
            break;
        }
    }
    
   

   

    return 0; // Finaliza el programa.
}