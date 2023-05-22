import java.util.Scanner;

public class ep5_4{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int l, c, mat[][];
        l = scan.nextInt();
        c = scan.nextInt();
        mat = new int[l][c];

        leMatriz(mat, scan);
        ordenaMatriz(mat);
        exibeMatriz(mat);
    }
    public static void leMatriz(int[][] mat, Scanner scan){
        int i, j;
        for(i=0;i<mat.length;i++){
            for(j=0;j<mat[0].length;j++){
                mat[i][j] = scan.nextInt();
            }
        }
    }
    public static void ordenaMatriz(int[][] mat){
        int i, j, k, aux;
        for(i=0;i<mat.length;i++){
            for(j=0;j<mat[0].length;j++){
                for(k=j+1;k<mat[0].length;k++){
                    if(mat[i][j] > mat[i][k]){
                        aux = mat[i][j];
                        mat[i][j] = mat[i][k];
                        mat[i][k] = aux;
                    }
                }
            }
        }
    }
    public static void exibeMatriz(int[][] mat){
        int i, j;
        for(i=0;i<mat.length;i++){
            for(j=0;j<mat[0].length;j++){
                System.out.print(mat[i][j] + " ");
            }
            System.out.println();
        }
    }
}