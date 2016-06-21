#include <iostream>
 
using namespace std;
/*
Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 at� N, inclusive N, se for o caso.

Entrada

A entrada cont�m um valor inteiro N (5 < N < 2000).

Sa�da

Imprima o quadrado de cada um dos valores pares, de 1 at� N, conforme o exemplo abaixo.

Tome cuidado! Algumas linguagens tem por padr�o apresentarem como sa�da 1e+006 ao inv�s de 1000000 o que ocasionar� resposta errada. Neste caso, configure a precis�o adequadamente para que isso n�o ocorra.

Exemplo de Entrada	Exemplo de Sa�da
6
                            2^2 = 4
                            4^2 = 16
                            6^2 = 36
 
*/
 
int main() {
    int n;
    cin >> n;
    for(int i = 2; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            int result = i * i;
            cout<<"" << i << "^" << "2" << " = " << result << endl;
        }

    }
    return 0;
}
