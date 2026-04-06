#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

Lista* lista_crear(){
    Lista *lista=(Lista*)malloc(sizeof(Lista));
    if(lista!=NULL){
        lista->head = NULL;
        lista->tail = NULL;
        return lista;
    }
}

int lista_vacia(Lista* lista){
    if((lista->head==NULL)){
        return 1; //Si esta vacia 
    } else{
        return 0; //No esta vacia 
    }
}

void lista_insertar_head(Lista* lista, int dato){
    Nodo *nuevo_nodo = nodo_crear(dato);
    if(lista_vacia(lista)==1){
        lista->head = nuevo_nodo;
        lista->tail = nuevo_nodo;
    } else if(lista_vacia(lista)==0){
        nuevo_nodo->siguiente = lista->head;
        lista->head = nuevo_nodo;
    }
}

void lista_insertar_tail(Lista* lista, int dato){
    Nodo *nuevo_nodo = nodo_crear(dato);
    if(lista->head==NULL){
        lista->head = nuevo_nodo;
        lista->tail = nuevo_nodo;
    } else {
        lista->tail->siguiente = nuevo_nodo;
        lista->tail = nuevo_nodo;
    }
}

int lista_eliminar_head(Lista* lista){
    if(lista->head==NULL){
        return -1;
    } else {
        Nodo *nodo_eliminar = lista->head;
        int dato_eliminado = nodo_eliminar->dato;
        lista->head=lista->head->siguiente;
        //creo que tambien se puede usar, pero no estoy seguro
        //lista->head=nodo_eliminar->siguiente 
        if(lista->head==NULL){
        lista->tail = NULL;
        }
        free(nodo_eliminar);
        nodo_eliminar=NULL;
        return dato_eliminado;
    }
    return -1;
}

int lista_eliminar_tail(Lista* lista){
    if(lista->head==NULL){
        return -1;
    } else if((lista->head)==(lista->tail)){
        int dato_eliminado = lista->head->dato;
        //en teoria tambien se puede int dato_eliminado = lista->tail->dato;
        //ya que es el mismo
        free(lista->head);
        //como solo hay un nodo, tambien se puede hacer free(lista->tail);
        lista->head=NULL;
        lista->tail=NULL;
        return dato_eliminado;
    } else {
        int dato_eliminado = lista->tail->dato;
        Nodo *recorredor = lista->head;
        while(recorredor->siguiente!=(lista->tail)){
            recorredor = recorredor->siguiente;
        }
        free(lista->tail);
        lista->tail=recorredor;
        lista->tail->siguiente=NULL;
        return dato_eliminado;
    }
    return -1;
}

void lista_imprimir(Lista* lista){
    Nodo* actual = lista->head;

    while(actual != NULL)
    {
        printf("%d -> ", actual->dato);
        actual = actual->siguiente;
    }

    printf("NULL\n");
}

void lista_destruir(Lista* lista){
    if(lista->head==NULL){
        free(lista);
        return ;
    } else {
        while (lista->head != NULL ){
        Nodo *nodo_eliminar = lista->head;
        lista->head=lista->head->siguiente;
        free(nodo_eliminar);
        nodo_eliminar=NULL;  
        }
        free(lista);
        return ;
    }
    //Reutilize la funcion eliminar_head con la modificacion de que no es necesario
    //checar si la lista termina vacia, por que eso es lo que se quiere hacer.
}
