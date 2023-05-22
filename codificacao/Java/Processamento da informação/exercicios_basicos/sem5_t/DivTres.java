import java.util.Scanner;

public class DivTres
{
        public static void main(String[] args)
        {
        Scanner scan = new Scanner(System.in);
        int n, digito1, digito2, digito3, digito4, soma, digito5, digito6, soma2, digito7, digito8, soma3;

        n = scan.nextInt();

        digito1 = n / 1000;
        digito2 = (n % 1000) / 100;
        digito3 = (n % 100) / 10;
        digito4 = (n % 10);

        soma = digito1 + digito2 + digito3 + digito4;

        if (soma <= 9)
        {
            if (soma % 3 == 0)
            {
                System.out.println("divisivel por 3");
            }
            else
            {
                System.out.println("nao divisivel por 3");
            }
        }
        else
        {
            digito5 = soma / 10;
            digito6 = soma % 10;
            soma2 = digito5 + digito6;

            if (soma2 <= 9)
            {
                if (soma2 % 3 == 0)
                {
                    System.out.println("divisivel por 3");
                }
                else
                {
                    System.out.println("nao divisivel por 3");
                }
            }
            else
            {
                digito7 = soma2 / 10;
                digito8 = soma2 % 10;
                soma3 = digito7 + digito8;

                if (soma3 % 3 == 0)
                {
                    System.out.println("divisivel por 3");
                }
                else
                {
                    System.out.println("nao divisivel por 3");
                }
            }
        }
        }
}

