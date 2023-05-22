import java.util.Scanner;

public class ep2_1
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        float nota1, nota2 ,mf, rec, mr;

        nota1 = scan.nextFloat();
        nota2 = scan.nextFloat();
        mf = (nota1 + nota2) / 2;

        if (mf >= 5.f)
        {
            System.out.printf("%.2f\n", mf);
            System.out.println("APROVADO");
        }
        else
        {
            rec = scan.nextFloat();
            mr = (mf + rec) / 2;

            if (mr >= 5.f)
            {
                System.out.printf("%.2f\n", mf);
                System.out.printf("%.2f\n", mr);
                System.out.println("APROVADO");
            }
            else
            {
                System.out.printf("%.2f\n", mf);
                System.out.printf("%.2f\n", mr);
                System.out.println("REPROVADO");
            }
        }
    }
}