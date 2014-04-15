#include <iostream>
#include <string.h>
#include <time.h>

using namespace std;

#define TamMax 100

class Data {

	private:
		int dia;
		int mes;
		int ano;
		char meses[12][10];

	public:

		Data();
		Data(int d, int m, int a);
		void atualizaDia(int d);
		void atualizaMes(int m);
		void atualizaAno(int a);
		void mostraData();
		char* getMes();
};

class VetorData {

	private:

		int tamanho;
		Data* elemento[TamMax];


	public:

		~VetorData();
		VetorData();
		void inserirData(Data data);
};
