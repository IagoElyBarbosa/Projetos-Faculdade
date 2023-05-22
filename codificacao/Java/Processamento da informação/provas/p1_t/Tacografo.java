import java.util.Scanner;

public class Tacografo
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int N, T, V, delta_s, acumulador = 0;

        N = scan.nextInt();

        while(N > 0)
        {
            T = scan.nextInt();
            V = scan.nextInt();
            delta_s = T * V;
            acumulador = acumulador + delta_s;
            N -= 1;
        }
        System.out.println(acumulador);
    }
}