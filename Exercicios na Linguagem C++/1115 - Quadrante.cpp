#include <iostream>
/*
Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de pontos no sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence. O algoritmo ser� encerrado quando pelo menos uma de duas coordenadas for NULA (nesta situa��o sem escrever mensagem alguma).

Entrada

A entrada cont�m v�rios casos de teste. Cada caso de teste cont�m 2 valores inteiros.

Sa�da

Para cada caso de teste mostre em qual quadrante do sistema cartesiano se encontra a coordenada lida, conforme o exemplo.

Exemplo de Entrada	Exemplo de Sa�da
2 2
3 -2
-8 -1
-7 1
0 2
                            primeiro
                            quarto
                            terceiro
                            segundo
*/
using namespace std;
 
int main() {
 
     int x = 0, y = 0;

    do
    {
        cin >> x >> y;
        if(x > 0 && y > 0)
            cout<<"primeiro" << std::endl;
        else if (x > 0 && y < 0)
            cout <<  "quarto"<< std::endl;
        else if(x < 0 && y < 0)
            cout<<"terceiro" << std::endl;
        else if (x < 0 && y > 0)
            cout <<  "segundo"<< std::endl;
        else if (x == 0 || y == 0)
            break;

    }while(x != 0 && y != 0);
    return 0;
}
 
