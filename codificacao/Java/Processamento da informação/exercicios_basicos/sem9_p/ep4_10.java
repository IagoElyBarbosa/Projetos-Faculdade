import java.util.Scanner;

public class ep4_10{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int v[], n, i;
        n = scan.nextInt();
        v = new int[n];
        for(i=0;i<n;i++){
            v[i] = scan.nextInt();
        }
        
        vetSize(v, n);
        
        for(i=0;i<n;i++){
            if(v[i] != 0){
                System.out.println(v[i]);
            }
        }
    }
    public static void vetSize(int[] v, int n){
        int i, j, countSize=0;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(v[i] == v[j]){
                    v[j] = 0;
                }
            }
        }
    }
}