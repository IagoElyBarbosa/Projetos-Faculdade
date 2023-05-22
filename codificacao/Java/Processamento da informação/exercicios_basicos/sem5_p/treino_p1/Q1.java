import java.util.Scanner;

public class Q1
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        float p1, p2, presenca, media;

        p1 = scan.nextFloat();
        p2 = scan.nextFloat();
        presenca = scan.nextFloat();

        media = (p1 + p2) / 2;

        if (media >= 50 && presenca >= 75)
        {
            System.out.println("S");
        }
        else
        {
            System.out.println("N");
        }
    }
}