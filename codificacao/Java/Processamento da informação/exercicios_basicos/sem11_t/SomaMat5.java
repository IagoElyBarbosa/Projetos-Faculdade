import java.util.Scanner;

public class SomaMat5{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int mat[][], n, m;
        n = scan.nextInt();
        m = scan.nextInt();
        mat = new int[n][m];

        leMatriz(mat, scan);

        System.out.println("Somatorio da Matriz: " + somaMat(mat));
    }
    public static void leMatriz(int[][] matriz, Scanner scan){
        int i, j;
        for(i=0;i<matriz.length;i++){
            for(j=0;j<matriz[0].length;j++){
                matriz[i][j] = scan.nextInt();
            }
        }
    }
    public static long somaMat(int[][] matriz){
        int i, j;
        long soma=0;
        for(i=0;i<matriz.length;i++){
            for(j=0;j<matriz[0].length;j++){
                soma += matriz[i][j];
            }
        }
        return soma;
    }
}