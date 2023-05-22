import java.util.Scanner;

public class Q2
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int n,N = 13;

        for (int i=0;i<N;i++){
            n = scan.nextInt();
            if(n%3 == 0 && n%5 == 0){
                System.out.printf("%d é múltiplo de três e cinco\n", n);
            }
            else if(n%3 == 0)
            {
                System.out.printf("%d é múltiplo de três\n", n);
            }
            else if(n%5 == 0)
            {
                System.out.printf("%d é múltiplo de cinco\n", n);
            }
            else
            {
                System.out.println(n);
            }
        }
    }
}