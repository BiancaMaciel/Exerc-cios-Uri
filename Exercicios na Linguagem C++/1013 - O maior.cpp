#include<iostream>
using namespace std;
/*
Fa�a um programa que leia tr�s valores e apresente o maior dos tr�s valores lidos seguido da mensagem �eh o maior�. Utilize a f�rmula:



Entrada

O arquivo de entrada cont�m tr�s valores inteiros.

Sa�da

Imprima o maior dos tr�s valores seguido por um espa�o e a mensagem "eh o maior".

Exemplos de Entrada	Exemplos de Sa�da
7 14 106
                             106 eh o maior
217 14 6
                             217 eh o maior
*/
int funcao(int a, int b)
{
    int maior = ((a + b + std::abs(a - b))/ 2);
    return  maior;

}
int main()
{
    int a, b, c, resultado;
    std::cin >> a >> b >> c;
    resultado = funcao(a, b);
    resultado = funcao(resultado, c);
    std::cout <<"" << resultado << " eh o maior" << std::endl;
    return 0;
}
