import java.util.Scanner;

public class Q1{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int mat[][], vetAux[], n, m;
        n = scan.nextInt();
        m = scan.nextInt();
        mat = new int[n][m];
        vetAux = new int[n];
        
        leMatriz(mat, vetAux, scan);
        verificaIgualdade(mat, vetAux);
    }
    public static void leMatriz(int[][] matriz, int[] vetorAuxiliar, Scanner scan){
        int i, j;
        for(i=0;i<matriz.length;i++){
            for(j=0;j<matriz[0].length;j++){
                matriz[i][j] = scan.nextInt();
                if(j == 1){
                    vetorAuxiliar[i] = matriz[i][j];
                }
            }
        }
    }
    public static void verificaIgualdade(int[][] matriz, int[] vetor){
        int i, j, k, countIgual=0, countValor=0, countLinhaImparMatriz=0;
        
        for(i=0;i<1;i++){
            for(j=0;j<matriz[0].length;j++){
                if(j % 2 != 0){
                    countLinhaImparMatriz++;
                }
            }
        }
        
        for(i=0;i<vetor.length;i++){
            countIgual=0;
            for(j=1;j<matriz[0].length;j+=2){
                for(k=0;k<matriz.length;k++){
                    if(vetor[i] == matriz[k][j]){
                        countIgual++;
                    }
                }
            }if(countIgual >= countLinhaImparMatriz){
                    countValor++;
            }
        }
        if(countValor == matriz.length){
            System.out.println("Permutações colunas ímpares: SIM");
        }else{
            System.out.println("Permutações colunas ímpares: NAO");
        }
    }
}