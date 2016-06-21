package Soma;

//1158-Soma de �mpares Consecutivos
/*

Leia um valor inteiro N que � a quantidade de casos de teste que vem a seguir. Cada caso de teste consiste de dois inteiros X e Y. Voc� deve apresentar a soma de Y �mpares consecutivos a partir de X inclusive o pr�prio X se ele for �mpar. Por exemplo:
para a entrada 4 5, a sa�da deve ser 45, que � equivalente �: 5 + 7 + 9 + 11 + 13
para a entrada 7 4, a sa�da deve ser 40, que � equivalente �: 7 + 9 + 11 + 13

Entrada

A primeira linha de entrada � um inteiro N que � a quantidade de casos de teste que vem a seguir. Cada caso de teste consiste em uma linha contendo dois inteiros X e Y.

Sa�da

Imprima a soma dos consecutivos n�meros �mpares a partir do valor X.

Exemplo de Entrada	Exemplo de Sa�da
2
4 3
11 2
                           21
                           24
*/ 

import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) {
         
        Scanner entrada = new Scanner(System.in);
         
        int quantidadeDeLoop = entrada.nextInt();
        int contadorDeLoop = 0, contadorY = 1, soma = 0, armazenaX = 0;
         
            while(contadorDeLoop < quantidadeDeLoop)
            {
                int x = entrada.nextInt(); 
                int y = entrada.nextInt();
                armazenaX = x;
                if(x % 2 != 0)
                    soma += x;
                else{
                    armazenaX = x + 1;
                    soma+= armazenaX;
                }
                while(contadorY < y)
                {
                    armazenaX += 2;
                    soma += armazenaX;
                    contadorY++;
                }   
                contadorDeLoop++;
                System.out.println(soma);
                contadorY = 1;
                soma = 0;
            }
             
        }
}