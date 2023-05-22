import java.util.Scanner;

public class Bissexto2
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int ano;

        ano = scan.nextInt();

        if ((ano % 400 == 0) || (ano % 100 != 0 && ano % 4 ==0))
        {
            System.out.println("ANO BISSEXTO");
        }
    }
}