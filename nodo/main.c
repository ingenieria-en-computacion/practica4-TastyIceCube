#include "nodo.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    nodo *primero = NULL;
    nodo *temp;
    nodo *basura;
    primero = crear_nodo(1);
    basura = crear_nodo(1);
    basura->sig = crear_nodo(2);
    primero->sig = crear_nodo(2);
    primero->sig->sig =crear_nodo(3);

    printf("\n");

    printf("%p\n", primero);
    print_nodo(primero);

    printf("\n");

    printf("%p\n", primero->sig);
    print_nodo(primero->sig);

    printf("\n");

    printf("%p\n", primero->sig->sig);
    print_nodo(primero->sig->sig);

    printf("\n");

    borrar_nodo(primero->sig);
    borrar_nodo(primero);
    borrar_nodo(basura->sig);
    borrar_nodo(basura);
    return 0;
}