//Implementacao da Classe Vetor.h
#include "Vetor.h"
#include <iostream>
using namespace std;

Vetor::Vetor(const int &max) : tamanhoMaximo(max){
	tamanho = 0;
	elementos = new int[tamanhoMaximo];
}

Vetor::Vetor(const Vetor &v) : tamanhoMaximo(v.tamanhoMaximo){
	tamanho = v.tamanho;
	elementos = new int[tamanhoMaximo];
	for (int i = 0; i < tamanho; i++){
		elementos[i] = v.elementos[i];
	}

}

Vetor::~Vetor() {
	delete [] elementos;
}

/*Inicializa o vetor com o elemento desejado*/
void Vetor::preencher(const int &elemento, const int &nRepeticoes){
	if (nRepeticoes <= tamanhoMaximo)
	for (tamanho = 0; tamanho < nRepeticoes; tamanho++)
		elementos[tamanho] = elemento;
}


/*Insere elemento no vetor*/
bool Vetor::inserir(const int &elemento){

	if(tamanho < tamanhoMaximo){
	
		elementos[tamanho] = elemento;
		tamanho++;
		return true;
	}
	
	return false;
}
	
/*Remove elementos no vetor*/
bool Vetor::remover(const int &elemento){

	int i = 0;

	if (tamanho > 0){
		while(i < tamanho && elementos[i] != elemento)
			i++;
		if(elementos[i] == elemento){
			while (i < tamanho){
					elementos[i] = elementos[i+1];
					i++; 	 	 	
			}
			tamanho--;
			return true;
		}
	}
	return false;
}
	
/*Retorna o elemento do vetor na posição escolhida*/
int Vetor::recuperarElemento(const int &posicao) const {
	
	if(tamanho > 0 && posicao < tamanho){
		
		return elementos[posicao];
		
	}
	return -1;	
}
	
/*Imprime os elementos do vetor*/

void Vetor::imprimir() const{
	
	cout << endl;
	for (int i = 0; i < tamanho; i++){
		cout << "v[" << i << "] = "<< elementos[i] << endl;
	}
	cout << endl;

}

int Vetor::getTamanho(){
	return tamanho;
}
