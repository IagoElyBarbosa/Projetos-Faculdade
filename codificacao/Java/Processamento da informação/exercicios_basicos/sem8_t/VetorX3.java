import java.util.Scanner;

public class VetorX3{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int v[], n, w[], i;
        n = scan.nextInt();
        v = new int[n];
        w = new int[n];
        for(i=0;i<n;i++){
            v[i] = scan.nextInt();
            w[i] = v[i] * 3;
        }for(i=0;i<n;i++){
            if(i != (n - 1)){
                System.out.print(w[i] + " ");
            }
            else{
                System.out.println(w[i]);
            }
        }
    }
}