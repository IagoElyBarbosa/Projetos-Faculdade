import java.util.Scanner;

public class RestoDaDivisaoInteira
{
    public static void main(String[] args)
    {
    int A, B, rest_div;
    Scanner scan = new Scanner(System.in);

    A = scan.nextInt();
    B = scan.nextInt();
    rest_div = A % B;

    System.out.println(rest_div);
    }

}