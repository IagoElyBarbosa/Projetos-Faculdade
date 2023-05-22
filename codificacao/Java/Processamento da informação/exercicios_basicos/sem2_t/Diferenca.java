import java.util.Scanner;

public class Diferenca
{
    public static void main(String[] args)
    {
        long A, B;
        boolean x = true;
        boolean y = false;
        Scanner scan = new Scanner(System.in);

        A = scan.nextLong();
        B = scan.nextLong();

        if (A != B)
        {
            System.out.println(x);
        }
        else
        {
            System.out.println(y);
        }
    }
}