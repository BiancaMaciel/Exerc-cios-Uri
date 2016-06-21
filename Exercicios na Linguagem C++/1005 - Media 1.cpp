#include <iostream>
 
using namespace std;

#include <iomanip>;
using std::setprecision;
/*
Leia 2 valores de ponto flutuante de dupla precis�o A e B, que correspondem a 2 notas de um aluno. A seguir, calcule a m�dia do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 (A soma dos pesos portanto � 11). Assuma que cada nota pode ir de 0 at� 10.0, sempre com uma casa decimal.

Entrada

O arquivo de entrada cont�m 2 valores com uma casa decimal cada um.

Sa�da

Calcule e imprima a vari�vel MEDIA conforme exemplo abaixo, com 5 d�gitos ap�s o ponto decimal e com um espa�o em branco antes e depois da igualdade. Utilize vari�veis de dupla precis�o (double) e como todos os problemas, n�o esque�a de imprimir o fim de linha ap�s o resultado, caso contr�rio, voc� receber� "Presentation Error".

Exemplos de Entrada	Exemplos de Sa�da
5.0
7.1
MEDIA = 6.43182
0.0
7.1
MEDIA = 4.84091
10.0
10.0
MEDIA = 10.00000
*/
int main()
{

    //Exercicio 5
    double a, b, media;
    std::cout<<"";
    std::cout<<"";
    std::cin >> a;
    std::cin >> b;
    // 5 * 3,5 = 17,5 + 7.1 * 7,5 = 53,25 / 11 =
    media = (((a * 3.5) +  (b * 7.5)) / 11);
    std::cout << "MEDIA = "<< setprecision(5)<< fixed << media << endl;

    return 0;
}
