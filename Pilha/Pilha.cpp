#include <iostream>
#include "Pilha.h"

Pilha::Pilha() : tamanho(0) {
    estruturaPilha = new Tipo[tamanhoTotal];
}

Pilha::~Pilha(){
    if (estruturaPilha){
        delete [] estruturaPilha;
    }
}

Pilha &Pilha::adicionarItem(Tipo valor) {
    if (estaCheia()){
        throw "A pilha está cheia!";
    }
    estruturaPilha[tamanho] = valor;
    tamanho += 1;
    return *this;
}

Pilha &Pilha::removeItem(){
    if (estaVazia()){
        throw "A pilha está vazia!";
    }
    tamanho -= 1;
    return *this;
}

void Pilha::imprimirPilha() const {
    if (estaVazia()){
        throw "A pilha está vazia!";
    }
    std::cout << "Pilha [";
    for (auto i = 0; i < tamanho; i++){
        if (i + 1 == tamanho){
            std::cout << estruturaPilha[i] << "]\n";
        } else {
            std::cout << estruturaPilha[i] << " - ";
        }
    }
}