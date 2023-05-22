import java.util.Scanner;

public class DivisaoInteira
{
    public static void main(String[] args)
    {
        int A, B, div_int;
        Scanner scan = new Scanner(System.in);

        A = scan.nextByte();
        B = scan.nextByte();
        div_int = A / B;

        System.out.println(div_int);
    }
}