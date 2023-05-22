import java.util.Scanner;

public class ContaDigPares{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int n;
        while(scan.hasNext()){
            n = scan.nextInt();
            System.out.println(pares(n));
        }
    }
    public static int pares(int n){
        int resto, i=0;
        while(n > 9){
            resto = n % 10;
            if(resto % 2 == 0){
                i++;
            }n /= 10;
        }if(n % 2 == 0){
            i++;
        }
        return i;
    }
}