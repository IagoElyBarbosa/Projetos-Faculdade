import java.util.Scanner;

public class Subtracao
{
    public static void main(String[] args)
    {
        int numA, numB, sub;
        Scanner scan = new Scanner(System.in);

        numA = scan.nextInt();
        numB = scan.nextInt();
        sub = numA - numB;

        System.out.println(sub);
    }
}