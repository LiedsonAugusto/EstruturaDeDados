#include <iostream>
#include "Fila.h"

int main(){

    Fila fila;
    fila.adicionarItem(10).adicionarItem(4).adicionarItem(5).adicionarItem(10).adicionarItem(3);
    fila.imprimirFila();
    fila.removerItem();
    fila.imprimirFila();
    return 0;
}