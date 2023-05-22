import java.util.Scanner;

public class HalfAdder
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        boolean P, Q;

        P = scan.nextBoolean();
        Q = scan.nextBoolean();

        if (P == false && Q == false)
        {
            System.out.println("false false");
        }
         if (P == false && Q == true)
        {
            System.out.println("false true");
        }
         if (P == true && Q == false)
        {
            System.out.println("false true");
        }
         if (P == true && Q == true)
        {
            System.out.println("true false");
        }
    }
}