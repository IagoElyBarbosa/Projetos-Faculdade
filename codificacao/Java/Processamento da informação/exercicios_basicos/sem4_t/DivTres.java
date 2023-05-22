import java.util.Scanner;

public class DivTres
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int digi1,digi2,digi3,digi4,num,soma,digi5,digi6, digi7,digi8,soma2,soma3;
        
        num = scan.nextInt();
        digi1 = num / 1000;
        num = num % 1000;
        digi2 = num / 100;
        num = num % 100;
        digi3 = num / 10;
        num = num % 10;
        digi4 = num;
        
        soma = digi1 + digi2 + digi3 + digi4;
        
        if (soma > 9)
        {
            digi5 = soma/10;
            soma = soma%10;
            digi6 = soma;
            
            soma2 = digi5+digi6;
            
            if (soma2 > 9)
            {
                digi7 = soma2/10;
                soma2 = soma2%10;
                digi8 = soma2;
                
                soma3 = digi7+digi8;
            }
        }
        
        else if(soma < 9)
        {
            if(soma % 3 == 0)
            {
                System.out.println("divisivel")
            }
            else
            {
                System.out.println("nao divisivel")q
            }
        }
    }
}