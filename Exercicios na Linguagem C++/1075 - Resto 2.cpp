#include <iostream>
 
using namespace std;
/*
Leia um valor inteiro N. Apresente todos os n�meros entre 1 e 10000 que divididos por N d�o resto igual a 2.

Entrada

A entrada cont�m um valor inteiro N (N < 10000).

Sa�da

Imprima todos valores que quando divididos por N d�o resto = 2, um por linha.

Exemplo de Entrada	Exemplo de Sa�da
13
                        2
                        15
                        28
                        41
                        ...
*/ 
int main() {
 
    int a, b;
    std::cin >> a;

    for(int i = 1; i < 10000; i++)
    {
        if(i % a == 2)
        {
            cout<<"" << i <<std::endl;
        }
    }
    return 0;
}
