#include <iostream>
 
using namespace std;
/*
Leia 2 valores inteiros e armazene-os nas vari�veis A e B. Efetue a soma de A e B atribuindo o seu resultado na vari�vel X. Imprima X conforme exemplo apresentado abaixo. N�o apresente mensagem alguma al�m daquilo que est� sendo especificado e n�o esque�a de imprimir o fim de linha ap�s o resultado, caso contr�rio, voc� receber� "Presentation Error".

Entrada

A entrada cont�m 2 valores inteiros.

Sa�da

Imprima a vari�vel X conforme exemplo abaixo, com um espa�o em branco antes e depois da igualdade. Obs: O X est� em mai�sculo e deve ter um espa�o antes e um espa�o depois do sinal de igualdade.

Exemplos de Entrada	Exemplos de Sa�da
10
9
X = 19
-10
4
X = -6
15
-7
X = 8
*/
 
int main() {
 
    int a, b, x;
    std::cout<<"";
    std::cout<<"";
    std::cin >> a;
    std::cin >> b;
    x = a + b;
    std::cout << "X = " << x << endl;
 
    return 0;
}
