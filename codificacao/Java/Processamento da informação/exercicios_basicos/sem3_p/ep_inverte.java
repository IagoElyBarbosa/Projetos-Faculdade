import java.util.Scanner;

public class ep_inverte
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        
        int digito1, digito2, digito3, digito4, senha;
        
        senha = scan.nextInt();
        
        digito1 = senha / 1000;
        senha = senha % 1000;
        digito2 = senha / 100;
        senha = senha % 100;
        digito3 = senha / 10;
        senha = senha % 10;
        digito4 = senha;
        
        System.out.printf("%d%d%d%d\n", digito4, digito3, digito2, digito1);
    }
}