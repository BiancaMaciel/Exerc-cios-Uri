package Sequ�ncia;

//1144-Sequ�ncia L�gica

/*
Escreva um programa que leia um valor inteiro N. N * 2 linhas de sa�da ser�o apresentadas na execu��o do programa, seguindo a l�gica do exemplo abaixo. Para valores com mais de 6 d�gitos, todos os d�gitos devem ser apresentados.

Entrada

O arquivo de entrada cont�m um n�mero inteiro positivo N (1 < N < 1000).

Sa�da

Imprima a sa�da conforme o exemplo fornecido.

Exemplo de Entrada	Exemplo de Sa�da
5
1 1 1
1 2 2
2 4 8
2 5 9
3 9 27
3 10 28
4 16 64
4 17 65
5 25 125
5 26 126
*/

import java.io.IOException; 
import java.util.Scanner;

public class Main {
  
    public static void main(String[] args) throws IOException {
  
       
        Scanner sc = new Scanner (System.in);
        int linha = sc.nextInt();
         
        for(int i = 1; i <= linha; i++)
        {
            int calc = i * i;
            int calc2 = calc * i;
            int imprimeCalc = calc + 1;
            int imprimeCalc2 = calc2 +1;
            System.out.printf(i + " " + calc + " " + calc2 + "\n");
            System.out.printf(i + " " + imprimeCalc + " " + imprimeCalc2 + "\n");
             
            calc = 0;
            calc2 = 0;
        }
  
    }
  
}