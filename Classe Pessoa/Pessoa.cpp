#include "Pessoa.h"

using namespace std;

void Pessoa::inicializa() {
  distancia = 0;
  horasDormidas = 0;
  horasTrabalhadas = 0;
  nRefeicoes = 0;
  cansaco = 5;
  fome = 3;
}

void Pessoa::darUmPasso(int tam_passo) {
  distancia += tam_passo;
}

void Pessoa::andar(int tam_passo, int passos_dados) {
  darUmPasso(tam_passo*passos_dados);
}

void Pessoa::comer() {
  nRefeicoes++;
  if(fome>=3)
    fome -= 3;
  else
    fome = 0;
}

void Pessoa::dormir(int hdevem_dormidas) {
  if (hdevem_dormidas <= 12 && fome <= 10) {
    horasDormidas += hdevem_dormidas;
    if (hdevem_dormidas >= 6) {
      cansaco -= 8 * (hdevem_dormidas/6);
      if (cansaco < 0)
          cansaco = 0;
    }
  } else
      cout << "\nNao e possivel dormir.\n";
}

void Pessoa::checkup() {
  cout << "Numero de metros andados: " << distancia;
  cout << "\nHoras dormidas: " << horasDormidas;
  cout << "\nRefeicoes feitas: " << nRefeicoes;
  cout << "\n";
}

void Pessoa::trabalhar(int htrabalhadas_dia) {
  if (htrabalhadas_dia <= 10 && fome <= 10) {
    horasTrabalhadas += htrabalhadas_dia;
    if(htrabalhadas_dia >= 4) {
      cansaco -= 4 * (htrabalhadas_dia/4);
      fome -= 2 * (htrabalhadas_dia/4);
      if (cansaco < 0)
        cansaco = 0;
      if (fome < 0)
        fome = 0;
    }
  } else
    cout << "\nNao e possivel trabalhar.\n";
}
