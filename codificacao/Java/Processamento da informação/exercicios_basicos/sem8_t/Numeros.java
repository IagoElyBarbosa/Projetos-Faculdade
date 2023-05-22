import java.util.Scanner;

public class Numeros{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        long n;
        do{
            n = scan.nextLong();
            if(n != -1){
                if(n > divisores(n)){
                    System.out.println("deficiente");
                }
                else if(n == divisores(n)){
                    System.out.println("perfeito");
                }
                else{
                    System.out.println("abundante");
                }
            }
        }while(n != -1);
    }
    public static long divisores(long n){
        long soma=0, i=1;
        while(n>i){
            if(n % i == 0){
                soma += i;
            }i++;
        }
        return soma;
    }
}