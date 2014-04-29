#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using namespace std;

class Complexo {
public:
  Complexo(std::string identificador = "", double = 0.0, double = 0.0); // construtor
  Complexo(const Complexo &c);
  Complexo operator+(const Complexo &) const; // adicao dois complexos
  Complexo operator-(const Complexo &) const; // subtracao dois complexos
  Complexo operator*(const Complexo &) const; //multiplicacao dois complexos
  Complexo operator/(const Complexo &) const; //divisao dois complexos
  bool operator==(const Complexo &operand2) const; //igualdade
  bool operator!=(const Complexo &operand2) const; //desigualdade
  Complexo operator+(const int) const; //soma de Complexo com int
  Complexo operator+(const double num) const; //soma de Complexo com double
  Complexo operator-(const int num) const; //subtrair um int de um complexo
  Complexo operator-(const double num) const; //subtrair um double de um complexo
  friend Complexo operator-(const double num, const Complexo &operand); //subtrair um complexo de um double
  friend Complexo operator-(const int num, const Complexo &operand); //subtrair um complexo de um int
  friend Complexo operator+(const int , const Complexo &); //soma de int com complexo
  friend Complexo operator+(const double num, const Complexo &operand); //soma double com complexo
  friend ostream& operator<<(ostream & , const Complexo &); //operador <<
  friend istream& operator>>(istream &, Complexo &); //operador >>

private:
  std::string ID; // identificador do objeto
  double real; // parte real
  double imaginaria; // parte imaginaria
}; // fim da classe Complexo

#endif
