import java.util.Scanner;

public class ep1_6
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        
        double valor_total, valor_desc1, valor_desc2;
        
        valor_total = scan.nextFloat();
        
        valor_desc1 = valor_total * 0.1;
        valor_total = valor_total - valor_desc1;
        valor_desc2 = valor_total * 0.1;
        valor_total = valor_total - valor_desc2;
        
        ;
        
        System.out.printf("%.2f\n", valor_total);
    }
}