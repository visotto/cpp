Observando os códigos providenciados, é possível ter um melhor entendimento da manipulação de classes em C++. Um desses conceitos é o polimorfismo na herança.

No programa, é possível usar as mesmas funções para tratar diversas classes derivadas. Tal manipulação é possível graças a um conceito chamado 'ligação dinâmica' que possibilita o programa a escolher o método apropriado a ser utilizado. Fazemos essa declaração de ligação pelo uso da palavra chave 'virtual' na declaração
o que indica que a função pode ser sobreescrita por uma função derivada.

Essa técnica é usada na herança, pois facilita a modelagem, podendo ser criadas classes específicas, mas que no geral são todas parecidas, ou seja, usam funções iguais.