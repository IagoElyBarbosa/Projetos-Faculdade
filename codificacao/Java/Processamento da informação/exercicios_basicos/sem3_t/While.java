import java.util.Scanner;

public class While
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        
        float media, soma = 0.f, nota;
        int i = 0;
        
        while (i < 10)
        {
            System.out.println("Insira a " + (i + 1) + "a nota: ");
            nota = scan.nextFloat();
            i++;
            soma = soma + nota;
        }
        
        media = soma/(float)i;
        
        System.out.println(media);
    }
}