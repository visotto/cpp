//Implementacao da Classe VetorExtendido.h
#include "VetorExtendido.h"

//using namespace std;
//Construtor Padrao
VetorExtendido::VetorExtendido(){
	//nao possui novos atributos para serem inicializados
}
//Construtor de Copia
/*
VetorExtendido::VetorExtendido(const VetorExtendido &v){
	int tamanho = v.getTamanho();
	for (int i = 0; i < tamanho; i++){
		inserir(v.recuperaElemento(i));
	}
}
*/
//Metodos Novos
int VetorExtendido::primeiroElemento(){
	return recuperarElemento(0);
}

int VetorExtendido::ultimoElemento(){
	return recuperarElemento(getTamanho() -1); 
}

int VetorExtendido::somaElementos(){
	int soma = 0;
	int tamanhoVetor = getTamanho();
	for(int i = 0; i < tamanhoVetor; i++)
		soma += recuperarElemento(i);	
	return soma;
}

int VetorExtendido::mediaElementos(){
	int soma = somaElementos();
	int tamanhoVetor = getTamanho();
	int media = soma/tamanhoVetor;
	return media;
}

bool VetorExtendido::procuraElemento(int valor){
	int tamanhoVetor = getTamanho();
	for(int i = 0; i < tamanhoVetor; i++)
		if(valor == recuperarElemento(i))
			return true;
	return false;
		
}
