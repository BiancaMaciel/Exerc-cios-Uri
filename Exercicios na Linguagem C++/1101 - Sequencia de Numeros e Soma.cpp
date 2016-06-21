#include <iostream>
 
using namespace std;
/*
Leia um conjunto n�o determinado de pares de valores M e N (parar quando algum dos valores for menor ou igual a zero). Para cada par lido, mostre a sequ�ncia do menor at� o maior e a soma dos inteiros consecutivos entre eles (incluindo o N e M).

Entrada

O arquivo de entrada cont�m um n�mero n�o determinado de valores M e N. A �ltima linha de entrada vai conter um n�mero nulo ou negativo.

Sa�da

Para cada dupla de valores, imprima a sequ�ncia do menor at� o maior e a soma deles, conforme exemplo abaixo.

Exemplo de Entrada	Exemplo de Sa�da
5 2
6 3
5 0
                    2 3 4 5 Sum=14
                    3 4 5 6 Sum=18
*/
int main() {
 int m = 1, n = 1, soma;
    while((m > 0) && (n > 0) )
    {
        cin >> m >> n;
        soma = 0;
        if (( m <= 0)||( n <= 0))
        {
            break;
        }
        else if (m > n)
        {
            for(n; n <= m; n++)
            {
                soma = soma + n;
                cout<< "" <<n<< " ";
            }
        }
        else if (n > m)
        {
            for(m; m <= n; m++)
            {
                soma = soma + m;
                cout<< "" <<m<< " ";
            }
        }
        cout<< "Sum=" <<soma << std::endl;
    }
 
    return 0;
}
