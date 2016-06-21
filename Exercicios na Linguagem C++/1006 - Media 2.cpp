#include <iostream>
 
using namespace std;
 
#include <iomanip>;
using std::setprecision;
/*
Leia 3 valores, no caso, vari�veis A, B e C, que s�o as tr�s notas de um aluno. A seguir, calcule a m�dia do aluno, sabendo que a nota A tem peso 2, a nota B tem peso 3 e a nota C tem peso 5. Considere que cada nota pode ir de 0 at� 10.0, sempre com uma casa decimal.

Entrada

O arquivo de entrada cont�m 3 valores com uma casa decimal, de dupla precis�o (double).

Sa�da

Imprima a vari�vel MEDIA conforme exemplo abaixo, com 1 d�gito ap�s o ponto decimal e com um espa�o em branco antes e depois da igualdade. Assim como todos os problemas, n�o esque�a de imprimir o fim de linha ap�s o resultado, caso contr�rio, voc� receber� "Presentation Error".

Exemplos de Entrada	Exemplos de Sa�da
5.0
6.0
7.0
MEDIA = 6.3
5.0
10.0
10.0
MEDIA = 9.0
10.0
10.0
5.0
MEDIA = 7.5
*/
int main()
{
    double a, b, c,media;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    media=( a * 2 + b * 3 + c * 5)/10;
    std::cout << "MEDIA = "<< std::setprecision(1)<< std::fixed << media <<std::endl ;

    return 0;
}
