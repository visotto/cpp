#include "data.h"

int main() {
  Data data1, data2, data3;
  VetorData vd1;

  data1.atualizaDia(15);
  data1.atualizaMes(04);
  data1.atualizaAno(2014);
  data1.mostraData();

  data2.atualizaDia(11);
  data2.atualizaMes(05);
  data2.atualizaAno(2014);
  data2.mostraData();

  data3.mostraData();

  vd1.inserirData(data1);

  cout << "O mes eh " << data1.getMes() << endl;

  return 0;
}
