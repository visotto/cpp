#include "VetorDinamicoConst.h"

using namespace std;

/* cria um vetor vazio */
Vetor::Vetor(int tamMax) : tamMax(tamMax) {
  tamanho = 0;
  elementos = new int[tamMax];
}

Vetor::Vetor(int elem, int nRepeticoes, int tamMax) : tamMax(tamMax) {
  elementos = new int[tamMax];
  if (nRepeticoes <= tamMax)
    for (tamanho = 0; tamanho < nRepeticoes; tamanho++)
      elementos[tamanho] = elem;
}

/*Insere elemento no vetor*/
bool Vetor::inserir(int elem) {
  if(tamanho < tamMax) {

    elementos[tamanho] = elem;
    tamanho++;

    return true;
  }

  return false;
}

/*Remove elemento no vetor*/
bool Vetor::remover(int elem) {

  int i;
  i = 0;

  if (tamanho > 0) {
    while(i < tamMax && elementos[i] != elem)
      i++;
    if(elementos[i] == elem) {
      if(i < tamMax) {
        while (i < tamMax-1) {
          elementos[i] = elementos[i+1];
          i++;
        }
      }
      tamanho--;

      return true;
    }
  }

  return false;
}

/*Retorna o elemento do vetor na posição escolhida*/
int Vetor::recuperarElemento(int posicao) {

  if(tamanho >= 0 && posicao <= tamanho) {

    return elementos[posicao];
  }

  return -1;  
}

/*Inicializa o vetor com o elemento desejado*/
void Vetor::preencher(int elem, int nRepeticoes) {
if (nRepeticoes <= tamMax)
  for (tamanho = 0; tamanho < nRepeticoes; tamanho++)
    elementos[tamanho] = elem;
}

/*Imprime os elementos do vetor*/
void Vetor::imprimir() {
  cout << endl;
  for (int i = 0; i < tamanho; i++) {
    cout << "v[" << i << "] = "<< elementos[i] << endl;
  }
  cout << endl;
}

Vetor::~Vetor() {
  delete [] elementos;
}
