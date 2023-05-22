import java.util.Scanner;

public class LimitesDaEstrada
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);

        long PM, P;
        double AM, A;

        PM = scan.nextLong();
        AM = scan.nextDouble();
        P = scan.nextLong();
        A = scan.nextDouble();

        if (PM < P || AM < A)
        {
            System.out.println("IMPEDIDO");
        }
    }
}