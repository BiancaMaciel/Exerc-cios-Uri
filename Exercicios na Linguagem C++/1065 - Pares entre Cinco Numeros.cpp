#include <iostream>
 
using namespace std;
/*
Fa�a um programa que leia 5 valores inteiros. Conte quantos destes valores digitados s�o pares e mostre esta informa��o.

Entrada

O arquivo de entrada cont�m 5 valores inteiros quaisquer.

Sa�da

Imprima a mensagem conforme o exemplo fornecido, indicando a quantidade de valores pares lidos.

Exemplo de Entrada	Exemplo de Sa�da
7
-5
6
-4
12
                    3 valores pares
*/ 
int main() {
 
   int a, cont = 0, aux = 0;
    std::cin >> a;
    while(cont < 4)
    {
        std::cin >> a;
        if(a%2==0)
        {
            aux++;
        }
        cont++;
    }
    cout<<""<< aux<<" valores pares"<<endl;
 
    return 0;
}
