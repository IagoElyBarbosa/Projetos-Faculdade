import java.util.Scanner;

public class Retas
{
    public static void main (String[] args)
    {
        Scanner scan = new Scanner(System.in);
        float a, b, c, d, r1, r2;
        a = scan.nextFloat();
        b = scan.nextFloat();
        c = scan.nextFloat();
        d = scan.nextFloat();
        if(a == c && b == d){
            System.out.println("coincidentes");
        }else if(a != c && b != d){
            System.out.println("concorrentes");
        }else{
            System.out.println("paralelas");
        }
    }
}