//Classe VetorExtendido.h
#include "Vetor.h"

class VetorExtendido: public Vetor{
			
	public:
		//Construtor Padrao
		VetorExtendido();
		//Construtor de Copia
		//VetorExtendido(const VetorExtendido &v);
		//Metodos Novos
		int primeiroElemento();
		int ultimoElemento();
		int somaElementos();
		int mediaElementos();
		bool procuraElemento(int valor);
		
};
