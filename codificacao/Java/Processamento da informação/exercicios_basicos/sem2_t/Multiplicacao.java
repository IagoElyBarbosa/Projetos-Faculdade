import java.util.Scanner;

public class Multiplicacao
{
    public static void main(String[] args)
    {
    int x, y, mult;
    Scanner scan = new Scanner(System.in);

    x = scan.nextInt();
    y = scan.nextInt();
    mult = x * y;

    System.out.println(mult);
    }

}