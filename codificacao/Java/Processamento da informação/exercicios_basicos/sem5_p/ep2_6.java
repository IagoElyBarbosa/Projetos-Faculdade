import java.util.Scanner;

public class ep2_6
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int dia1, mes1, ano1, dia2, mes2, ano2, data1, data2;

        dia1 = scan.nextInt();
        mes1 = scan.nextInt();
        ano1 = scan.nextInt();
        dia2 = scan.nextInt();
        mes2 = scan.nextInt();
        ano2 = scan.nextInt();

        data1 = (dia1 * 1) + (mes1 * 30) + (ano1 * 365);
        data2 = (dia2 * 1) + (mes2 * 30) + (ano2 * 365);

        if (data1 < data2)
        {
            System.out.println("DATA1");
        }
        else if (data1 == data2)
        {
            System.out.println("IGUAIS");
        }
        else
        {
            System.out.println("DATA2");
        }
    }
}