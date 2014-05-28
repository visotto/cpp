#ifndef VETORX_H
#define VETORX_H

#include <iostream>
using namespace std;

class Vetor {

private:
  //tamanho do vetor      
  int tamanho;
  //eh um vetor de classe, 
  int *elementos;
  int tamanhoMaximo;

public:

  Vetor(const int &max = 100);
  Vetor(const Vetor &v);
  ~Vetor();

  void preencher(const int &elemento, const int &nRepeticoes);
  bool inserir(const int &elemento);
  bool remover(const int &elemento);
  int recuperarElemento(const int &posicao) const;
  void imprimir() const;
  int getTamanho();
};

class VetorExtendido: public Vetor {

public:

  VetorExtendido();

  int primeiro();
  int ultimo();
  int somaElem();
  int media();
  bool procura(int valor);

};

#endif
