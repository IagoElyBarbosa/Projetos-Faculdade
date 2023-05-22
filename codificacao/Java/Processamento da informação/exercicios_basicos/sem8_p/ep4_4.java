import java.util.Scanner;

public class ep4_4{
    public static void main(String[] args){
        int v[], n, i, soma=0;
        Scanner scan = new Scanner(System.in);
        n = scan.nextInt();
        v = new int[n];
        for(i=0;i<n;i++){
            v[i] = scan.nextInt();
        }for(i=0;i<n;i++){
            if(v[i] == 1){
                if(i != 0 && i != n - 1){
                    soma += v[i - 1] + v[i + 1];
                }else if(i == 0){
                    soma += v[i + 1];
                }else if(i == n - 1){
                    soma += v[i - 1];
                }
            }
        }
        System.out.println(soma);
    }
}