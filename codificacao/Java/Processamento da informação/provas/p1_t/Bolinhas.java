import java.util.Scanner;

public class Bolinhas
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int B, G, bolinhas_dif;
        float div_intRes;

        B = scan.nextInt();
        G = scan.nextInt();

        div_intRes = (float)G / (float)B;

        bolinhas_dif = (G / 2) - B;

        if (div_intRes > 2)
        {
            System.out.println("Faltam " + bolinhas_dif + " bolinha(s)");
        }
        else
        {
            System.out.println("Voce tem bolinhas o suficiente!");
        }
    }
}