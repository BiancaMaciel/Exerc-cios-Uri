#include <iostream>
 
using namespace std;
/*
Fa�a um programa que mostre os n�meros pares entre 1 e 100, inclusive.

Entrada

Neste problema extremamente simples de repeti��o n�o h� entrada.

Sa�da

Imprima todos os n�meros pares entre 1 e 100, inclusive se for o caso, um em cada linha.

Exemplo de Entrada	Exemplo de Sa�da
                        2
                        4
                        6
                        ...
                        100
*/
 
int main() {
 
    for(int i = 2; i <= 100; ++i)
    {
        if(i % 2 == 0)
        {
            std::cout<<i<<std::endl;
        }
    }
    return 0;
}
