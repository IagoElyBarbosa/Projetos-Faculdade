import java.util.Scanner;

public class And
{
    public static void main(String[] args)
    {
        boolean P, Q;
        Scanner scan = new Scanner(System.in);

        P = scan.nextBoolean();
        Q = scan.nextBoolean();

        if (P == true && Q == true)
        {
            System.out.println(true);
        }
        if (P == false && Q == true )
        {
            System.out.println(false);
        }
        if (P == true && Q == false)
        {
            System.out.println(false);
        }
        if (P == false && Q == false)
        {
            System.out.println(false);
        }
    }
}