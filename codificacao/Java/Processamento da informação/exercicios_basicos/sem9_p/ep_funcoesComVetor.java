import java.util.Scanner;

public class ep_funcoesComVetor{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int v[], n, i;
        n = scan.nextInt();
        v = new int[n];
        for(i=0;i<n;i++){
            v[i] = scan.nextInt();
        }
        exibeVetorInt(v);
        System.out.println(maiorInt(v));
        
    }
    public static void exibeVetorInt(int[] v){
        int i;
        for(i=0;i<v.length;i++){
            if(i != (v.length - 1)){
                System.out.print(v[i] + " ");   
            }else{
                System.out.println(v[i]);
            }
        }
    }
    public static int maiorInt(int[] v){
        int i, maior=-9999999;
        for(i=0;i<v.length;i++){
            if(v[i] > maior){
                maior = v[i];
            }
        }
        return maior;
    }
}