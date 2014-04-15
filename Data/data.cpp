#include "data.h"

VetorData::~VetorData() {
  for(int i = 0; i < tamanho; i++) {
    delete elemento[i];
  }
}

VetorData::VetorData() {
  tamanho = 0;
}

void VetorData::inserirData(Data data) {
  elemento[tamanho] = new Data;
  *elemento[tamanho] = data;
  tamanho++;
}

Data::Data() {
  time_t rawtime;
  struct tm * timeinfo;
  
  time (&rawtime);

  timeinfo = localtime (&rawtime);

  ano=timeinfo->tm_year + 1900;
  mes=timeinfo->tm_mon + 1;
  dia=timeinfo->tm_mday;
  
  strcpy(meses[0], "janeiro");
  strcpy(meses[1], "fevereiro");
  strcpy(meses[2], "marco");
  strcpy(meses[3], "abril");
  strcpy(meses[4], "maio");
  strcpy(meses[5], "junho");
  strcpy(meses[6], "julho");
  strcpy(meses[7], "agosto");
  strcpy(meses[8], "setembro");
  strcpy(meses[9], "outubro");
  strcpy(meses[10], "novembro");
  strcpy(meses[11], "dezembro");
}

Data::Data(int d, int m, int a) {
    dia = d;
    mes = m;
    ano = a;
    strcpy(meses[0], "janeiro");
    strcpy(meses[1], "fevereiro");
    strcpy(meses[2], "marco");
    strcpy(meses[3], "abril");
    strcpy(meses[4], "maio");
    strcpy(meses[5], "junho");
    strcpy(meses[6], "julho");
    strcpy(meses[7], "agosto");
    strcpy(meses[8], "setembro");
    strcpy(meses[9], "outubro");
    strcpy(meses[10], "novembro");
    strcpy(meses[11], "dezembro");
}

char* Data::getMes() {
  return meses[mes-1];
}

void Data::atualizaDia(int d) {
  if(d > 0 && d <= 31) {
    if(mes < 8) {
      if(mes%2 == 0) {
        if(mes == 2 && d <= 28) {
          dia = d;
        } else {
          if(mes != 2 && d <= 30) {
            dia = d;
          }
        }
      } else {
        if(d <= 31) {
          dia = d;
        }
      }
    } else {
      if(mes%2 == 0) {
        if(d <= 31) {
          dia = d;
        }
      } else {
        if(d <= 30) {
          dia = d;
        }
      }
    }
  }
}

void Data::atualizaMes(int m) {
  if(m > 0 && m <= 12) {
    mes = m;
  }
}

void Data::atualizaAno(int a) {
  if(a > 0) {
    ano = a;
  }
}

void Data::mostraData() {
  std::cout << dia << "/" << mes << "/" << ano <<"\n";
}
