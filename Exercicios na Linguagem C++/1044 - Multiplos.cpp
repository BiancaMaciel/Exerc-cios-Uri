#include <iostream>
 
using namespace std;
/*
Leia 2 valores inteiros (A e B). Ap�s, o programa deve mostrar uma mensagem "Sao Multiplos" ou "Nao sao Multiplos", indicando se os valores lidos s�o m�ltiplos entre si.

Entrada

A entrada cont�m valores inteiros.

Sa�da

A sa�da deve conter uma das mensagens conforme descrito acima.

Exemplo de Entrada	Exemplo de Sa�da
6 24
                    Sao Multiplos
6 25
                        Nao sao Multiplos
*/ 
int main() {
 
    int a, b, calc;
    std::cin >> a;
    std::cin >> b;
    if(b % a == 0 || a % b == 0)
    {
        std::cout<<"Sao Multiplos"<< std::endl;
    }
    else
    {
        std::cout<<"Nao sao Multiplos"<< std::endl;
    }

 
    return 0;
}
