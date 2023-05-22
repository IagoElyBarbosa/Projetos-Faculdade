import java.util.Scanner;

public class ep_idade
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int dia_nas, mes_nas, ano_nas, dia_atu, mes_atu, ano_atu, dia_idade, mes_idade, ano_idade;

        dia_atu = scan.nextInt();
        mes_atu = scan.nextInt();
        ano_atu = scan.nextInt();
        dia_nas = scan.nextInt();
        mes_nas = scan.nextInt();
        ano_nas = scan.nextInt();

        dia_idade = dia_nas - dia_atu;
        mes_idade = mes_nas - mes_atu;
        ano_idade = ano_atu - ano_nas;
        
        if (mes_idade > 0)
        {
            ano_idade = ano_idade - 1;
        }
        
        else if (mes_idade == 0)
        {
            if (dia_idade > 0)
            {
                ano_idade = ano_idade - 1;
            }
            
        }


        System.out.println(ano_idade);

        if (dia_idade == 0 && mes_idade == 0)
        {
            System.out.println("Parabéns pelo seu aniversário!");
        }

        if (ano_idade <= 11)
        {
            System.out.println("Visite a sessão de brincadeiras!");
        }
        else if (ano_idade > 11 && ano_idade <= 18)
        {
            System.out.println("Confira as dinâmicas de grupo!");
        }
        else if (ano_idade > 18 && ano_idade <= 30)
        {
            System.out.println("Confira as rodas de conversa!");
        }
        else if (ano_idade > 30)
        {
            System.out.println("Não deixe de assistir às palestras!");
            if (ano_idade >= 60 && ano_idade <= 69)
            {
                System.out.println("E participe também da maratona da maturidade!");
            }
        }
    }
}