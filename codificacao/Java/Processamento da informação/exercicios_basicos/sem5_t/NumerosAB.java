import java.util.Scanner;

public class NumerosAB{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int a,b;
        a = scan.nextInt();
        b = scan.nextInt();
        while(a<b){
            System.out.printf("%d ", a);
            a+=1;
        }
        System.out.println(a);
    }
}