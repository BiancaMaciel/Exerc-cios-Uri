#include <iostream>
 
using namespace std;


#include <iomanip>;
using std::setprecision;
/*
A f�rmula para calcular a �rea de uma circunfer�ncia �: area = p . raio2. Considerando para este problema que p = 3.14159:

- Efetue o c�lculo da �rea, elevando o valor de Raio ao quadrado e multiplicando por p.

Entrada

A entrada cont�m um valor de ponto flutuante (dupla precis�o), no caso, a vari�vel raio.

Sa�da

Apresentar a mensagem "A=" seguido pelo valor da vari�vel area, conforme exemplo abaixo, com 4 casas ap�s o ponto decimal. Utilize vari�veis de dupla precis�o (double). Como todos os problemas, n�o esque�a de imprimir o fim de linha ap�s o resultado, caso contr�rio, voc� receber� "Presentation Error".

Exemplos de Entrada	Exemplos de Sa�da
2.00
A=12.5664
100.64
A=31819.3103
150.00
A=70685.7750
*/
int main() {
    
    double area = 0., radius = 0., pi = 3.14159;
    std::cout<<"";
    std::cin>>radius;

    area = pi * (radius * radius);

    std::cout<<"A=" <<setprecision(4) << fixed << area  <<endl;

    return 0;
}
