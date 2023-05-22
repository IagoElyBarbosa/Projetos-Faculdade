import java.util.Scanner;

public class Domino
{
    public static void main(String [] args)
    {
        Scanner scan = new Scanner(System.in);
        int N, linha, acumulador = 0;

        N = scan.nextInt();
        linha = N + 1;


        while(linha != 0)
        {
            acumulador = linha + acumulador;
            linha -= 1;
        }
        System.out.println(acumulador);
    }
}