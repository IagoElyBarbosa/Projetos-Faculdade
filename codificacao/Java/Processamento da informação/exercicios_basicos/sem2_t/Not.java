import java.util.Scanner;

public class Not
{
    public static void main(String[] args)
    {
        boolean p;
        Scanner scan = new Scanner(System.in);

        p = scan.nextBoolean();
        if (p == true)
        {
            System.out.println("false");
        }
        else
        {
            System.out.println("true");
        }
    }

}