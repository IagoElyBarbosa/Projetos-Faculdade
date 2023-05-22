import java.util.Scanner;

public class Triangular1{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int mat[][], n, countDifZero;
        n = scan.nextInt();
        mat = new int[n][n];

        leMatriz(mat, scan);
        countDifZero = contaDifZero(mat);

        if(countDifZero == 0){
            System.out.println("SIM");
        }else{
            System.out.println("NAO");
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
    public static int contaDifZero(int[][] matriz){
        int i, j, countDifZero=0;
        for(i=0;i<matriz.length;i++){
            for(j=0;j<i;j++){
                if(i != 0){
                    if(matriz[i][j] != 0){
                        countDifZero++;
                    }
                }
            }
        }return countDifZero;
    }
}