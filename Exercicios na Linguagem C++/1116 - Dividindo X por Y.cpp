#include<iostream>
#include <iomanip>
#include <math.h>
#include <map>
#include <vector>
using namespace std;
using std::setprecision;

/*
Escreva um algoritmo que leia 2 n�meros e imprima o resultado da divis�o do primeiro pelo segundo. Caso n�o for poss�vel mostre a mensagem �divisao impossivel� para os valores em quest�o.

Entrada

A entrada cont�m um n�mero inteiro N. Este N ser� a quantidade de pares de valores inteiros (X e Y) que ser�o lidos em seguida.

Sa�da

Para cada caso mostre o resultado da divis�o com um d�gito ap�s o ponto decimal, ou �divisao impossivel� caso n�o seja poss�vel efetuar o c�lculo.

Obs.: Cuide que a divis�o entre dois inteiros em algumas linguagens como o C e C++ gera outro inteiro. Utilize cast :)

Exemplo de Entrada	Exemplo de Sa�da
3
3 -2
-8 0
0 8
                           -1.5
                           divisao impossivel
                           0.0
*/
int main()
{
    int n = 0 , cont = 0;
    double x = 0., y = 0.;
    double calc;

    cin >> n;
    while(cont < n)
    {
        cin >> x >> y;
        if(y== 0)
            cout<<"divisao impossivel"<< std::endl;
        else
        {
            calc  = x / y;
            cout<<calc <<std::setprecision(1) << std::fixed <<std::endl;
        }
        cont++;
    }
    return 0;
}
