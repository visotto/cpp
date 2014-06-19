//Classe Vetor.h

class Vetor{

private:
	//tamanho do vetor			
	int tamanho;	
	//eh um vetor de classe, 
	int *elementos;
	int tamanhoMaximo;
	
public:
		
	Vetor(const int &max = 100);	
	Vetor(const Vetor &v);
	~Vetor();
	
	void preencher(const int &elemento, const int &nRepeticoes);
	bool inserir(const int &elemento);
	bool remover(const int &elemento);
	int recuperarElemento(const int &posicao) const;
	void imprimir() const;
	int getTamanho();
};
