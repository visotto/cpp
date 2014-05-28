#include <iostream>
#include "Vetor.h"

int main() {

  //Cria Objeto
  VetorExtendido vet;

  //vet.inicializar();

  int menu = 0;
  int elemento;
  int nRepeticoes;
  int posicao;
  int recuperado;

  while (menu != 11) {
    cout << endl << "Escolha uma das opcoes abaixo:" << endl;
    cout << "1 - Para inserir um elemento no vetor." << endl;
    cout << "2 - Para remover um elemento no vetor." << endl;
    cout << "3 - Para recuperar um elemento no vetor." << endl;
    cout << "4 - Para preencher o vetor com um determinado elemento." << endl;
    cout << "5 - Para imprimir os elementos do vetor." << endl;
    cout << "6 - Para imprimir o primeiro elemento do vetor." << endl;
    cout << "7 - Para imprimir o ultimo elemento do vetor." << endl;
    cout << "8 - Para imprimir a soma dos elementos do vetor." << endl;
    cout << "9 - Para imprimir a media dos elementos do vetor." << endl;
    cout << "10 - Para verificar se um elemento pertence ao vetor." << endl;
    cout << "11 - Para Sair." << endl;
    cin >> menu;

    switch (menu) {
      case 1: {
        cout << "Digite o elemento que deseja inserir" << endl;
        cin >> elemento;
        if (vet.inserir(elemento))
          cout << "Elemento " << elemento << ", inserido com sucesso!" << endl;
        else
          cout << "Nao foi possivel inserir o elemento, verifique se o vetor nao esta cheio" << endl;
        break;
      }
      case 2: {
        cout << "Digite o elemento que deseja remover" << endl;
        cin >> elemento;
        if (vet.remover(elemento))
          cout << "Elemento " << elemento << ", removido com sucesso!" << endl;
        else
          cout << "Nao foi possivel encontrar o elemento ou vetor esta vazio!" << endl;
        break;
      }
      case 3: {
        cout << "Digite a posicao do elemento que deseja recuperar" << endl;
        cin >> posicao;
        recuperado = vet.recuperarElemento(posicao);
        if (recuperado != -1)
          cout << "Elemento recuperado foi o numero " << recuperado << "." << endl;
        else
          cout << "Nao foi possivel encontrar o elemento!" << endl;
        break;
      }
      case 4: {
        cout << "Digite o numero com o qual voce deseja preencher o vetor" << endl;
        cin >> elemento;
        cout << "Quantas repeticoes do elemento voce deseja?" << endl;
        cin >> nRepeticoes;
        vet.preencher(elemento, nRepeticoes);
        break;
      }

      case 5: {
        Vetor vet2(vet);
        cout << "vet" << endl;
        vet.imprimir();
        cout << endl << "vet 2" << endl;
        vet2.imprimir();
        break;
      }

      case 6: {
        int primeiro;
        primeiro = vet.primeiro();
        cout << "Primeiro = " << + primeiro << endl;
        break;
      }

      case 7: {
        int ultimo;
        ultimo = vet.ultimo();
        cout << "Ultimo = " << + ultimo << endl;
        break;
      }

      case 8: {
        int soma;
        soma = vet.somaElem();
        cout << "Soma dos elementos = " << + soma << endl;
        break;
      }

      case 9: {
        int media;
        media = vet.media();
        cout << "Media dos elementos = " << + media << endl;
        break;
      }

      case 10: {
        int elemento = 0;
        cout << "Digite qual elemento deseja verificar se existe no vetor: " << endl;
        cin >> elemento;
        if (vet.procura(elemento))
          cout << "O elemento " << + elemento << " esta no vetor."
              << endl;
        else
          cout << "O elemento " << + elemento << " nao esta no vetor." << endl;
        break;
      }
      
      //Para sair
      case 11: {
        cout << "Bye!" << endl;
        break;
      }

      default: {
        cout << "Digite um numero valido" << endl;
        break;
      }
    } // fim switch
  }

  return 0;
}
