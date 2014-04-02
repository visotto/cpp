Classe Pessoa
-------------

Fazer a definição da classe Pessoa com os seguintes atributos e métodos:




andar: deve receber o tamanho do passo e o número de passos dados e usar o método darUmPasso para auxiliar na atualização do número da distância percorrida.
comer: deve acrescentar 1 ao número de refeições e diminuir 3 pontos de fome.
dormir: deve receber o número de horas que devem ser dormidas e atualizar o total de horas dormidas. A cada 6 horas dormidas, diminui-se 8 pontos de cansaço. Não é possível dormir mais de 12 horas seguidas.
checkup: mostra na tela o número de metros andados, horas dormidas e refeições feitas
trabalhar: trabalhar deve receber o numero de horas trabalhadas no dia, até um máximo de 10 horas, e somar ao total de horas trabalhadas. Gera 2 "pontos de fome" e 4 "pontos de cansaço" a cada 4 horas trabalhadas.

Fazer um programa principal que crie 2 pessoas e envie mensagens a elas solicitando o comportamento que vocês desejarem, utilizando a interface da classe.


#####Para compilar:
	g++ Pessoa.cpp main.cpp -o ClassePessoa