import java.util.Scanner;

public class Fatorial{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        long n, x = 1;
        n = scan.nextLong();
        if(n==0){
            n = 1;
        }
        else{
            while(n>1){
                x = x * n;
                n -= 1;
            }
        }
        System.out.println(x);
    }
}