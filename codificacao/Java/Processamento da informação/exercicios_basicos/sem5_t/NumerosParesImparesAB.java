import java.util.Scanner;

public class NumerosParesImparesAB{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int a, b, a2, b2;

        a = scan.nextInt();
        b = scan.nextInt();
        a2 = a;
        b2 = b;

        while(a<b){
            if(a!=(b - 1)){
                    if(a%2==0){
                    System.out.printf("%d ", a);
                }
            }
            else{
                if(a%2==0){
                    System.out.printf("%d", a);
                }
            }
            a += 1;
        }
        if(a%2==0){
            System.out.println(a);
        }
        else{
            System.out.println("");
        }

        while(a2<b2)
        {
            if(a2 != (b2 - 1))
            {
                if(a2 % 2 != 0)
                {
                    System.out.printf("%d ", a2);
                }
            }
            else
            {
                if(a2 % 2 != 0)
                {
                    System.out.printf("%d", a2);
                }
            }
            a2 += 1;
        }

        if(a2%2!=0){
            System.out.println(a2);
        }
        else{
            System.out.println("");
        }
    }
}