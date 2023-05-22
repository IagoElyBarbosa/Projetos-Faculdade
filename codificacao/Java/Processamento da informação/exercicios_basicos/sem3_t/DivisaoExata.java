import java.util.Scanner;

public class DivisaoExata
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        long X, Y, res;

        X = scan.nextLong();
        Y = scan.nextLong();
        res = X % Y;

        if (res == 0)
        {
           System.out.printf("a divisao de " + X + " por " + Y + " eh exata.\n");
        }
    }
}