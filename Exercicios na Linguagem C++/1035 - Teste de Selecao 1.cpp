#include <iostream>
 
using namespace std;
/*
Leia 4 valores inteiros A, B, C e D. A seguir, se B for maior do que C e se D for maior do que A, e a soma de C com D for maior que a soma de A e B e se C e D, ambos, forem positivos e se a vari�vel A for par escrever a mensagem "Valores aceitos", sen�o escrever "Valores nao aceitos".

Entrada

Quatro n�meros inteiros A, B, C e D.

Sa�da

Mostre a respectiva mensagem ap�s a valida��o dos valores.

Exemplo de Entrada	Exemplo de Sa�da
5 6 7 8
Valores nao aceitos
2 3 2 6
Valores aceitos
*/ 
int main() {
 
  int a, b, c, d;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;
    int somaCD = c + d;
    int somaAB = a + b;
    int par = a % 2;
    if(b > c && d > a && somaCD > somaAB && c > -1 && d > -1 && par == 0)
    {
        std::cout<<"Valores aceitos"<< std::endl;
    }
    else
    {
        std::cout<<"Valores nao aceitos"<< std::endl;
    }

 
    return 0;
}
