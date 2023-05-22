import java.util.Scanner;

public class Absoluto
{
    public static void main(String[] args)
    {
        long N, valor;
        Scanner scan = new Scanner(System.in);

        N = scan.nextLong();
        valor = Math.abs(N);

        System.out.println(valor);
    }
}