import java.util.Scanner;

public class Fatorial
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int n, i = 1;
        long fat;

        n = scan.nextInt();

        fat = 1;

        while (i <= n)
        {
            fat = fat * i;
            i = i + 1;
        }
        System.out.println(fat);
    }
}