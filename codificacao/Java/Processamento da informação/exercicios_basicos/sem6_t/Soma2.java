import java.util.Scanner;

public class Soma2{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int n, soma=0;
        for(n=scan.nextInt();n>0;n--){
            soma += n;
        }
        System.out.println(soma);
    }
}