#ifndef FILA_H
#define FILA_H

typedef int Tipo;
const int tamanhoMaximo = 10;

class Fila{

    public:
        Fila();
        ~Fila();
        bool estaCheia() const {return this->ultimo - this->primeiro == tamanhoMaximo;}
        bool estaVazia() const {return this->primeiro == this->ultimo;}
        Fila adicionarItem(Tipo);
        Fila removerItem();
        void imprimirFila() const;

    private:
        int primeiro, ultimo;
        Tipo *estruturaFila;
};

#endif