#include <iostream>
/*
Leia 2 valores inteiros X e Y. A seguir, calcule e mostre a soma dos n�meros impares entre eles.

Entrada

O arquivo de entrada cont�m dois valores inteiros.

Sa�da

O programa deve imprimir um valor inteiro. Este valor � a soma dos valores �mpares que est�o entre os valores fornecidos na entrada que dever� caber em um inteiro.

Exemplo de Entrada	Exemplo de Sa�da
6
-5
5
15
12
13
12
12
0
*/ 
using namespace std;
 
int main() {
 
    int x = 0, y = 0, soma = 0;
    cin>>x>>y;
    if(x > y)
    {
        for(int i = x - 1; i > y; i--)
        {
            if(i % 2 != 0)
            {
                soma = soma + i;
            }
        }
        cout << soma << std::endl;
        soma = 0;
    }
    else if (x == y ||  y == x)
    {
        cout << soma << std::endl;
    }
    return 0;
}#include <iostream>
 
using namespace std;
 
int main() {
 
    int x = 0, y = 0, soma = 0;
    cin>>x>>y;
    if(x > y)
    {
        for(int i = x - 1; i > y; i--)
        {
            if(i % 2 != 0)
            {
                soma = soma + i;
            }
        }
        cout << soma << std::endl;
        soma = 0;
    }
    else if (x == y ||  y == x)
    {
        cout << soma << std::endl;
    }
    return 0;
}
