#include <iostream>
//#include "Vetor.h"
#include "VetorExtendido.h"

using namespace std;

int main(){
	
	//Cria Objeto
	VetorExtendido vet;

	//vet.inicializar();
	
	int menu = -1;
	int elemento;
	int nRepeticoes;
	int posicao;
	int recuperado;
	
	while (menu != 0){
		
		cout << endl << "Escolha uma das opcoes abaixo:" << endl;
		cout << "00 - Para Sair." << endl;
		cout << "01 - Para inserir um elemento no vetor." << endl;
		cout << "02 - Para remover um elemento no vetor." << endl;
		cout << "03 - Para recuperar um elemento no vetor." << endl;
		cout << "04 - Para preencher o vetor com um determinado elemento." << endl;
		cout << "05 - Para imprimir os elementos do vetor." << endl;
		cout << "06 - Para obter o primeiro elemento do vetor." << endl;
		cout << "07 - Para obter o ultimo elemento do vetor." << endl;
		cout << "08 - Para obter a soma dos elementos do vetor." << endl;
		cout << "09 - Para obter a media dos elementos do vetor." << endl;
		cout << "10 - Para verificar se um elemento pertence ao vetor." << endl;
		
		
		cin >> menu;
		
		switch (menu) {
            //Para sair
            case 0:{
               	cout << "Bye!" << endl;
                break;
            }
			case 1:{
                cout << "Digite o elemento que deseja inserir" << endl;
                cin >> elemento;
                if (vet.inserir(elemento))
                	cout << "Elemento " << elemento << ", inserido com sucesso!" << endl;
                else
                	cout << "Nao foi possivel inserir o elemento, verifique se o vetor nao esta cheio" << endl;
                break;
            }
            case 2:{
                cout << "Digite o elemento que deseja remover" << endl;
                cin >> elemento;
                if (vet.remover(elemento))
                	cout << "Elemento " << elemento << ", removido com sucesso!" << endl;
                else
                	cout << "Nao foi possivel encontrar o elemento ou vetor esta vazio!" << endl;
                break;
            }
            case 3:{
                cout << "Digite a posicao do elemento que deseja recuperar" << endl;
                cin >> posicao;
                recuperado = vet.recuperarElemento(posicao);
                if (recuperado != -1)
                	cout << "Elemento recuperado foi o numero " << recuperado << "." << endl;
                else
                	cout << "Nao foi possivel encontrar o elemento!" << endl;
                break;
            }
            case 4:{
                cout << "Digite o numero com o qual voce deseja preencher o vetor" << endl;
                cin >> elemento;
                cout << "Quantas repeticoes do elemento voce deseja?"<< endl;
                cin >> nRepeticoes;
                vet.preencher(elemento, nRepeticoes);
                break;
            }

            case 5:{
            	Vetor vet2(vet);
            	cout << "vet" << endl;
               	vet.imprimir();
               	cout << endl << "vet 2" << endl;
               	vet2.imprimir();
                break;
            }
		//Fornecer o primeiro elemento do vetor
            case 6:{
            	int primeiro;
            	primeiro = vet.primeiroElemento();
				cout << "O primeiro elemento vetor[0] = "<< + primeiro <<endl;
            	break;
            }
        //Fornecer o último elemento do vetor    
            case 7:{
            	int ultimo;
            	ultimo = vet.ultimoElemento();
				cout << "O ultimo elemento do vetor = " << + ultimo <<endl;
            	break;
            }
        //Fornecer a soma dos elementos do vetor 
            case 8:{
            	int soma;
            	soma = vet.somaElementos();
            	cout << "A soma dos elementos do Vetor = "<< + soma <<endl;
            	break;
            }
        //Fornecer a média dos elementos do vetor
            case 9:{
            	int media;
            	media = vet.mediaElementos();
            	cout << "A media dos elementos do Vetor = "<< + media <<endl;
            	break;
            }
    	//Verificar se um determinado elemento pertence ao vetor
            case 10:{
            	int elemento = 0;
            	cout << "Digite qual elemento deseja verificar se esta contido no vetor: "<<endl;
            	cin >> elemento;
            	if(vet.procuraElemento(elemento))
            		cout << "O elemento "<< + elemento << " esta contido no vetor."<<endl;
            	else
            		cout << "O elemento "<< + elemento << " NAO esta contido no vetor."<<endl;
            	break;
            }

            default: {
                cout << "Digite um numero valido" << endl;
                break;
            }
        }// fim switch
	}

	return 0;
}
