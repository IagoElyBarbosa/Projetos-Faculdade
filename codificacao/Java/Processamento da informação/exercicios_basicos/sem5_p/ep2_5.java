import java.util.Scanner;

public class ep2_5
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        float lado_1, lado_2, lado_3;

        lado_1 = scan.nextFloat();
        lado_2 = scan.nextFloat();
        lado_3 = scan.nextFloat();


        if(lado_1 + lado_2 > lado_3 && lado_2 + lado_3 > lado_1 && lado_1 + lado_3 > lado_2)
        {
            System.out.println("VALIDO");
        }

        
        else
        {
            System.out.println("INVALIDO");
        }
    }
}