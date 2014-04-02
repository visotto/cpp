#include <iostream>

using namespace std;

class Pessoa {
private:
  int distancia;
  int horasDormidas;
  int horasTrabalhadas;
  int nRefeicoes;
  int cansaco;
  int fome;
  void darUmPasso(int tams_passo);

public:
  void inicializa();

  void andar(int tam_passo, int passos_dados);

  void comer();

  void dormir(int hdevem_dormidas);

  void checkup();

  void trabalhar(int htrabalhadas_dia);
};
