#include <iostream>
 
using namespace std;
/*
Neste problema, voc� dever� ler 3 palavras que definem o tipo de animal poss�vel segundo o esquema abaixo, da esquerda para a direita.  Em seguida conclua qual dos animais seguintes foi escolhido, atrav�s das tr�s palavras fornecidas.



Entrada

A entrada cont�m 3 palavras, uma em cada linha, necess�rias para identificar o animal segundo a figura acima, com todas as letras min�sculas.

Sa�da

Imprima o nome do animal correspondente � entrada fornecida.

Exemplos de Entrada	Exemplos de Sa�da
vertebrado
mamifero
onivoro
homem
vertebrado
ave
carnivoro
aguia
invertebrado
anelideo
onivoro
minhoca
*/
 
int main() {
    std::string a, b, c;
    cin>>a;
    cin>>b;
    cin>>c;
        if(a == "vertebrado" && b == "ave" && c =="carnivoro")
        {
            std::cout<<"aguia"<< std::endl;
        }
        else if(a == "vertebrado" && b == "ave" && c =="onivoro")
        {
            std::cout<<"pomba"<<std::endl;
        }
        else if(a == "vertebrado" && b == "mamifero" && c =="onivoro")
        {
            std::cout<<"homem"<<std::endl;
        }
        else if(a == "vertebrado" && b == "mamifero" && c =="herbivoro")
        {
            std::cout<<"vaca"<<std::endl;
        }
        else if(a == "invertebrado" && b == "inseto" && c =="hematofago")
        {
            std::cout<<"pulga"<<std::endl;
        }
        else if(a == "invertebrado" && b == "inseto" && c =="herbivoro")
        {
            std::cout<<"lagarta"<<std::endl;
        }
        else if(a == "invertebrado" && b == "anelideo" && c =="hematofago")
        {
            std::cout<<"sanguessuga"<<std::endl;
        }
        else if(a == "invertebrado" && b == "anelideo" && c =="onivoro")
        {
            std::cout<<"minhoca"<<std::endl;
        }

    return 0;
}
