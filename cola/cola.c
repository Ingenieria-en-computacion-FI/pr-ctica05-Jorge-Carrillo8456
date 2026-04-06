#include "cola.h"

Cola* cola_crear()
{
    return lista_crear();
}

int cola_vacia(Cola* cola)
{
    return lista_vacia(cola);
}

void cola_enqueue(Cola* cola, int dato)
{
    lista_insertar_tail(cola, dato);
}

int cola_dequeue(Cola* cola)
{
    return lista_eliminar_head(cola);
    return -1;
}

int cola_frente(Cola* cola)
{
    if (cola_vacia(cola)){
        return -1;
    }
    return cola->head->dato;
}

void cola_destruir(Cola* cola)
{
    lista_destruir(cola);
}
