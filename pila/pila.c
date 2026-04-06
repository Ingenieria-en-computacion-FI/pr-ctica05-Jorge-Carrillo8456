#include "pila.h"
#include <stdio.h>

Pila* pila_crear() {
    return lista_crear(); 
}

int pila_vacia(Pila* pila) {
    return lista_vacia(pila);
}

void pila_push(Pila* pila, int dato) {
    lista_insertar_tail(pila, dato); 
}

int pila_pop(Pila* pila) {
    return lista_eliminar_tail(pila); 
}

int pila_top(Pila* pila) {
    if (pila_vacia(pila)) return -1;
    return pila->tail->dato; 
    //Se supone que en una PILA el top es el head, pero como se esta solicitando que ingresemos 
    //los datos apartir del tail, eso implica que el el top va a ser el tail
}

void pila_destruir(Pila* pila) {
    lista_destruir(pila);
}
