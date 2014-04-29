// Fig. 11.21: fig11_21.cpp
// Programa de teste da classe Complexo.
#include <iostream>
using std::cout;
using std::endl;

#include "Complexo.h"

int main()
{
   Complexo x("x");
   Complexo y("y", 4.3, 8.2 );
   Complexo z("z", 3.3, 1.1 );

   x.print();
   y.print();
   z.print();

   x = y + z;
   cout << "Resultado da soma: " << endl;
   y.print();
   cout << " + ";
   z.print();
   cout << " = ";
   x.print();
   cout << endl;

   x = y - z;
   cout << "Resultado da subtracao" << endl;
   y.print();
   cout << " - ";
   z.print();
   cout << " = ";
   x.print();
   cout << endl;

   return 0;
} // fim de main
