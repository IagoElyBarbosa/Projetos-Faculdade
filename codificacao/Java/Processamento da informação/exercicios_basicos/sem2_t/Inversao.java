import java.util.Scanner;

public class Inversao
{
    public static void main(String[] args)
    {
    long x, inversao;
    Scanner scan = new Scanner(System.in);

    x = scan.nextLong();
    inversao = x * -1;

    System.out.println(inversao);
    }

}