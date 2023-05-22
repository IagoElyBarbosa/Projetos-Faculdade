import java.util.Scanner;

public class SomaVet{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int n, i;
        long v[], soma=0;
        n = scan.nextInt();
        v = new long[n];
        for(i=0;i<n;i++){
            v[i] = scan.nextLong();
            soma = soma + v[i];
        }
        System.out.println(soma);
    }
}