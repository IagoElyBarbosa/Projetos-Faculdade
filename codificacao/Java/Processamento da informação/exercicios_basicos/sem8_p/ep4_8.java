import java.util.Scanner;

public class ep4_8{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int v[], n, i;
        n = scan.nextInt();
        v = new int[n];
        for(i=0;i<n;i++){
            v[i] = scan.nextInt();
        }
        if(verificaVetor(v, n) == 0){
            System.out.println("SIM");
        }else{
            System.out.println("NAO");
        }
    }
    public static int verificaVetor(int[] v, int n){
        int i, j, aux, countChange=0;
        for(i=0;i<n-1;i++){
            for(j=0;j<n-1-i;j++){
                if(v[j] > v[j+1]){
                    aux = v[j];
                    v[j] = v[j+1];
                    v[j+1] = aux;
                    countChange++;
                }
            }
        } return countChange;
    }
}