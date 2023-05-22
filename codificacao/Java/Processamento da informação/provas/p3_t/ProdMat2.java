import java.util.Scanner;

public class ProdMat2{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int matA[][], matB[][];
        long matC[][];
        int n, m, p, q;
        n = scan.nextInt();
        m = scan.nextInt();
        p = scan.nextInt();
        q = scan.nextInt();
        matA = new int[n][m];
        matB = new int[p][q];

        if(m != p){
            System.out.println("impossivel multiplicar as matrizes");
        }else{
            leMatriz(matA, scan);
            leMatriz(matB, scan);
            matC = new long[n][q];

            multiplicaExibeMatriz(matA, matB, matC, p);
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
    public static void multiplicaExibeMatriz(int[][] matrizA, int[][] matrizB, long[][] matrizC, int p){
        int i, j, k;
        for(i=0;i<matrizC.length;i++){
            for(j=0;j<matrizC[0].length;j++){
                for(k=0;k<p;k++){
                    matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
                }
            }
        }

        for(i=0;i<matrizC.length;i++){
            for(j=0;j<matrizC[0].length;j++){
                if(j != matrizC[0].length - 1){
                    System.out.print(matrizC[i][j] + " ");
                }else{
                    System.out.println(matrizC[i][j]);
                }
            }
        }
    }
}