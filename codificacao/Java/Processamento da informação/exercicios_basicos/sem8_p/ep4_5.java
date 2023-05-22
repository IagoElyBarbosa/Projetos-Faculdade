import java.util.Scanner;

public class ep4_5{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int v[], n, i, indiceI, indiceJ;
        n = scan.nextInt();
        v = new int[n];
        for(i=0;i<n;i++){
            v[i] = scan.nextInt();
        }
        
        indiceI = scan.nextInt();
        indiceJ = scan.nextInt();
        trocaVet(v, indiceI, indiceJ);
        
        for(i=0;i<n;i++){
            System.out.println(v[i]);
        }
    }
    public static void trocaVet(int[] v, int indiceI, int indiceJ){
        int aux;
        if(indiceI < v.length && indiceJ < v.length){
            aux = v[indiceI];
            v[indiceI] = v[indiceJ];
            v[indiceJ] = aux;
        }
    }
}