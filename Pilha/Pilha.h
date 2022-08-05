#ifndef PILHA_H
#define PILHA_H

typedef int Tipo;
const int tamanhoTotal = 100;

class Pilha{

    public:
        Pilha();
        ~Pilha();
        
        bool estaCheia() const {return this->tamanho == tamanhoTotal;}
        bool estaVazia() const {return this->tamanho == 0;}
        Tipo topo() const {return this->estruturaPilha[tamanho];}
        int retornaTamanho() const {return this->tamanho;}

        Pilha &adicionarItem(Tipo);
        Pilha &removeItem();
        void imprimirPilha() const;


    private:
        int tamanho;
        Tipo *estruturaPilha;
};

#endif