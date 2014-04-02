Classe Pessoa
-------------

Fazer a definição da classe Pessoa com os seguintes atributos e métodos:
#####Atributos
-distância: Distância percorrida pela pessoa, em metros (inicialmente 0).
-horasDormidas: Número de horas dormidas (inicialmente 0). - horasTrabalhadas: Número de horas que a pessoa trabalhou no dia. (inicialmente 0)
-nRefeicoes: Número de refeições feitas (inicialmente 0).-cansaço: Nível de cansaço da pessoa. Se o cansaço chegar a 12 pontos, a pessoa não pode mais trabalhar e deve dormir para diminuir seu cansaço. (inicialmente 5)-fome: Nível de fome da pessoa. Caso a pessoa tenha 10 ponto de fome, ela não poderá fazer mais nada, senão comer. (inicialmente 3).#####Métodos-darUmPasso: implementa o comportamento de dar um passo - deve receber o tamanho do passo (em metros) e somar na distância percorrida pela pessoa.+andar: deve receber o tamanho do passo e o número de passos dados e usar o método darUmPasso para auxiliar na atualização do número da distância percorrida.+comer: deve acrescentar 1 ao número de refeições e diminuir 3 pontos de fome.+dormir: deve receber o número de horas que devem ser dormidas e atualizar o total de horas dormidas. A cada 6 horas dormidas, diminui-se 8 pontos de cansaço. Não é possível dormir mais de 12 horas seguidas.+checkup: mostra na tela o número de metros andados, horas dormidas e refeições feitas+trabalhar: trabalhar deve receber o numero de horas trabalhadas no dia, até um máximo de 10 horas, e somar ao total de horas trabalhadas. Gera 2 "pontos de fome" e 4 "pontos de cansaço" a cada 4 horas trabalhadas.Acrescentar os métodos que julgar necessários e fazer a implementação da classe Pessoa.

Fazer um programa principal que crie 2 pessoas e envie mensagens a elas solicitando o comportamento que vocês desejarem, utilizando a interface da classe.
Considerar que a interface da classe é composta pelos métodos andar, comer, dormir, trabalhar e checkup .

#####Para compilar:
	g++ Pessoa.cpp main.cpp -o ClassePessoa