#include <iostream>
 
using namespace std;
 
/*
Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e atribua esta opera��o � vari�vel PROD. A seguir mostre a vari�vel PROD com mensagem correspondente.   

Entrada

O arquivo de entrada cont�m 2 valores inteiros.

Sa�da

Imprima a vari�vel PROD conforme exemplo abaixo, com um espa�o em branco antes e depois da igualdade. N�o esque�a de imprimir o fim de linha ap�s o produto, caso contr�rio seu programa apresentar� a mensagem: �Presentation Error�.

Exemplos de Entrada	Exemplos de Sa�da
3
9
PROD = 27
-30
10
PROD = -300
0
9
PROD = 0
*/ 
int main() {
 
    
    int a, b, x;
    std::cout<<"";
    std::cout<<"";
    std::cin >> a;
    std::cin >> b;
    x = a * b;
    std::cout << "PROD = " << x << endl;

 
    return 0;
}
