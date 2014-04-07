#include "Vetor.h"

int main(){

  //Cria Objeto
  Vetor vet;
  Vetor vet2(2, 40);

  int menu = 0;
  int elemento;
  int nRepeticoes;
  int posicao;
  int recuperado;

  while (menu != 6){
    cout << endl << "Escolha uma das opcoes abaixo:" << endl;
    cout << "1 - Para inserir um elemento no vetor." << endl;
    cout << "2 - Para remover um elemento no vetor." << endl;
    cout << "3 - Para recuperar um elemento no vetor." << endl;
    cout << "4 - Para preencher o vetor com um determinado elemento." << endl;
    cout << "5 - Para imprimir os elementos do vetor." << endl;
    cout << "6 - Para Sair." << endl;
    cin >> menu;

    switch (menu) {
      case 1:{
       cout << "Digite o elemento que deseja inserir" << endl;
       cin >> elemento;
       if (vet.inserir(elemento))
         cout << "Elemento " << elemento << ", inserido com sucesso!" << endl;
       else
         cout << "Nao foi possivel inserir o elemento, verifique se o vetor nao esta cheio" << endl;
       break;
     }
     case 2:{
       cout << "Digite o elemento que deseja remover" << endl;
       cin >> elemento;
       if (vet.remover(elemento))
         cout << "Elemento " << elemento << ", removido com sucesso!" << endl;
       else
         cout << "Nao foi possivel encontrar o elemento ou vetor esta vazio!" << endl;
       break;
     }
     case 3:{
       cout << "Digite a posicao do elemento que deseja recuperar" << endl;
       cin >> posicao;
       recuperado = vet.recuperarElemento(posicao);
       if (recuperado != -1)
         cout << "Elemento recuperado foi o numero " << recuperado << "." << endl;
       else
         cout << "Nao foi possivel encontrar o elemento!" << endl;
       break;
     }
     case 4:{
       cout << "Digite o numero com o qual voce deseja preencher o vetor" << endl;
       cin >> elemento;
       cout << "Quantas repeticoes do elemento voce deseja?" << endl;
       cin >> nRepeticoes;
       vet.preencher(elemento, nRepeticoes);
       break;
     }
     case 5:{
       cout << "vet" << endl;
       vet.imprimir();
       break;
     }
     case 6:{
       cout << "Bye!" << endl;
       break;
     }
     default: {
       cout << "Digite um numero valido" << endl;
       break;
     }
    }// fim switch
  }

  return 0;
}
