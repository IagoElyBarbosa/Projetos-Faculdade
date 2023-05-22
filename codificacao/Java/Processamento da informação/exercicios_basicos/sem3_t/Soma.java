import java.util.Scanner;

public class Soma
{
    public static void main(String[] args)
    {
        int numA, numB, som;
        Scanner scan = new Scanner(System.in);

        numA = scan.nextInt();
        numB = scan.nextInt();
        som = numA + numB;

        System.out.println(som);
    }
}