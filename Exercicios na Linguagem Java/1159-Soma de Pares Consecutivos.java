package ParesConsecutivos;

//1159-Soma de Pares Consecutivos

/*
O programa deve ler um valor inteiro X indefinidas vezes. (O programa ir� parar quando o valor de X for igual a 0). Para cada X lido, imprima a soma dos 5 pares consecutivos a partir de X, inclusive o X , se for par. Se o valor de entrada for 4, por exemplo, a sa�da deve ser 40, que � o resultado da opera��o: 4+6+8+10+12, enquanto que se o valor de entrada for 11, por exempo, a sa�da deve ser 80, que � a soma de 12+14+16+18+20.

Entrada

O arquivo de entrada cont�m muitos valores inteiros. O �ltimo valor do arquivo � zero.

Sa�da

Imprima a saida conforme a explica��o acima e o exemplo abaixo.

Exemplo de Entrada	Exemplo de Sa�da
4
11
0
                          40
                          80
*/ 
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
         
        int contadorY = 1, soma = 0, armazenaX = 0;
        while(true)
        {
                int x = entrada.nextInt();
                armazenaX = x;
                if(x % 2 == 0)
                    soma += x;
                else{
                    armazenaX = x + 1;
                    soma+= armazenaX;
                }
                while(contadorY < 5)
                {
                    armazenaX += 2;
                    soma += armazenaX;
                    contadorY++;
                }   
                if(x == 0)
                    break;
                System.out.println(soma);
                contadorY = 1;
                soma = 0;                
        }
    }
}