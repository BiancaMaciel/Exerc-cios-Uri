#include <iostream>
using namespace std;
 
/*
Leia 100 valores inteiros. Apresente ent�o o maior valor lido e a posi��o dentre os 100 valores lidos.

Entrada

O arquivo de entrada cont�m 100 n�meros inteiros, positivos e distintos.

Sa�da

Apresente o maior valor lido e a posi��o de entrada, conforme exemplo abaixo.

Exemplo de Entrada	Exemplo de Sa�da
2
113
45
34565
6
...
8
 
                            34565
                            4
*/
int main() {
 int maior = 0, n, po= 0;
    for(int i = 1; i <= 100; i++)
    {
        cin >> n;
        if(n > maior)
        {
            maior = n;
            po = i;
        }
    }
    cout<<"" << maior << endl;
    cout<<"" << po<< endl;

    return 0;
}
