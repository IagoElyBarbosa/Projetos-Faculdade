import java.util.Scanner;

public class Hello2
{
    public static void main(String[] args)
    {
        String nome;
        Scanner scan = new Scanner(System.in);
        nome = scan.next();

        System.out.println("Hello " + nome + ". Welcome!");
    }
}