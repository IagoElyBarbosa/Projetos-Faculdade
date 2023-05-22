import java.util.Scanner;

public class Triangulo2
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);

        float a, b, c;

        a = scan.nextFloat();
        b = scan.nextFloat();

        c = 180 - a - b;

        if (a < 90.f && b < 90.f && c < 90.f)
        {
            System.out.println("acutangulo");
        }
        else if (a > 90.f || b > 90.f || c > 90.f)
        {
            System.out.println("obtusangulo");
        }
        else
        {
            System.out.println("retangulo");
        }
    }
}