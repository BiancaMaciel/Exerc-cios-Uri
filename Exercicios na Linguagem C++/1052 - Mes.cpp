#include <iostream>
#include <map>
using namespace std;
/*
Leia um valor inteiro entre 1 e 12, inclusive. Correspondente a este valor, deve ser apresentado como resposta o m�s do ano por extenso, em ingl�s, com a primeira letra mai�scula.

Entrada

A entrada cont�m um �nico valor inteiro.

Sa�da

Imprima por extenso o nome do m�s correspondente ao n�mero existente na entrada, com a primeira letra em mai�scula.

Exemplo de Entrada	Exemplo de Sa�da
4
                            April
*/
 
int main() {
    int a;
    std::cin >> a;
    std::map<int, string> MyMap;
    std::map< int, string>::iterator MyIterMap;
    MyMap[1] = "January";
    MyMap[2] = "February";
    MyMap[3] = "March";
    MyMap[4] = "April";
    MyMap[5] = "May";
    MyMap[6] = "June";
    MyMap[7] = "July";
    MyMap[8] = "August";
    MyMap[9] = "September";
    MyMap[10] = "October";
    MyMap[11] = "November";
    MyMap[12] = "December";

    MyIterMap = MyMap.begin();

    for(int i = 0; i <= MyMap.size(); ++i)
    {
            if(i == a)
            {
                 int values = (*MyIterMap).first + a;
                 std::string teste = MyMap[values - 1] ;
                 std::cout<<"" << teste << std::endl;
            }

    }


 
    return 0;
}
