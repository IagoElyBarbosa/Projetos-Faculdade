import java.util.Scanner;

public class Q2{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int mat[][], n, m, produtoMatriz[], vetorAuxiliar[], indiceMaior, i, j, indiceVetAux=0;
        n = scan.nextInt();
        m = scan.nextInt();
        mat = new int[n][m];
        produtoMatriz = new int[n];
        vetorAuxiliar = new int[m];
        
        leMatriz(mat, scan);
        calculaProdutoLinhaMatriz(mat, produtoMatriz);
        indiceMaior = descobreIndice(produtoMatriz);
        
        for(i=0;i<mat.length;i++){
            for(j=0;j<mat[0].length;j++){
                if(i == indiceMaior){
                    vetorAuxiliar[indiceVetAux] = mat[i][j];
                    indiceVetAux++;
                }
            }
        }
        
        for(i=0;i<produtoMatriz.length;i++){
            if(i == indiceMaior){
                System.out.print(produtoMatriz[i] + " no indice " + indiceMaior);
            }
        }
        System.out.println();
        
        for(i=0;i<vetorAuxiliar.length;i++){
            System.out.print(vetorAuxiliar[i] + " ");
        }
        System.out.println();
    }
    public static void leMatriz(int[][] matriz, Scanner scan){
        int i, j;
        for(i=0;i<matriz.length;i++){
            for(j=0;j<matriz[0].length;j++){
                matriz[i][j] = scan.nextInt();
            }
        }
    }
    public static void calculaProdutoLinhaMatriz(int[][] matriz, int[] vetor){
        int i, j, mult=1;
        for(i=0;i<matriz.length;i++){
            mult = 1;
            for(j=0;j<matriz[0].length;j++){
                mult *= matriz[i][j];
                vetor[i] = mult;
            }
        }
    }
    
    public static int descobreIndice(int[] vetor){
        int i, maior=-1, indiceMaior=0;
        for(i=0;i<vetor.length;i++){
            if(i % 2 != 0){
                if(vetor[i] > maior){
                    maior = vetor[i];
                    indiceMaior = i;
                }
            }
        }
        return indiceMaior;
    }
    
}