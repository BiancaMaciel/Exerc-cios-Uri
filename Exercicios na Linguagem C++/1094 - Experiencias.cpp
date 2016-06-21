#include<iostream>
#include <iomanip>
using namespace std;
using std::setprecision;

/*
Maria acabou de iniciar seu curso de gradua��o na faculdade de medicina e precisa de sua ajuda para organizar os experimentos de um laborat�rio o qual ela � respons�vel. Ela quer saber no final do ano, quantas cobaias foram utilizadas no laborat�rio e o percentual de cada tipo de cobaia utilizada.

Este laborat�rio em especial utiliza tr�s tipos de cobaias: sapos, ratos e coelhos. Para obter estas informa��es, ela sabe exatamente o n�mero de experimentos que foram realizados, o tipo de cobaia utilizada e a quantidade de cobaias utilizadas em cada experimento.

Entrada

A primeira linha de entrada cont�m um valor inteiro N que indica os v�rios casos de teste que vem a seguir. Cada caso de teste cont�m um inteiro Quantia (1 = Quantia = 15) que representa a quantidade de cobaias utilizadas e um caractere Tipo ('C', 'R' ou 'S'), indicando o tipo de cobaia (R:Rato S:Sapo C:Coelho).

Sa�da

Apresente o total de cobaias utilizadas, o total de cada tipo de cobaia utilizada e o percentual de cada uma em rela��o ao total de cobaias utilizadas, sendo que o percentual deve ser apresentado com dois d�gitos ap�s o ponto.

Exemplo de Entrada	Exemplo de Sa�da
10
10 C
6 R
15 S
5 C
14 R
9 C
6 R
8 S
5 C
14 R
                        Total: 92 cobaias
                        Total de coelhos: 29
                        Total de ratos: 40
                        Total de sapos: 23
                        Percentual de coelhos: 31.52 %
                        Percentual de ratos: 43.48 %
                        Percentual de sapos: 25.00 %
*/
int main()
{
    int experimento;
    std::string tipo;
    double pC = 0, pS = 0, pR = 0, total = 0;
    int somaC = 0, somaR = 0, somaS = 0, cont = 0, qnt = 0;
    cin >> qnt;
    while(cont < qnt)
    {
        cin>> experimento >> tipo;
        if(tipo == "C" || tipo == "c")
        {
                total += experimento;
                somaC += experimento;
        }
        if(tipo == "S" || tipo == "s")
        {
                total += experimento;
                somaS += experimento;
        }
        if( tipo == "R" || tipo == "r")
        {
                total += experimento;
                somaR += experimento;
        }
            cont++;
    }
    pC = (100 * somaC) / total;
    pS = (100 * somaS) / total;
    pR = (100 * somaR) / total;
    cout<< "Total: " << total <<" cobaias" << endl;
    cout<< "Total de coelhos: " << somaC << endl;
    cout <<"Total de ratos: " << somaR << endl;
    cout <<"Total de sapos: " <<somaS << endl;
    cout << "Percentual de coelhos: "<< std::setprecision(2) << std::fixed << pC <<" %" << endl;
    cout << "Percentual de ratos: "<<  std::setprecision(2) << std::fixed<< pR << " %" << endl;
    cout << "Percentual de sapos: "<<  std::setprecision(2) << std::fixed<< pS << " %" << endl;

    return 0;
}
