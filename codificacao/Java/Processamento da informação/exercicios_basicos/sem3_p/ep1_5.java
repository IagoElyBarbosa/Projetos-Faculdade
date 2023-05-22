import java.util.Scanner;

public class ep1_5
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        
        int a, b, c, d, e, f, g, soma;
        
        a = scan.nextInt();
        b = scan.nextInt();
        c = scan.nextInt();
        d = scan.nextInt();
        e = scan.nextInt();
        f = scan.nextInt();
        g = scan.nextInt();
        
        soma = a + b + c + d + e + f + g;
        
        if (soma % 2 != 0)
        {
            System.out.println(1);
        }
        else
        {
            System.out.println(0);
        }
    }
}