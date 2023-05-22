import java.util.Scanner;

public class ep2_3
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        float temperatura;

        temperatura = scan.nextFloat();

        if(temperatura < -20.f)
        {
            System.out.println("Muito Baixa");
        }
        else if(temperatura < 30.f)
        {
            System.out.println("Baixa");
        }
        else if(temperatura < 200.f)
        {
            System.out.println("Normal");
        }
        else if(temperatura < 250.f)
        {
            System.out.println("Alta");
        }
        else
        {
            System.out.println("Muito Alta");
        }

    }
}