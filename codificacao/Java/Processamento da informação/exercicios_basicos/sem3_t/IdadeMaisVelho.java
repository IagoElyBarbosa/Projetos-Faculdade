import java.util.Scanner;

public class IdadeMaisVelho
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);

        int id1, id2;

        id1 = scan.nextInt();
        id2 = scan.nextInt();

        if (id1 > id2)
        {
            System.out.println(id1);
        }
        else
        {
            System.out.println(id2);
        }
    }
}