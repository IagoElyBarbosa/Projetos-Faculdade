import java.util.Scanner;

public class Adicao
{
    public static void main(String[] args)
    {
        int numA, numB, soma;
        Scanner scan = new Scanner(System.in);

        numA = scan.nextInt();
        numB = scan.nextInt();
        soma = numA + numB;

        System.out.println(soma);
    }
}