Data
----

- Construtor padrão que cria o objeto com a data atual do sistema;

- Construtor que recebe como parâmetros o dia, mês e ano comos quais o objeto deve ser inicializado;
- Checagem de dia, mês e ano corretos nas funções atualizaDia,atualizaMes e atualizaAno;
- Método getMes que retorna uma string com o nome do mês porextenso;

- Com base na classe Vetor, que implementa um vetor de inteiros, foi criado uma classe VetorData que implementa um vetor de Datas;

- Vetor implementado como um vetor de ponteiros;
- A cada data inserida, é alocado dinamicamente o espaço para seu armazenamento no vetor;
- No destrutor, é liberada toda a memória alocada.

#####Para compilar:
	g++ data.cpp main.cpp -o data