import java.util.Scanner;

public class HelloEarth
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int N = 1, N2, A, T;
        String civ_desocup, salvar_nome = "";

        while(N>0)
        {
            N = scan.nextInt();
            N2 = N;
            System.out.println(N);
            System.out.println(N2);
            while(N2>0)
            {
                System.out.println(N);
                System.out.println(N2);
                civ_desocup = scan.next(); // civilizações desocupadas
                A = scan.nextInt(); // ano de saída do planeta
                T = scan.nextInt(); // tempo que chegou na terra
                System.out.println(civ_desocup);
                if(N2 == N)
                {
                    civ_desocup = salvar_nome;
                    System.out.println(salvar_nome);
                }
                N2 = N2 - 1;
                System.out.println(salvar_nome);
                System.out.println(N);
                System.out.println(N2);
            }
            System.out.println(N);
        }
    }
}