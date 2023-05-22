import java.util.Scanner;

public class ep4_1{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int v[], n, i, maior=0;

        n = scan.nextInt();
        v = new int[n];

        for(i=0;i<n;i++){
            v[i] = scan.nextInt();
            if(v[i]>maior){
                maior = v[i];
            }
        }

        System.out.println(maior);
    }
}