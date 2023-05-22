import java.util.Scanner;

public class ep5_6{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int mat[][], n;
        n = scan.nextInt();
        mat = new int[n][n];
        
        leMatriz(mat, scan);
        dobraMatriz(mat, n);
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
    public static void dobraMatriz(int[][] mat, int n){
        int i, j, posFin, posIni=0;
        for(i=0;i<mat.length;i++){
            posFin = n - 1;
            posIni = 0;
            for(j=0;j<mat[0].length/2;j++){
                mat[i][posIni] = mat[i][posIni] + mat[i][posFin];
                mat[i][posFin] = 0;
                posFin --;
                posIni++;
            }
        }
        for(i=0;i<mat[0].length;i++){
            posFin = n - 1;
            posIni = 0;
            for(j=0;j<mat.length/2;j++){
                mat[posIni][i] = mat[posIni][i] + mat[posFin][i];
                mat[posFin][i] = 0;
                posFin--;
                posIni++;
            }
        }
    }
    public static void exibeMatriz(int[][] mat){
        int i, j;
        for(i=0;i<mat.length;i++){
            for(j=0;j<mat[0].length;j++){
                if(mat[i][j] != 0){
                    System.out.print(mat[i][j] + " ");    
                }
            }
            if(i < mat.length/2){
                System.out.println();    
            }
        }
    }
}