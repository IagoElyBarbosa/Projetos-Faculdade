import java.util.Scanner;

public class Or
{
    public static void main(String[] args)
    {
        boolean P, Q;
        Scanner scan = new Scanner(System.in);

        P = scan.nextBoolean();
        Q = scan.nextBoolean();

        if (P == true || Q == true)
        {
            System.out.println(true);
        }
        else
        {
            System.out.println(false);
        }
    }
}