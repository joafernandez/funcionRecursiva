//
// Created by joana on 8/9/2023.
//

#include "funcion.h"
#include <stdlib.h>
#include <stdio.h>

//buscar un valor en una Lista de manera recursiva(llamarse  a si misma dentro de la funcion)
Nodo* crearNodo(int valor){
    Nodo*nuevo= malloc(sizeof (Nodo));
    if(nuevo==NULL)
        exit(-1);
    nuevo->valor=valor;
    nuevo->sig=NULL;
 return nuevo;
}


Lista* crearLista(){
    Lista* nueva= malloc(sizeof (Lista));
    if(nueva==NULL)
        exit(-1);
    nueva->cab=NULL;
    return nueva;
}
void insertar(Lista*lista, int valor){
    Nodo* nodoinsertar= crearNodo(valor);
    if(lista->cab==NULL){
        lista->cab=nodoinsertar;
    } else{
        Nodo*aux=lista->cab;
        while (aux->sig!=NULL){
            aux=aux->sig;
        }
        aux->sig=nodoinsertar;
    }
}

int buscar(Lista* lista, int valor) {   // le paso lista y valor a buscar
    if (lista->cab == NULL) {     //si la lista esta vacia arroja 0
        return 0;
    } else if (lista->cab->valor == valor) { // sino si el valor de la vabecera es igual al buscadp arroja 1
        return 1;
    }
        return buscar(lista->cab->sig, valor); // llamo a la funcion y sigue buscando

}


void imprimir(Lista *lista){
 Nodo *aux=lista->cab;
    while (aux!=NULL){
        printf("%d->",aux->valor);
        aux=aux->sig;
    }
}