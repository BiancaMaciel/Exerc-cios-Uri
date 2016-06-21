package Idades;

//1154 - Idades

/*Fa�a um algoritmo para ler um n�mero indeterminado de dados, contendo cada um, a idade de um indiv�duo. O �ltimo dado, que n�o entrar� nos c�lculos, cont�m o valor de idade negativa. Calcular e imprimir a idade m�dia deste grupo de indiv�duos.

Entrada

A entrada cont�m um n�mero indeterminado de inteiros. A entrada ser� encerrada quando um valor negativo for lido.

Sa�da

A sa�da cont�m um valor correspondente � m�dia de idade dos indiv�duos.

A m�dia deve ser impressa com dois d�gitos ap�s o ponto decimal.

Exemplo de Entrada	Exemplo de Sa�da
34
56
44
23
-2
                              39.25 
*/
import java.io.IOException; 
import java.util.Scanner;

public class Main {
  
    public static void main(String[] args) throws IOException {
  
        Scanner sc = new Scanner (System.in);
        double cont = 0, soma = 0, media= 0; 
 
        while(true)
        {
            int x = sc.nextInt();
            if(x > 0)
            {
                soma += x;
            }
            if(x < 0)
                break;
            cont++;
        }
        media = soma / cont;
        System.out.printf( "%.2f\n", media);  
    } 
}