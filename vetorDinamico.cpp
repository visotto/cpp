//g++ vetorDinamico.cpp -o vetorDinamico

#include <iostream>

using namespace std;

int main () {
  int i, n;
  int *p;

  cout << "Quantos elementos deseja? ";
  cin >> i;

  p = new int[i];

  for (n=0; n<i; n++) {
    cout << "Digite o elemento: ";
    cin >> p[n];
  }

  cout << "Voce digitou: ";
  for (n=0; n<i; n++)
    cout << p[n] << " ";

  cout << "\n";

  delete[] p;

  return 0;
}
