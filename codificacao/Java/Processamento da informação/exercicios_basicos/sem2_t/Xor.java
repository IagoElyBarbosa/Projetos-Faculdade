import java.util.Scanner;

public class Xor
{
    public static void main(String[] args)
    {
        boolean P, Q;
        Scanner scan = new Scanner(System.in);

        P = scan.nextBoolean();
        Q = scan.nextBoolean();
        boolean C = P^Q;

        if (true)
        {
            System.out.println(C);
        }
        else
        {
            System.out.println(false);
        }
    }
}