#include <iostream>

using namespace std;

class Vetor {
private:
  int v[100];
  int cont;

public:
  Vetor(); //construtor default
  Vetor(int pos, int elemt); //construtor personalizado
  ~Vetor(); //destrutor
  int inserir(int elemt);
  int remover(int elemt);
  int recuperarElemento(int pos);
  void preencher(int elemt, int nRep);
  void imprimir();
};
