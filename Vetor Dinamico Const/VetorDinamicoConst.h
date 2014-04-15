#include <iostream>

class Vetor {

  private:
    const int tamMax;
    int *elementos;
    int tamanho;
  
  public:
    Vetor(int tamMax=100); // cria um vetor vazio
    Vetor(int elem, int nRepeticoes, int tamMax=100); // cria um vetor com "nRepeticoes" posições preenchidas com o valor "elemento"
    ~Vetor(); //destrutor

    bool inserir(int elem); // insere um elemento na primeira posição vazia do vetor, caso haja espaço
    bool remover(int elem); // remove o elemento "elem" do vetor, caso ele exista
    int recuperarElemento(int posicao); // retorna o elemento da posição "posicao", e -1 caso a posição solicitada seja inválida
    void preencher(int elem, int nRepeticoes); // preenche o vetor com "nRepeticoes" posições preenchidas com o valor "elemento", independente do conteúdo prévio do vetor
    void imprimir(); // mostra o vetor na tela
};
