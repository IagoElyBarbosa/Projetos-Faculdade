import java.util.Scanner;

public class ep_decripitacao
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);

        int senha, digito1, digito2, digito3, digito4;

        senha = scan.nextInt();

        digito1 = senha / 1000;
        digito1 += 9;
        digito1 = digito1 % 10;

        digito2 = senha % 1000;
        digito2 = digito2 / 100;
        digito2 += 9;
        digito2 = digito2 % 10;

        digito3 = senha % 100;
        digito3 = digito3 / 10;
        digito3 += 9;
        digito3 = digito3 % 10;

        digito4 = senha % 10;
        digito4 += 9;
        digito4 = digito4 % 10;


        System.out.printf("%d%d%d%d\n", digito1, digito2, digito3, digito4);
    }
}