/*
 * gerenciaFormas.cpp
 *
 *  Created on: 21/10/2008
 *      Author: katti
 */

#include <iostream>
using namespace std;

#include "triangulo.h"
#include "retangulo.h"
#include "circulo.h"
#include "esfera.h"
#include "Forma.h"

using namespace std;

template <class Geral>

void ordena(Geral **vet, int nObj){
	Geral *aux;

	for(int i = 0; i < nObj; i++){
		for(int j = 0; j < nObj - 1; j++){
			if(*vet[j] > *vet[j+1]){
				aux = vet[j];
				vet[j] = vet[j + 1];
				vet[j + 1] = aux;
			}
		}
	}
}

Forma *criaForma()
{
	Forma *pForma;
	int formaCriar;
	cout << endl << endl;
	cout<<"1 - Circulo" << endl;
	cout<<"2 - Triangulo" << endl;
	cout<<"3 - Retangulo" << endl;
	cout<<"4 - Esfera" << endl;

	cout<<"Qual forma desena criar? " << endl;
	cin >> formaCriar;
	cin.get();
	cout << endl;
	switch(formaCriar)
	{
		case 1:
		{
			float r;
			cout << "Raio do circulo: ";
			cin >> r;
			pForma = new circulo(r);
			break;
		}
		case 2:
		{
			float a, b, c;
			cout << "Lado 1 do triangulo: ";
			cin >> a;
			cout << "Lado 2 do triangulo: ";
			cin >> b;
			cout << "Lado 3 do triangulo: ";
			cin >> c;
			pForma = new triangulo(a, b, c);
			break;
		}
		case 3:
		{
			float b, h;
			cout << "Base do retangulo: ";
			cin >> b;
			cout << "Altura do retangulo: ";
			cin >> h;
			pForma = new retangulo(b, h);
			break;
		}
		case 4:
		{
			float r;
			cout << "Raio da esfera: ";
			cin >> r;
			pForma = new esfera(r);
			break;
		}
	}
	return pForma;
}

void mostrarFormas(Forma *f[])
{
	int i = 0;
	cout << endl << "As formas criadas sao: " << endl;
	while (f[i] != NULL)
	{
		cout << endl << "A forma " << i+1 << " tem " << f[i]->nDimensoes()
		<< " dimensoes  e eh um " << f[i]->nomeForma() << endl;
		cout << "Perimetro: " << f[i]->perimetro() << endl;
		cout << "Area: " << f[i]->area() << endl;
		cout << "Volume: " << f[i]->volume() << endl << endl;
		i++;
	}
}

bool operator>(Forma& f1, Forma& f2){
	if(f1.nDimensoes() > f2.nDimensoes()){
		return 1;
	}
	if(f1.nDimensoes() < f2.nDimensoes()){
		return 0;
	}
	if(f1.nDimensoes() == 2){
		return f1.area() > f2.area();
	}
	return f1.volume() > f2.volume();
}

int main()
{
	Forma *vetFormas[50];
	int i;
	for (i = 0; i < 50; i++)
	{
		vetFormas[i] = NULL;
	}

	int formaAtual = 0;
	int selecao;
	do
	{
		cout << endl;
		cout << "1 - Criar forma" << endl;
		cout << "2 - Mostrar formas" << endl;
		cout << "3 - Ordenar formas" << endl;
		cout << "4 - Sair" << endl;
		cout << "O que deseja fazer? ";
		cin >> selecao;
		cin.get();
		switch(selecao)
		{
			case 1:
			{
				vetFormas[formaAtual] = criaForma();
				formaAtual++;
				break;
			}
			case 2:
			{
				mostrarFormas(vetFormas);
				break;
			}
			case 3:
			{
				int tam = 0;
				while(vetFormas[tam] != NULL){
					tam++;
				}
				ordena<Forma>(vetFormas, tam);
			}
		}

	} while ( selecao != 4 );

	i = 0;
	while (vetFormas[i] != NULL)
	{
		delete vetFormas[i];
		vetFormas[i] = NULL;
		i++;
	}
}
