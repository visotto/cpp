/* Responda as seguintes questoes:

 1 - Pense e discuta as semelhancas e diferencas entre as duas formas de sobrecarga, discutindo tambem sua implicacao no encapsulamento.
  R: A sobrecarga por metodo faz com que eu seja limitado ao fato de que o operando mais a esquerda deve ser do tipo
     da classe a qual eu estou fazendo essa sobrecarga, enquanto a sobrecarga por funcao global nao me da essa restricao.
     Na sobrecarca por metodo eu mantenho um encapsulamento devidamente, enquanto que na sobrecarga por funcao global eu
     permito que uma funcao que nao faz parte do escopo da classe possa acessar seus membros, o que implica em uma quebra do
     encapsulamento.

 2 - O construtor de copia e executado alguma vez no seu programa final? Em quais situacoes?
  R: No meu programa final o construtor de copia nao e executado nenhuma vez, pois como eu faco a passagem dos parâmetros por
     referencia, ele nao copia o parâmetro passado. E na parte que eu crio os 50 Complexos com os mesmos valores de w, ele
     nao chama o construtor de copia pois os 50 objetos ja foram criados com o construtor padrao no momento que eu executei o 'new'.

*/

// Fig. 11.21: fig11_21.cpp
// Programa de teste da classe Complexo.
#include <iostream>
#include "Complexo.h"

int main() {
  Complexo x("x");
  Complexo y("y", 4.3, 8.2);
  Complexo z("z", 3.3, 1.1);
  Complexo w;
  Complexo *vetor;

  cout << x;
  cout << y;
  cout << z; 

  // testa soma de dois complexos
  x = y + z;
  cout << "Resultado da soma: " << endl;
  cout << y << " + " << z << " = " << x << endl;

  // testa subtracao de dois complexos
  x = y - z;
  cout << "Resultado da subtracao" << endl;
  cout << y << " - " << z << " = " << x << endl;

  // testa multiplicacao de dois complexos
  x = y * z;
  cout << "Resultado da multiplicacao" << endl;
  cout << y << " * " << z << " = " << x << endl;

  // testa divisao de dois complexos
  x = y / z;
  cout << "Resultado da divisao" << endl;
  cout << y << " / " << z << " = " << x << endl;

  // testa soma de um int com complexo
  x = 3 + y;
  cout << "Resultado da soma: " << endl;
  cout << "3 + " << y << " = " << x << endl;

  // testa soma de complexo com int
  x = z + 4;
  cout << "Resultado da soma: " << endl;
  cout << z << " + 4 = " << x << endl;

  // testa soma de double com complexo
  x = 3.7 + y;
  cout << "Resultado da soma: " << endl;
  cout << "3.7 + " << y << " = " << x << endl;

  // testa soma de complexo com double
  x = z + 4.7;
  cout << "Resultado da soma: " << endl;
  cout << z << " + 4.7 = " << x << endl;

  // testa subtracao de um int menos um complexo
  x = 3 - y;
  cout << "Resultado da subtracao: " << endl;
  cout << "3 - " << y << " = " << x << endl;

  // testa subtracao de um complexo menos um int
  x = y - 3;
  cout << "Resultado da subtracao: " << endl;
  cout << y << " - 3 = " << x << endl;

  // testa subtracao de um double menos um complexo
  x = 3.7 - z;
  cout << "Resultado da subtracao: " << endl;
  cout << "3.7 - " << z << " = " << x << endl;

  // testa subtracao de um complexo menos um double
  x = z - 3.7;
  cout << "Resultado da subtracao: " << endl;
  cout << z << " - 3.7 = " << x << endl;

  // testa ==
  if (y == z)
   cout << "Igual\n" << endl;

  // testa !=
  if (y != z)
   cout << "Diferente\n" << endl;

  // le um complexo com cin
  cin >> w;

  // cria um vetor com 50 complexos, todos iguais a w
  vetor = new Complexo[50];
  for (int i = 0; i < 50; i++) {
   vetor[i] = w;
  }

  return 0;
} // fim de main
