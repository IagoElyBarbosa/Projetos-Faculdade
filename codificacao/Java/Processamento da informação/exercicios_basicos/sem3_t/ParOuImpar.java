import java.util.Scanner;

public class ParOuImpar
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);

        long n;

        n = scan.nextLong();

        if (n % 2 != 0)
        {
            System.out.println("impar");
        }
        else
        {
            System.out.println("par");
        }
    }
}