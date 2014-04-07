#include "Vetor.h"

Vetor::Vetor() {
  for(int i=0; i<100; i++)
    v[i]=0;
  cont = 0;
}

Vetor::Vetor(int elemt, int qtd) {
  for(int i=0; i<qtd; i++)
    v[i]=elemt;
  cont = qtd;
}

Vetor::~Vetor(){}

int Vetor::inserir(int elemt) {
  if (cont < 100) {
    v[cont]=elemt;
    cont++;
    return 1;
  }
    return 0;
}

int Vetor::remover(int elemt) {
  if (cont > 0) {
    for (int i = 0; i < 100; i++) {
      if(v[i] == elemt) {
        v[i] = 0;
        return 1;
      }
    }
  }
    return 0;
}

int Vetor::recuperarElemento(int pos) {
  if (pos >= 0 && pos < 100) {
    return v[pos-1];
  }
    return -1;
}

void Vetor::preencher(int elemt, int nRep) {
  for (int i = 0; i < nRep; i++) {
    v[i] = elemt;
  }
}

void Vetor::imprimir() {
  for(int i = 0; i < 100; i++)
    cout << v[i] << " ";
}
