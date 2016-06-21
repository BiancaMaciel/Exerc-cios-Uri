package Divisores;

//1157-Divisores I

/*
Ler um n�mero inteiro N e calcular todos os seus divisores.

Entrada

O arquivo de entrada cont�m um valor inteiro.

Sa�da

Escreva todos os divisores de N, um valor por linha.

Exemplo de Entrada	Exemplo de Sa�da
6
                            1
                            2
                            3
                            6
*/ 
import java.util.Scanner;
public class Main {
 
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        int numero = entrada.nextInt();
         
        for(int i = 1; i <= numero; i++)
        {
            if(numero % i == 0)
                System.out.println(i);
        }
    }
}
