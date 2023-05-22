import java.util.Scanner;

public class Fibonacci{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int n, a = 0, b = 1;
        for(n=scan.nextInt();n>0;n--){
            if(n == 1){
                System.out.println(a);
            }
            b = a + b;
            a = b - a;
        }
    }
}