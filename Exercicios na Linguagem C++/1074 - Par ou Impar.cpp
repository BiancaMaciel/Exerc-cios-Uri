#include <iostream>
#include <vector>
using namespace std;
/*
Leia um valor inteiro N. Este valor ser� a quantidade de valores que ser�o lidos em seguida. Para cada valor lido, mostre uma mensagem em ingl�s dizendo se este valor lido � par (EVEN), �mpar (ODD), positivo (POSITIVE) ou negativo (NEGATIVE). No caso do valor ser igual a zero (0), embora a descri��o correta seja (EVEN NULL), pois por defini��o zero � par, seu programa dever� imprimir apenas NULL.

Entrada

A primeira linha da entrada cont�m um valor inteiro N(N < 10000) que indica o n�mero de casos de teste. Cada caso de teste a seguir � um valor inteiro X (-107 < X <107).

Sa�da

Para cada caso, imprima uma mensagem correspondente, de acordo com o exemplo abaixo. Todas as letras dever�o ser mai�sculas e sempre dever� haver um espa�o entre duas palavras impressas na mesma linha.

Exemplo de Entrada	Exemplo de Sa�da
4
-5
0
3
-4
                            ODD NEGATIVE
                            NULL
                            ODD POSITIVE
                            EVEN NEGATIVE
*/
int main()
{
    int a, b,  cont;
    vector<std::string> vec;
    std::cin >> a;
    cont= 0;
    while(cont < a)
    {
     std::cin >> b;
       if(b == 0)
        {
            vec.push_back("NULL");
        }
        else if (b > 0 && b % 2 != 0)
        {
            vec.push_back("ODD POSITIVE");
        }
        else if (b < 0 && b % 2 != 0)
        {
            vec.push_back("ODD NEGATIVE");
        }
        else if(b > 0 && b % 2 == 0)
        {
            vec.push_back("EVEN POSITIVE");
        }
        else if(b < 0 && b % 2 == 0)
        {
            vec.push_back("EVEN NEGATIVE");
        }
        cont++;
    }

    for(int i = 0; i < vec.size(); i++)
    {
        cout<< "" << vec[i] << endl;
    }
    return 0;   
}    
