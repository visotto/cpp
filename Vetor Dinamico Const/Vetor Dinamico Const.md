Vetor Dinâmico Const
--------------------

- Usar atributo “tamMax” constante na classe Vetor, que especifique o tamanho máximo do vetor;
- Na classe Vetor, o vetor é alocado dinamicamente;
- Aloca memória no construtor e liberar no destrutor;
- Permite que o usuário forneça o tamanho máximo do vetor como parâmetro nos construtores;
- Se não for fornecido o tamanho, usar 100 (default).

#####Para compilar:
	g++ VetorDinamicoConst.cpp main.cpp -o VetorDinamicoConst