import java.util.Scanner;

public class Idade
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int M, A, B, irmao_3;

        M = scan.nextInt();
        A = scan.nextInt();
        B = scan.nextInt();

        irmao_3 = M - A - B;

        if(irmao_3 > A && irmao_3 > B)
        {
            System.out.println(irmao_3);
        }
        else if(A > irmao_3 && A > B)
        {
            System.out.println(A);
        }
        else
        {
            System.out.println(B);
        }
    }
}