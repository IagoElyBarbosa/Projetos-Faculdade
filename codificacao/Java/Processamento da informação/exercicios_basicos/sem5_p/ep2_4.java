import java.util.Scanner;

public class ep2_4
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int ano_producao, codigo_motor, dis_percorrida;

        ano_producao = scan.nextInt();
        codigo_motor = scan.nextInt();
        dis_percorrida = scan.nextInt();


        if(ano_producao >= 1901 && ano_producao <= 2000)
        {
            if(codigo_motor == 100 || codigo_motor == 101)
            {
                System.out.println("SIM");
            }
            else
            {
                System.out.println("NAO");
            }
        }

        else if(ano_producao >= 2001 && ano_producao <= 2020)
        {
            if(dis_percorrida >= 5000)
            {
                System.out.println("SIM");
            }
            else
            {
                System.out.println("NAO");
            }
        }

        else if (ano_producao == 2021)
        {
            if((codigo_motor == 200 || codigo_motor == 201) && dis_percorrida >= 200)
            {
                System.out.println("SIM");
            }
            else
            {
                System.out.println("NAO");
            }
        }
        else
        {
            System.out.println("NAO");
        }

    }
}