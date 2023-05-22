import java.util.Scanner;

public class ContaDigitos{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int n;
        while(scan.hasNext()){
            n = scan.nextInt();
            System.out.println(contaDig(n));
        }
    }
    public static int contaDig(int n){
        int i = 1;
        while(n > 9){
            n /= 10;
            i++;
        }
        return i;
    }
}