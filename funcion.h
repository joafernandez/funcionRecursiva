//
// Created by joana on 8/9/2023.
//

#ifndef BUSCAR_RECURSIVAMTE_FUNCION_H
#define BUSCAR_RECURSIVAMTE_FUNCION_H

#endif //BUSCAR_RECURSIVAMTE_FUNCION_H

typedef struct Nodo{
    int valor;
    struct Nodo*sig;
}Nodo;

typedef struct lista{
    Nodo*cab;
}Lista;

Nodo * crearNodo(int valor);
Lista* crearLista();
void insertar(Lista*lista, int valor);
int buscar(Lista*lista, int valor);
void imprimir(Lista *lista);