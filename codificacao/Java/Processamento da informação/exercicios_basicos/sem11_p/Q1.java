import java.util.Scanner;

public class Q1{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int vet[], mat[][];
        vet = new int[11];
        mat = new int[9][8];
        
        leVetor(vet, scan);
        leMatriz(mat, scan);
        System.out.println(verificaMatriz(vet, mat));
    }
    public static void leVetor(int[] vetor, Scanner scan){
        int i;
        for(i=0;i<vetor.length;i++){
            vetor[i] = scan.nextInt();
        }
    }
    public static void leMatriz(int[][] matriz, Scanner scan){
        int i, j;
        for(i=0;i<matriz.length;i++){
            for(j=0;j<matriz[0].length;j++){
                matriz[i][j] = scan.nextInt();
            }
        }
    }
    public static int verificaMatriz(int[] vet, int[][] mat){
        int i, j, k, count=0;
        for(i=0;i<vet.length;i++){
            for(j=0;j<mat.length;j++){
                for(k=0;k<mat[0].length;k++){
                    if(vet[i] == mat[j][k]){
                        vet[i] = 99999;
                    }
                }
            }
        }
        for(i=0;i<vet.length;i++){
            if(vet[i] == 99999){
                count++;
            }
        }
        return count;
    }
}