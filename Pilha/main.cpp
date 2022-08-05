#include <iostream>
#include "Pilha.h"

int main() {
  try{
    Pilha p1;

    p1.adicionarItem(10).adicionarItem(5).adicionarItem(8);
    p1.imprimirPilha();
    p1.removeItem();
    p1.imprimirPilha();

    return 0;
  }catch(const char* e){
    std::cout << "ERRO! " << e << '\n';
  }

}