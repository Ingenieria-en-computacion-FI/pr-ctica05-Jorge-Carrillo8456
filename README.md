[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/sIGJZS2t)
[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-2e0aaae1b6195c2367325f4f02e2d04e9abb55f0b24a779b69b11b9e10269abc.svg)](https://classroom.github.com/online_ide?assignment_repo_id=23098737&assignment_repo_type=AssignmentRepo)
# Práctica: Pilas y Colas con Listas Ligadas

## Objetivo
Implementar pilas y colas reutilizando una lista ligada.

La pila y la cola **NO deben implementar nodos directamente**.
Deben reutilizar la estructura `Lista`.

---

## Reglas

### Pila
- push → insertar por **tail**
- pop → eliminar por **tail**

### Cola
- enqueue → insertar por **tail**
- dequeue → eliminar por **head**

---

## Archivos a completar

### lista.c
- lista_insertar_tail
- lista_eliminar_head
- lista_eliminar_tail

### pila.c
- pila_push
- pila_pop
- pila_top

### cola.c
- cola_enqueue
- cola_dequeue
- cola_frente

---

## Compilar

gcc main.c nodo/nodo.c lista/lista.c pila/pila.c cola/cola.c

---

## Estructura

Lista
↑
├── Pila
└── Cola

---

## Restricción

No modificar:
- nodo.h
- nodo.c
