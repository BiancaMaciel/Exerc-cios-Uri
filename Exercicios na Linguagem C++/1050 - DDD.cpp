#include <iostream>
 
using namespace std;

/*
Leia um n�mero inteiro que representa um c�digo de DDD para discagem interurbana. Em seguida, informe � qual cidade o DDD pertence, considerando a tabela abaixo:




Se a entrada for qualquer outro DDD que n�o esteja presente na tabela acima, o programa dever� informar:
DDD nao cadastrado

Entrada

A entrada consiste de um �nico valor inteiro.

Sa�da

Imprima o nome da cidade correspondente ao DDD existente na entrada. Imprima DDD nao cadastrado caso n�o existir DDD correspondente ao n�mero digitado.

Exemplo de Entrada	Exemplo de Sa�da
11
                        Sao Paulo
*/
int main() {
 
   int n;
    cin>>n;
    if(n == 61)
    {
        cout<<"Brasilia"<<endl;
    }
    else if(n == 71)
    {
        cout<< "Salvador" << endl;
    }
    else if(n == 11)
    {
        cout<<"Sao Paulo" << endl;
    }
    else if(n == 21)
    {
        cout<< "Rio de Janeiro" << endl;
    }

    else if(n == 32)
    {

        cout<<"Juiz de Fora"<<endl;
    }
    else if(n == 19)
    {
        cout<<"Campinas"<<endl;
    }

    else if(n == 27)
    { cout << "Vitoria" << endl;
    }
    else if(n == 31)
    {
        cout<<"Belo Horizonte" << endl;
    }
    else
    {
        cout<<"DDD nao cadastrado"<< endl;
    }
    return 0;
}
