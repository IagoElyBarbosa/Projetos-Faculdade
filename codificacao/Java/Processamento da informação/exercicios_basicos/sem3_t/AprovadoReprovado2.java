import java.util.Scanner;

public class AprovadoReprovado2
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);

        float n1, n2, med;

        n1 = scan.nextFloat();
        n2 = scan.nextFloat();
        med = (n1 + n2)/2;

        if(med >= 60.f)
        {
            System.out.println("APROVADO");
        }
        else if (med >= 40.f)
        {
            System.out.println("EXAME FINAL");
        }
        else
        {
            System.out.println("REPROVADO");
        }
    }
}