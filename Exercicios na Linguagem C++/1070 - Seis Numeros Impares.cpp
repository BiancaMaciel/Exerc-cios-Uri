#include <iostream>
 
using namespace std;
 
/*
Leia um valor inteiro X. Em seguida apresente os 6 valores �mpares consecutivos a partir de X, um valor por linha, inclusive o X ser for o caso.

Entrada

A entrada ser� um valor inteiro positivo.

Sa�da

A sa�da ser� uma sequ�ncia de seis n�meros �mpares.

Exemplo de Entrada	Exemplo de Sa�da
8
                            9
                            11
                            13
                            15
                            17
                            19
*/

int main() {
 
    int n = 0;
    cin>> n;
    for(int i = 1; i <= 6; i++)
    {
        if(n %2  == 0)
        {
            n +=1;
        }
        if(n % 2 != 0 )
        {
          cout << n << endl;
        }
        n+=1;
    }
 
    return 0;
}
