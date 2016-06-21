#include<iostream>
#include <iomanip>
using namespace std;
using std::setprecision;
/*
Leia 3 valores reais (A, B e C) e verifique se eles formam ou n�o um tri�ngulo. Em caso positivo, calcule o per�metro do tri�ngulo e apresente a mensagem:


Perimetro = XX.X


Em caso negativo, calcule a �rea do trap�zio que tem A e B como base e C como altura, mostrando a mensagem


Area = XX.X

Entrada

A entrada cont�m tr�s valores reais.

Sa�da

O resultado deve ser apresentado com uma casa decimal.

Exemplo de Entrada	Exemplo de Sa�da
6.0 4.0 2.0
                    Area = 10.0
6.0 4.0 2.1
                    Perimetro = 12.1
*/
int main()
{
    double a,b,c, calc;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;


    if(a+ b > c && c+b > a && a+c > b)
    {
        calc = a + b + c;
        std::cout<<"Perimetro = " << std::setprecision(1) << std::fixed << calc << std::endl;
    }
    else
    {
        calc = (((a + b) * c) / 2);

        std::cout<<"Area = " << std::setprecision(1) << std::fixed << calc << std::endl;
    }

    return 0;
}
