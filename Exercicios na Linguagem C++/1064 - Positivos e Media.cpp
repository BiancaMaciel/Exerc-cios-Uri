#include<iostream>
#include <iomanip>
using namespace std;
using std::setprecision;

/*
Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos. Na pr�xima linha, deve-se mostrar a m�dia de todos os valores positivos digitados, com um d�gito ap�s o ponto decimal.

Entrada

A entrada cont�m 6 n�meros que podem ser valores inteiros ou de ponto flutuante. Pelo menos um destes n�mero ser� positivo.

Sa�da

O primeiro valor de sa�da � a quantidade de valores positivos. A pr�xima linha deve mostrar a m�dia dos valores positivos digitados.

Exemplo de Entrada	Exemplo de Sa�da
7
-5
6
-3.4
4.6
12
                   4 valores positivos
                   7.4
*/
int main()
{
    double n;
    double  var = 0, soma =0;
    for(int i = 0; i < 6; i++)
    {
        cin >> n;
        if(n > 0)
        {
            var +=1;
            soma += n;
        }
    }
    double media = soma / var;
    cout <<"" << var << " valores positivos" << endl;
    cout <<"" << media<< endl;
 
    return 0;
}
