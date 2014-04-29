#ifndef COMPLEX_H
#define COMPLEX_H

class Complexo
{
public:
   Complexo(std::string identificador = "", double = 0.0, double = 0.0 ); // construtor
   Complexo(const Complexo &c);
   Complexo operator+( const Complexo & ) const; // adicao
   Complexo operator-( const Complexo & ) const; // subtracao
   void print() const; // saida
private:
   std::string ID; // identificador do objeto
   double real; // parte real
   double imaginaria; // parte imaginaria
}; // fim da classe Complexo

#endif
