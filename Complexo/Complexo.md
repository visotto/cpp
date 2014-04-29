Complexo
--------

Com base nas operações entre números complexos definidas em http://pt.wikipedia.org/wiki/N%C3%BAmero_complexo, as seguintes operações devem ser realizadas:

- Multiplicação entre dois complexo;
- Divisão entre dois complexos;
- Soma e subtração entre dois complexos, entre um double e um complexo e entre um int e um complexo, garantindo que essas operações sejam comutativas;
- Igualdade e diferença entre dois complexos (== e !=).

Se necessário, utilizar métodos auxiliares privados.

Incluir as sobrecargas dos operadores << e >> no programa, lembrando que existe o atributo ID também. Incluir a leitura de um número Complexo com cin e criar um vetor de 50 Complexos, inicializados todos com o número lido.

Utilizar a forma de sobrecarga mais apropriada para cada caso, de modo a garantir o melhor encapsulamento possível. Usar métodos e argumentos const sempre que possível.

Responder as seguintes questões:

1- Pense e discuta as semelhanças e diferenças entre as duas formas de sobrecarga, discutindo também sua implicação no encapsulamento.

2- O construtor de cópia é executado alguma vez no seu programa final? Em quais situações?

#####Dicas:

• Pensar qual seria o tipo de retorno de cada operador a ser sobrecarregado
- Complexo + double retorna o que?
- Complexo == Complexo retorna o que?

• O primeiro operando é da classe Complexo?

• De que tipo é o segundo operando?

#####Para compilar:
	g++ Complexo.cpp principal.cpp -o Complexo