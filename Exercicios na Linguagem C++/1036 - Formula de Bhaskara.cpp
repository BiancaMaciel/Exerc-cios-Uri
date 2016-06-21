#include<iostream>
#include <iomanip>
#include <math.h>
using namespace std;
using std::setprecision;
/*
Leia 3 valores de ponto flutuante e efetue o c�lculo das ra�zes da equa��o de Bhaskara. Se n�o for poss�vel calcular as ra�zes, mostre a mensagem correspondente �Impossivel calcular�, caso haja uma divis�o por 0 ou raiz de numero negativo.

Entrada

Leia tr�s valores de ponto flutuante (double) A, B e C.

Sa�da

Se n�o houver possibilidade de calcular as ra�zes, apresente a mensagem "Impossivel calcular". Caso contr�rio, imprima o resultado das ra�zes com 5 d�gitos ap�s o ponto, com uma mensagem correspondente conforme exemplo abaixo. Imprima sempre o final de linha ap�s cada mensagem.

Exemplos de Entrada	Exemplos de Sa�da
10.0 20.1 5.1
R1 = -0.29788
R2 = -1.71212
0.0 20.0 5.0
Impossivel calcular
10.3 203.0 5.0
R1 = -0.02466
R2 = -19.68408
10.0 3.0 5.0
Impossivel calcular
*/
int main()
{
    double a, b, c, delta;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    delta = ((b * b) - (4 * a * c));
    if(delta <= 0 || a == 0 || b == 0 || c == 0)
    {
        std::cout<<"Impossivel calcular"<< std::endl;
    }
    else
    {
        double x1 = ((- b + sqrt(delta)) / (2 * a));
        double x2 = ((- b - sqrt(delta)) / (2 * a));
        std::cout<< "R1 = "  << std::setprecision(5) << std::fixed<< x1 << std::endl;
        std::cout<< "R2 = "  << std::setprecision(5) << std::fixed<< x2 << std::endl;
    }

 
    return 0;
}
