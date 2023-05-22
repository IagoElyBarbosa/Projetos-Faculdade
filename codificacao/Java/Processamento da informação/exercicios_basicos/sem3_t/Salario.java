import java.util.Scanner;

public class Salario
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        float V, PD, SL;
        int Q;

        V = scan.nextFloat();
        Q = scan.nextInt();
        PD = scan.nextFloat();

        SL = V * (float)Q * ((100 - PD) / 100.f);

        System.out.printf("%.2f\n", SL);
    }
}