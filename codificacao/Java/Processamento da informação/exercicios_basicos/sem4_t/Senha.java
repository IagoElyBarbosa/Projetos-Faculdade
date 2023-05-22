import java.util.Scanner;

public class Senha
{
    public static void main(String [] args)
    {
        Scanner scan = new Scanner(System.in);
        int digito1, digito2, digito3, digito4, senha;

        senha = scan.nextInt();

        digito1 = senha / 1000;
        digito2 = (senha % 1000) / 100;
        digito3 = (senha % 100) / 10;
        digito4 = (senha % 10);


        if (senha / 10000 != 0)
        {
            System.out.println("NAO");
        }
        else if (digito1 == 0)
        {
            System.out.println("NAO");
        }
        else if (digito2 == 0)
        {
            System.out.println("NAO");
        }
        else if (digito3 == 0)
        {
            System.out.println("NAO");
        }
        else if (digito4 == 0)
        {
            System.out.println("NAO");
        }
        else
        {
            System.out.println("SIM");
        }

    }
}