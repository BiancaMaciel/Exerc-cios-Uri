#include <iostream>
 
using namespace std;
/*
Leia dois valores inteiros, no caso para vari�veis A e B. A seguir, calcule a soma entre elas e atribua � vari�vel SOMA. A seguir escrever o valor desta vari�vel.

Entrada

O arquivo de entrada cont�m 2 valores inteiros.

Sa�da

Imprima a vari�vel SOMA com todas as letras mai�sculas, com um espa�o em branco antes e depois da igualdade seguido pelo valor correspondente � soma de A e B. Como todos os problemas, n�o esque�a de imprimir o fim de linha ap�s o resultado, caso contr�rio, voc� receber� "Presentation Error".

Exemplos de Entrada	Exemplos de Sa�da
30
10
SOMA = 40
-30
10
SOMA = -20
0
0
SOMA = 0
*/ 
int main() {
 
   int a, b, x;
    std::cout<<"";
    std::cout<<"";
    std::cin >> a;
    std::cin >> b;
    x = a + b;
    std::cout << "SOMA = " << x << endl;
 
    return 0;
}
