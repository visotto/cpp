// Fig. 11.20: Complexo.cpp
// Definicoes de funcao membro da classe Complexo.
#include <iostream>
#include "Complexo.h" // definicao da classe Complexo

// Construtor
Complexo::Complexo(std::string identificador, double realPart, double imaginaryPart) : ID(identificador), real(realPart), imaginaria(imaginaryPart) {
  cout << "construtor de " << ID << endl;
} // fim do construtor Complexo

Complexo::Complexo(const Complexo &c) { // construtor de copia {
  cout << "CONSTRUTOR DE CÓPIA\n";
  ID = c.ID;
  real = c.real;
  imaginaria = c.imaginaria;
}

// operador de adicao
Complexo Complexo::operator+(const Complexo &operand2) const {
  cout << endl << "operador + sobrecarregado" << endl;
  return Complexo("temp do +", real + operand2.real,
    imaginaria + operand2.imaginaria);
} // fim da funcao operator+

// operador de subtracao
Complexo Complexo::operator-(const Complexo &operand2) const {
  cout << endl << "operador - sobrecarregado" << endl;
  return Complexo("temp do -", real - operand2.real,
    imaginaria - operand2.imaginaria);
} // fim da funcao operator-

// operador de multiplicacao
Complexo Complexo::operator*(const Complexo &operand2) const {
  Complexo aux("auxiliar");
  cout << endl << "operador * sobrecarregado" << endl;
  aux.real = (real * operand2.real - imaginaria * operand2.imaginaria);
  aux.imaginaria = (real * operand2.imaginaria + imaginaria * operand2.real);
  return aux;
} // fim da funcao operator*

// operador de divisao
Complexo Complexo::operator/(const Complexo &operand2) const {
  Complexo aux("auxiliar");
  cout << endl << "operador / sobrecarregado" << endl;
  aux.real = ((real * operand2.real) - (imaginaria * operand2.imaginaria))/((operand2.real * operand2.real) + (operand2.imaginaria * operand2.imaginaria));
  aux.imaginaria = ((operand2.real * imaginaria) - (real * operand2.imaginaria))/((operand2.real * operand2.real) + (operand2.imaginaria * operand2.imaginaria));
  return aux;
} // fim da funcao operator /

// operador de igualdade
bool Complexo::operator==(const Complexo &operand2) const {
  cout << endl << "operador == sobrecarregado" << endl;
  if (real == operand2.real && imaginaria == operand2.imaginaria)
   return true;
  return false;
} // fim da funcao operator ==

// operador de diferenca
bool Complexo::operator!=(const Complexo &operand2) const {
  cout << endl << "operador != sobrecarregado" << endl;
  if (real != operand2.real || imaginaria != operand2.imaginaria)
   return true;
  return false;
} // fim da funcao operator !=

// sobrecarregando + para somar um complexo com um int
Complexo Complexo::operator+(const int num) const{

  return Complexo("Complexo + Int", num + real, imaginaria);
}

// funcao global que sobrecarrega + para somar um int com um complexo
Complexo operator+(const int num, const Complexo &operand) {

  return Complexo("Int + Complexo", num + operand.real, operand.imaginaria);
}

// sobrecarregando + para somar um complexo com um double
Complexo Complexo::operator+(const double num) const{

  return Complexo("Complexo + Double", num + real, imaginaria);
}

// funcao global que sobrecarrega + para somar double com Complexo
Complexo operator+(const double num, const Complexo &operand) {

  return Complexo("Double + Complexo", num + operand.real, operand.imaginaria);
}

// sobrecarregando - para subtrair um int de um complexo
Complexo Complexo::operator-(const int num) const{

  return Complexo("Complexo - Int", real - num, imaginaria);
}

//funcao global que sobrecarrega - para subtrair um complexo de um int
Complexo operator-(const int num, const Complexo &operand) {

  return Complexo("Int - Complexo", num - operand.real, operand.imaginaria);
}

// sobrecarregando - para subtrair um double de um complexo
Complexo Complexo::operator-(const double num) const{

  return Complexo("Complexo - Double", real - num, imaginaria);
}

// funcao global que sobrecarrega - para subtrair um complexo de um double
Complexo operator-(const double num, const Complexo &operand) {

  return Complexo("Double - Complexo", num - operand.real, operand.imaginaria);
}

// sobrecarga do operador <<
ostream& operator<<(ostream &o , const Complexo &operand) {

  o << operand.ID << ": (" << operand.real << " , " << operand.imaginaria << "i)" << endl;
  return o;
}

// sobrecarga do operador >>
istream &operator>>(istream &o, Complexo &operand) {

  cout << "Informe o nome do numero" << endl;
  o >> operand.ID;
  cout << "Informe a parte real" << endl;
  o >> operand.real;
  cout << "Informe a parte imaginaria sem o 'i'" << endl;
  o >> operand.imaginaria;
  
  return o;
}
