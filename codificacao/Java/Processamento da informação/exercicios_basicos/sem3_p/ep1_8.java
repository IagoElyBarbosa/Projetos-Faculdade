import java.util.Scanner;

public class ep1_8
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int tipo_a, tipo_b, tipo_c, tipo_d, capacidade;

        capacidade = scan.nextInt();
        
        tipo_a = capacidade / 500;
        capacidade = capacidade % 500;
        
        tipo_b = capacidade / 100;
        capacidade = capacidade % 100;
        
        tipo_c = capacidade / 25;
        capacidade = capacidade % 25;
        
        tipo_d = capacidade;
        
        
        System.out.println(tipo_a);
        System.out.println(tipo_b);
        System.out.println(tipo_c);
        System.out.println(tipo_d);
    }
}