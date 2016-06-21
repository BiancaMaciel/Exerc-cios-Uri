#include <iostream>
 
using namespace std;
/*
Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o ponto, ou se est� sobre um dos eixos cartesianos ou na origem (x = y = 0).



Se o ponto estiver na origem, escreva a mensagem �Origem�.

Se o ponto estiver sobre um dos eixos escreva �Eixo X� ou �Eixo Y�, conforme for a situa��o.

Entrada

A entrada contem as coordenadas de um ponto.

Sa�da

A sa�da deve apresentar o quadrante em que o ponto se encontra.

Exemplo de Entrada	Exemplo de Sa�da
4.5 -2.2
Q4
0.1 0.1
Q1
0.0 0.0
Origem
*/
 
int main() {
double x , y;
    std::cin >> x;
    std::cin >> y;

    if(x == 0  && y == 0)
    {
        std::cout <<"Origem"<< std::endl;
    }
    if(x == 0 && y != 0)
    {
       std::cout <<"Eixo Y"<< std::endl;
    }
    if( y == 0 && x != 0)
    {
        std::cout <<"Eixo X"<< std::endl;
    }

    if(x > 0 && y > 0)
    {
        std::cout <<"Q1"<< std::endl;
    }
    if(x > 0 && y < 0)
    {
        std::cout <<"Q4"<< std::endl;
    }

    if(x < 0 && y > 0)
    {
        std::cout <<"Q2"<< std::endl;
    }
    if(x < 0 && y < 0)
    {
        std::cout <<"Q3"<< std::endl;
    }
    return 0;
}
