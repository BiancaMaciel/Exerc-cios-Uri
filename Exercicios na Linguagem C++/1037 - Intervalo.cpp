#include <iostream>
 
using namespace std;
/*
Voc� deve fazer um programa que leia um valor qualquer e apresente uma mensagem dizendo em qual dos seguintes intervalos ([0,25], (25,50], (50,75], (75,100]) este valor se encontra. Obviamente se o valor n�o estiver em nenhum destes intervalos, dever� ser impressa a mensagem �Fora de intervalo�.

O s�mbolo ( representa "maior que". Por exemplo:
[0,25]  indica valores entre 0 e 25.0000, inclusive eles.
(25,50] indica valores maiores que 25 Ex: 25.00001 at� o valor 50.0000000

Entrada

O arquivo de entrada cont�m um n�mero com ponto flutuante qualquer.

Sa�da

A sa�da deve ser uma mensagem conforme exemplo abaixo.

Exemplo de Entrada	Exemplo de Sa�da
25.01
Intervalo (25,50]
25.00
Intervalo [0,25]
100.00
Intervalo (75,100]
-25.02
Fora de intervalo
*/
 
int main() {
 
      double n;
    cin>>n;
    if(n >= 0 && n <= 25)
    {
        std::cout<< "Intervalo [0,25]" << std::endl;
    }
    if(n > 25 && n <= 50)
    {
        std::cout<< "Intervalo (25,50]" << std::endl;
    }
    if(n > 50 && n <= 75)
    {
        std::cout<< "Intervalo (50,75]" << std::endl;
    }
    if(n > 75 && n <= 100)
    {
        std::cout<< "Intervalo (75,100]" << std::endl;
    }
    if(n < 0 || n > 100)
    {
        std::cout<< "Fora de intervalo" << std::endl;
    }
    return 0;
}
