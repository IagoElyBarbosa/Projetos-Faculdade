import java.util.Scanner;

public class Potenciacao
{
    public static void main(String[] args)
    {
        int A, N;
        double pot;
        Scanner scan = new Scanner(System.in);

        A = scan.nextInt();
        N = scan.nextInt();
        pot = Math.pow(A, N);

        System.out.printf("%.4f\n", pot);
    }
}