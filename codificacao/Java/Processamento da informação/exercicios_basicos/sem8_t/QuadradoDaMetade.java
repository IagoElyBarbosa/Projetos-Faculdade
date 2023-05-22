import java.util.Scanner;

public class QuadradoDaMetade{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int n;

        while(scan.hasNext()){
            n = scan.nextInt();
            if(n == quadradoMetade(n)){
                System.out.println("OK");
            }else{
                System.out.println("NOK");
            }
        }
    }
    public static int quadradoMetade(int n){
        int metade01, metade02, valorTotal;
        metade01 = n / 100;
        metade02 = n % 100;
        valorTotal = metade01 + metade02;
        valorTotal *= valorTotal;
        return valorTotal;
    }
}