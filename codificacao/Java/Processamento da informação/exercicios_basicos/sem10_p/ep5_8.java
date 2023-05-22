 import java.util.Scanner;

public class ep5_8{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int matA[][], matB[][], matC[][], l1, c1, l2, c2, i;
        l1 = scan.nextInt();
        c1 = scan.nextInt();
        matA = new int[l1][c1];
        
        leMatriz(matA, scan);
        
        l2 = scan.nextInt();
        c2 = scan.nextInt();
        matB = new int[l2][c2];
        
        leMatriz(matB, scan);
        
        matC = new int[l1][c2];
        
        multiplicaMatrizesX3(matA, matB, matC, l2);
        
        exibeMatriz(matC);
        
    }
    public static void leMatriz(int[][] matriz, Scanner scan){
        int i, j;
        for(i=0;i<matriz.length;i++){
            for(j=0;j<matriz[0].length;j++){
                matriz[i][j] = scan.nextInt();
            }
        }
    }
    public static void multiplicaMatrizesX3(int[][] matA, int[][] matB, int[][] matC, int l2){
        int i, j, k;
        for(i=0;i<matC.length; i++){
            for(j=0;j<matC[0].length;j++){
                for(k=0;k<l2;k++){
                    matC[i][j] += matA[i][k] * matB[k][j] * 3;
                }
            }
        }
    }
    public static void exibeMatriz(int[][] matriz){
        int i, j;
        for(i=0;i<matriz.length;i++){
            for(j=0;j<matriz[0].length;j++){
                System.out.print(matriz[i][j] + " ");
            }
            System.out.println();
        }
    }
}