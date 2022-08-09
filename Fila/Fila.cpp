#include <iostream>
#include "Fila.h"

Fila::Fila() : primeiro(0), ultimo(0){
    estruturaFila = new Tipo[tamanhoMaximo];
}

Fila::~Fila() {
    if (estruturaFila){
        delete [] estruturaFila;
    }
}

Fila Fila::adicionarItem(Tipo item){
    if (estaCheia()){
        throw "Fila está cheia!";
    }
    estruturaFila[ultimo % tamanhoMaximo] = item;
    ultimo++;
    return *this;
}

Fila Fila::removerItem(){
    if (estaVazia()){
        throw "Fila está vazia!";
    }
    primeiro++;
    return *this;
}

void Fila::imprimirFila() const {
    if (estaVazia()){
        throw "Está vazia!";
    }
    std::cout << "Fila: [ ";
    for (auto i = primeiro; i < ultimo; i++){
        std::cout << estruturaFila[i % tamanhoMaximo] << " ";
    }
    std::cout << " ]";
}