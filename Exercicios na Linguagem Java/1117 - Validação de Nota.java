import java.io.IOException;

import java.util.Scanner;
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Main {
 
    public static void main(String[] args) throws IOException {
 
        /**
         * Escreva a sua solução aqui
         * Code your solution here
         * Escriba su solución aquí
         */
        Scanner sc = new Scanner(System.in);
		
		int tentativas = 0;
		double media = 0, aux = 0;
		do
		{
			double n = sc.nextDouble();
			if(n < 0 || n > 10)
			{
				System.out.println("nota invalida");
			}
			else if(n > 0 || n < 10)
			{
				aux += n;
				tentativas ++;
			}
		}while(tentativas < 2);
		media = aux / 2; 
		System.out.println("media = " + media);
 
    }
 
}

import java.io.IOException;

import java.util.Scanner;
/*
 * Fa�a um programa que leia as notas referentes �s duas avalia��es de um aluno. Calcule e imprima a m�dia semestral. Fa�a com que o algoritmo s� aceite notas v�lidas (uma nota v�lida deve pertencer ao intervalo [0,10]). Cada nota deve ser validada separadamente.

Entrada

A entrada cont�m v�rios valores reais, positivos ou negativos. O programa deve ser encerrado quando forem lidas duas notas v�lidas.

Sa�da

Se uma nota inv�lida  for lida, deve ser impressa a mensagem "nota inv�lida".
Quando duas notas v�lidas forem lidas, deve ser impressa a mensagem "m�dia = " seguido do valor do c�lculo. O valor deve ser apresentado com duas casas ap�s o ponto decimal.

Exemplo de Entrada	Exemplo de Sa�da
-3.5
3.5
11.0
10.0
                  nota invalida
                  nota invalida
                  media = 6.75
 */
public class Main {
 
    public static void main(String[] args) throws IOException {
 
        /**
         * Escreva a sua solução aqui
         * Code your solution here
         * Escriba su solución aquí
         */
        Scanner sc = new Scanner(System.in);
		
		int tentativas = 0;
		double media = 0, aux = 0;
		do
		{
			double n = sc.nextDouble();
			if(n < 0 || n > 10)
			{
				System.out.println("nota invalida");
			}
			else if(n > 0 || n < 10)
			{
				aux += n;
				tentativas ++;
			}
		}while(tentativas < 2);
		media = aux / 2; 
		System.out.println("media = " + media);
 
    }
 
}

