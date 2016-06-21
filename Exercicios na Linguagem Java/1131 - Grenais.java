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
 
        int simNao = 0, contInter = 0, contGremio = 0, empates = 0, contGrenais = 1;

		Scanner sc = new Scanner (System.in);
		while(true)
		{
			int inter = sc.nextInt();
			int gremio = sc.nextInt();
			if(inter > gremio)
				contInter++;
			if(gremio > inter)
				contGremio++;
			if(inter == gremio)
				empates++;
			System.out.println("Novo grenal (1-sim 2-nao)");
			simNao = sc.nextInt();
			
			if(simNao == 1)
			{
				contGrenais++;
				continue;
			}
			else if(simNao == 2)
			{
				break;
			}
		}
		 System.out.println(contGrenais +" grenais");
		 System.out.println("Inter:" + contInter);
		 System.out.println("Gremio:" + contGremio);
		 System.out.println("Empates:" + empates);
		 if(contInter > contGremio)
			 System.out.println("Inter venceu mais");
		 else if(contGremio > contInter)
			 System.out.println("Gremio venceu mais");
		 else if (empates != 0)
			 System.out.println("Nao houve vencedor");

 
    }
 
}import java.io.IOException;

import java.util.Scanner; 
/*
 * A Federa��o Ga�cha de Futebol contratou voc� para escrever um programa para fazer uma estat�stica do resultado de v�rios GRENAIS. Escreva um programa para ler o n�mero de gols marcados pelo Inter e pelo Gr�mio em um GRENAL. Logo ap�s escrever a mensagem "Novo grenal (1-sim 2-nao)" e solicitar uma resposta. Se a resposta for 1, o algoritmo deve ser executado novamente solicitando o n�mero de gols marcados pelos times em uma nova partida, caso contr�rio deve ser encerrado imprimindo:

- Quantos GRENAIS fizeram parte da estat�stica.
- O n�mero de vit�rias do Inter.
- O n�mero de vit�rias do Gr�mio.
- O n�mero de Empates.
- Uma mensagem indicando qual o time que venceu o maior n�mero de GRENAIS (ou "Nao houve vencedor", caso termine empatado).

Entrada

O arquivo de entrada cont�m 2 valores inteiros, correspondentes aos gols marcados pelo Inter e pelo Gr�mio respectivamente. Em seguida h�ver� um inteiro (1 ou 2), correspondente � repeti��o do programa.

Sa�da

Ap�s cada leitura dos gols, deve ser impressa a mensagem "Novo grenal (1-sim 2-nao)". Quando o algoritmo for encerrado deve ser mostrado as estat�sticas conforme a descri��o apresentada acima. Obs: a palavra "Gremio" deve ser impressa sem acento, conforme o exemplo abaixo.

Exemplo de Entrada	Exemplo de Sa�da
3 2
1
2 3
1
3 1
2                  Novo grenal (1-sim 2-nao)
                   Novo grenal (1-sim 2-nao)
                   Novo grenal (1-sim 2-nao)
                   3 grenais
                   Inter:2
                   Gremio:1
                   Empates:0
                   Inter venceu mais
 */
public class Main {
 
    public static void main(String[] args) throws IOException {
 
        int simNao = 0, contInter = 0, contGremio = 0, empates = 0, contGrenais = 1;

		Scanner sc = new Scanner (System.in);
		while(true)
		{
			int inter = sc.nextInt();
			int gremio = sc.nextInt();
			if(inter > gremio)
				contInter++;
			if(gremio > inter)
				contGremio++;
			if(inter == gremio)
				empates++;
			System.out.println("Novo grenal (1-sim 2-nao)");
			simNao = sc.nextInt();
			
			if(simNao == 1)
			{
				contGrenais++;
				continue;
			}
			else if(simNao == 2)
			{
				break;
			}
		}
		 System.out.println(contGrenais +" grenais");
		 System.out.println("Inter:" + contInter);
		 System.out.println("Gremio:" + contGremio);
		 System.out.println("Empates:" + empates);
		 if(contInter > contGremio)
			 System.out.println("Inter venceu mais");
		 else if(contGremio > contInter)
			 System.out.println("Gremio venceu mais");
		 else if (empates != 0)
			 System.out.println("Nao houve vencedor");

 
    }
 
}