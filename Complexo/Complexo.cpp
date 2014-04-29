// Fig. 11.20: Complexo.cpp
// Defini��es de fun��o membro da classe Complexo.
#include <iostream>
using namespace std;

#include "Complexo.h" // defini��o da classe Complexo

// Construtor
Complexo::Complexo(std::string identificador, double realPart, double imaginaryPart ) : ID(identificador), real( realPart ), imaginaria( imaginaryPart )
{
	cout << "construtor de " << ID << endl;
} // fim do construtor Complexo

Complexo::Complexo(const Complexo &c) // construtor de copia
{
	ID = c.ID;
	real = c.real;
	imaginaria = c.imaginaria;
}

// operador de adi��o
Complexo Complexo::operator+( const Complexo &operand2 ) const
{
   cout << "operador + sobrecarregado" << endl;
   return Complexo("temp do +", real + operand2.real,
      imaginaria + operand2.imaginaria );
} // fim da fun��o operator+

// operador de subtra��o
Complexo Complexo::operator-( const Complexo &operand2 ) const
{
	cout << "operador - sobrecarregado" << endl;
   return Complexo("temp do -", real - operand2.real,
      imaginaria - operand2.imaginaria );
} // fim da fun��o operator-

// exibe um objeto Complexo na f�rmula: (a, b)
void Complexo::print() const
{
    cout << ID << ": (" << real << ", " << imaginaria << "i)" << endl;
} // fim da fun��o print
