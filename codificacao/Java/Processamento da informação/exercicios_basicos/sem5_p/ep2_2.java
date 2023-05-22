import java.util.Scanner;

public class ep2_2
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        float salario_fixo, vendas, comissao;
        
        salario_fixo = scan.nextFloat();
        vendas = scan.nextFloat();
        comissao = vendas * (float)0.2;
        
        System.out.printf("%.2f\n", comissao);
        
        if(comissao >= (salario_fixo / 2.f))
        {
            System.out.println("Atingiu meta de vendas");
        }
        else
        {
            System.out.println("Nao atingiu meta de vendas");
        }
    }
}