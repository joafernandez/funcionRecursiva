
#include "funcion.h"
#include <stdio.h>


int main() {

    Lista* lista=crearLista();

    insertar(lista,3);
    insertar(lista,8);
    insertar(lista,4);
    insertar(lista,19);
    insertar(lista,34);
    insertar(lista,89);

    imprimir(lista); // imprimo lista para comprobar

    int valor= 89;   // creo entero q contiene el valor a buscar
    int resultado = buscar(lista, valor);

    // como mi funcion arroja 2 resultados,tengo que aclarar que se debe imprimir en esos 2 casos

    if (resultado == 1) {
        printf("El valor que buscas (%d) si está en la Lista.\n",valor);
    } else {
        printf("El valor que buscas (%d) no está en la Lista.\n", valor);
    }

    return 0;
}
