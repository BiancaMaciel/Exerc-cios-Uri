#include <iostream>
 
using namespace std;

/*
Leia um valor inteiro N. Este valor ser� a quantidade de valores inteiros X que ser�o lidos em seguida.
Mostre quantos destes valores X est�o dentro do intervalo [10,20] e quantos est�o fora do intervalo, mostrando essas informa��es.

Entrada

A primeira linha da entrada cont�m um valor inteiro N (N < 10000), que indica o n�mero de casos de teste.
Cada caso de teste a seguir � um valor inteiro X (-107 < X <107).
 

Sa�da

Para cada caso, imprima quantos n�meros est�o dentro (in) e quantos valores est�o fora (out) do intervalo.

Exemplo de Entrada	Exemplo de Sa�da
4
14
123
10
-25
                            2 in
                            2 out
*/ 
int main() {
 
     int n, qntd, in = 0, out =0;
    cin>>qntd;
    for(int i = 0; i < qntd; i++)
    {
        cin >> n;
        if(n >= 10 && n <= 20)
        {
            in +=1;
        }
        else
        {
            out+=1;
        }

    }
    cout <<"" << in << " in" << endl;
    cout <<"" << out<< " out" << endl;
    return 0;
}
