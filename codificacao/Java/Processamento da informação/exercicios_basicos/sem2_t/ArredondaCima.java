import java.util.Scanner;

public class ArredondaCima
{
    public static void main(String[] args)
    {
        float N;
        double arbx;
        Scanner scan = new Scanner(System.in);

        N = scan.nextFloat();
        arbx = Math.ceil(N);

        System.out.printf("%.4f\n", arbx);

    }
}