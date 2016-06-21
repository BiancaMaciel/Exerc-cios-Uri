#include<iostream>
#include <iomanip>
#include <math.h>
using namespace std;
using std::setprecision;
/*
Escreva um programa que leia tr�s valores com ponto flutuante de dupla precis�o: A, B e C. Em seguida, calcule e mostre: 
a) a �rea do tri�ngulo ret�ngulo que tem A por base e C por altura. 
b) a �rea do c�rculo de raio C. (pi = 3.14159) 
c) a �rea do trap�zio que tem A e B por bases e C por altura. 
d) a �rea do quadrado que tem lado B. 
e) a �rea do ret�ngulo que tem lados A e B. 
Entrada

O arquivo de entrada cont�m tr�s valores com um d�gito ap�s o ponto decimal.

Sa�da

O arquivo de sa�da dever� conter 5 linhas de dados. Cada linha corresponde a uma das �reas descritas acima, sempre com mensagem correspondente e um espa�o entre os dois pontos e o valor. O valor calculado deve ser apresentado com 3 d�gitos ap�s o ponto decimal.

Exemplos de Entrada	Exemplos de Sa�da
3.0 4.0 5.2
                        TRIANGULO: 7.800
                        CIRCULO: 84.949
                        TRAPEZIO: 18.200
                        QUADRADO: 16.000
                        RETANGULO: 12.000
12.7 10.4 15.2
                        TRIANGULO: 96.520
                        CIRCULO: 725.833
                        TRAPEZIO: 175.560
                        QUADRADO: 108.160
                        RETANGULO: 132.080
*/
int main()
{
    double a, b, c,  pi = 3.14159, TRIANGULO, CIRCULO,TRAPEZIO, QUADRADO, RETANGULO;
    std::cin >> a >> b >> c;
    TRIANGULO = ((a * c)/2);
    CIRCULO = ((c * c) * pi);
    TRAPEZIO = (((a +  b) * c ) / 2);
    QUADRADO = (b * b);
    RETANGULO = ( a * b);

    std::cout << "TRIANGULO: " << std::setprecision(3) << std::fixed << TRIANGULO << std::endl;
    std::cout << "CIRCULO: " << std::setprecision(3) << std::fixed << CIRCULO << std::endl;
    std::cout << "TRAPEZIO: " << std::setprecision(3) << std::fixed << TRAPEZIO << std::endl;
    std::cout << "QUADRADO: " << std::setprecision(3) << std::fixed << QUADRADO << std::endl;
    std::cout << "RETANGULO: " << std::setprecision(3) << std::fixed << RETANGULO << std::endl ;

    return 0;
}
