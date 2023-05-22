import java.util.Scanner;

public class Radiciacao2
{
    public static void main(String[] args)
    {
        long A;
        double raiz;
        Scanner scan = new Scanner(System.in);

        A = scan.nextLong();
        raiz = Math.sqrt(A);

        System.out.printf("%.4f\n", raiz);
    }
}