#include<iostream>
#include <iomanip>
using namespace std;
using std::setprecision;

/*
Neste problema, deve-se ler o c�digo de uma pe�a 1, o n�mero de pe�as 1, o valor unit�rio de cada pe�a 1, o c�digo de uma pe�a 2, o n�mero de pe�as 2 e o valor unit�rio de cada pe�a 2. Ap�s, calcule e mostre o valor a ser pago.

Entrada

O arquivo de entrada cont�m duas linhas de dados. Em cada linha haver� 3 valores, respectivamente dois inteiros e um valor com 2 casas decimais.

Sa�da

A sa�da dever� ser uma mensagem conforme o exemplo fornecido abaixo, lembrando de deixar um espa�o ap�s os dois pontos e um espa�o ap�s o $. O valor dever� ser apresentado com 2 casas ap�s o ponto.

Exemplos de Entrada	Exemplos de Sa�da
12 1 5.30
16 2 5.10
VALOR A PAGAR: R$ 15.50
13 2 15.30
161 4 5.20
VALOR A PAGAR: R$ 51.40
1 1 15.10
2 1 15.10
VALOR A PAGAR: R$ 30.20
*/
int main()
{
    int code1, code2, num1, num2;
    double valor1, valor2, calc ;
    std::cin >> code1 >> num1 >> valor1;
    std::cin >> code2 >> num2 >> valor2;
    calc = ((num1 * valor1) + (num2 * valor2));
    std::cout << "VALOR A PAGAR: R$ " << std::setprecision(2) << std::fixed << calc << std::endl;

    return 0;
}
