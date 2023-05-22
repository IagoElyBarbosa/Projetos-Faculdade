import java.util.Scanner;

public class DivisaoReal
{
    public static void main(String[] args)
    {
        float A, B, div_int;
        Scanner scan = new Scanner(System.in);

        A = scan.nextFloat();
        B = scan.nextFloat();
        div_int = A / B;

        System.out.printf("%.4f\n", div_int);
    }
}