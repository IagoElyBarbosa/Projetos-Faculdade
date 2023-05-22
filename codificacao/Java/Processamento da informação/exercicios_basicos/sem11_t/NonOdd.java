import java.util.Scanner;

public class NonOdd{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int mat[][], n, m;
        n = scan.nextInt();
        m = scan.nextInt();
        mat = new int[n][m];

        leMatriz(mat, scan);
        nonOddMat(mat);
        exibeMatriz(mat);
    }
    public static void leMatriz(int[][] matriz, Scanner scan){
        int i, j;
        for(i=0;i<matriz.length;i++){
            for(j=0;j<matriz[0].length;j++){
                matriz[i][j] = scan.nextInt();
            }
        }
    }
    public static void nonOddMat(int[][] matriz){
        int i, j;
        for(i=0;i<matriz.length;i++){
            for(j=0;j<matriz[0].length;j++){
                if(matriz[i][j] % 2 != 0){
                    matriz[i][j] = -1;
                }
            }
        }
    }
    public static void exibeMatriz(int[][] matriz){
        int i, j;
        for(i=0;i<matriz.length;i++){
            for(j=0;j<matriz[0].length;j++){
                if(j != matriz[0].length - 1){
                    System.out.print(matriz[i][j] + " ");
                }else{
                    System.out.println(matriz[i][j]);
                }
            }
        }
    }
}