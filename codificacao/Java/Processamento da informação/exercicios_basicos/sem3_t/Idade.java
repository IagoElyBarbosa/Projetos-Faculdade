import java.util.Scanner;

public class Idade
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int ano_atual, ano_nasc, idade;
        String nome;

        ano_atual = scan.nextInt();
        nome = scan.next();
        ano_nasc = scan.nextInt();
        idade = ano_atual - ano_nasc;

        System.out.println("" + nome + ", voce completa " + idade + " anos de idade neste ano.");
    }
}